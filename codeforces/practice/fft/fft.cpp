#include<bits/stdc++.h> // FFT, Fast-Exponentiation, Polynomials
using namespace std;
#define forn(i,x,n) for(int i=x; i<n; ++i)
typedef complex<double> cd;

vector<int> order;

void fft(vector<cd> &a,bool invert){
    int n=a.size();
    forn(i,0,n)
        if(order[i]<i)
            swap(a[i],a[order[i]]);
    for(int len=2; len <= n; len <<= 1){
        double ang=2*acos(-1.0)/(invert?-len:len);
        cd wlen(cos(ang),sin(ang));
        int half=len>>1;
        vector<cd> w(half);
        cd w0(1);
        forn(i,0,half)
            w[i]=w0,w0 *= wlen;
        for(int i=0; i<n; i+=len)
            forn(j,0,half){
                cd u=a[i+j], v=a[i+j+half]*w[j];
                a[i+j]=u+v, a[i+j+half]=u-v;
            }
    }
    if(invert)
        forn(i,0,n)
            a[i]/=n;
}
 
void precalc(int n,int L){
    order.resize(n);
    forn(i,0,n){
        int res=0;
        forn(j,0,L)
            if(i & 1<<j)
                res |= 1<<(L-j-1);
        order[i]=res;
    }
}
 
vector<int> fft_mul(vector<int> a, vector<int> b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1, l=0;
    while (n < a.size()+b.size()) 
        n <<= 1, l++;
    fa.resize(n);
    fb.resize(n);
    precalc(n,l);

    fft(fa, false);
    fft(fb, false);
    forn(i,0,n)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<int> res(n);
    forn(i,0,n)
        res[i] = (int)(fa[i].real()+0.5);
    while(!res.back() && res.size()>1)
        res.pop_back();
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m),c;
    forn(i,0,n)
        cin>>a[i];
    forn(i,0,m)
        cin>>b[i];
    c=fft_mul(a,b);
    for(auto x:c)
        cout<<x<<' ';
}
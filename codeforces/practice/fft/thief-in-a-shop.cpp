#include<bits/stdc++.h> // FFT, Fast-Exponentiation, Polynomials
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;
typedef complex<double> cd;

// void fft(vector<cd> & a, bool invert) {
//     int n = a.size();
//     if (n == 1)
//         return;

//     vector<cd> a0(n/2), a1(n/2);
//     for (int i=0; 2*i<n; i++) {
//         a0[i] = a[2*i];
//         a1[i] = a[2*i+1];
//     }
//     fft(a0, invert);
//     fft(a1, invert);

//     double ang = 2*acos(-1.0)/(invert?-n:n);
//     cd w(1), wn(cos(ang), sin(ang));
//     for (int i = 0; 2 * i < n; i++) {
//         a[i] = a0[i]+w * a1[i];
//         a[i+n/2] = a0[i] - w * a1[i];
//         if (invert) {
//             a[i] /= 2;
//             a[i+n/2] /= 2;
//         }
//         w *= wn;
//     }
// }

vector<int> order;

void fft(vector<cd> &a,bool invert){
    int n = a.size();
    forn(i,0,n)
        if(order[i] < i)
            swap(a[i],a[order[i]]);
    for(int len = 2; len <= n; len <<= 1){
        double ang = 2 * acos(-1.0) / len * (invert ? -1 : 1);
        cd wlen (cos(ang), sin(ang));
        int half = len >> 1;
        vector<cd> w(half);
        cd w0(1);
        forn(i,0,half)
            w[i] = w0,w0 *= wlen;
        for (int i = 0; i < n; i += len){
            forn(j,0,half){
                cd u = a[i+j];
                cd v = a[i+j+half] * w[j];
                a[i+j] = u+v;
                a[i+j+half] = u - v;
            }
        }
    }
    if(invert)
        forn(i,0,n)
            a[i] /= n;
}
 
void precalc(int n,int L){
    order.resize(n);
    forn(i,0,n){
        int res = 0;
        forn(j,0,L)
            if(i & 1<<j)
                res |= 1<<(L - j - 1);
        order[i] = res;
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
        res[i] = (int)(fa[i].real()+0.5) >0;
    while(!res.back() && res.size()>1)
        res.pop_back();
    return res;
}

vector<int> pow(vector<int> a, int n){
    vector<int> res(a.size()); res[0]=1;
    while(n){
        if(n%2)
            res=fft_mul(res,a);
        a=fft_mul(a,a);
        n>>=1;
    }
    return res;
}

int main(){
    int n,k,aa;
    cin>>n>>k;
    vector<int> a(1001),b;
    forn(i,0,n)
        cin>>aa, a[aa]=1;
    b=pow(a,k);
    forn(i,0,b.size())
        if(b[i])
            cout<<i<<' ';
}
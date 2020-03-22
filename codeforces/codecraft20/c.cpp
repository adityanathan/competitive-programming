#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

#include <bits/stdc++.h> 
using namespace std; 

using cd = complex<double>;
const double PI = acos(-1);

void fastscan(int &number) 
{ 
	//variable to indicate sign of input number 
	bool negative = false; 
	register int c; 

	number = 0; 

	// extract current character from buffer 
	c = getchar(); 
	if (c=='-') 
	{ 
		// number is negative 
		negative = true; 

		// extract the next character from the buffer 
		c = getchar(); 
	} 

	// Keep on extracting characters if they are integers 
	// i.e ASCII Value lies from '0'(48) to '9' (57) 
	for (; (c>47 && c<58); c=getchar()) 
		number = number *10 + c - 48; 

	// if scanned input has a negative sign, negate the 
	// value of the input number 
	if (negative) 
		number *= -1; 
} 

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

// vector<int> multiply(vector<int> const& a, vector<int> const& b) {
//     vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
//     int n = 1;
//     while (n < a.size() + b.size()) 
//         n <<= 1;
//     fa.resize(n);
//     fb.resize(n);

//     fft(fa, false);
//     fft(fb, false);
//     for (int i = 0; i < n; i++)
//         fa[i] *= fb[i];
//     fft(fa, true);

//     vector<int> result(n);
//     for (int i = 0; i < n; i++)
//         result[i] = round(fa[i].real());
//     return result;
// }


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	int nn,m,p;

	fastscan(nn);
	fastscan(m);
	fastscan(p);
	vector<int> a(nn),b(m);
	forn(i,nn+m){
		if(i<nn)
		fastscan(a[i]);
	}
	forn(i,m+nn){
		if(i<m)
		fastscan(b[i]);
	}
	// vector<int> c;

	// c=multiply((vector<int> const&)a,(vector<int> const&)b);

	vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    // vector<int> result(n);
    // for (int i = 0; i < n; i++)
    //     result[i] = round(fa[i].real());

	// int j=0;
	forn(i,nn+m-1){
		// if(i%2==1)
			// continue;
		// if (((int)round(fa[i].real()))%p!=0){
		if (round(fa[i].real())%p!=0){
			cout<<i<<" ";
			break;
		}
		// j++;
	}
	return 0;
}
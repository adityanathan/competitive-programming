#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long fact(long n){
    if (n==0) return 1;
    return n*fact(n-1);
}
// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
    map <long,long> m;
    for(auto x:arr){
        if(m.find(x)==m.end())
            m[x]=0;
        m[x]++;
        if(x%r==0 && m.find(it->first/r)!=m.end() && m.find(it->first*r)!=m.end()){
            count+=it->second * m[it->first/r] *m[it->first*r];
        }
    }
    long count=0;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->first%r==0 && m.find(it->first/r)!=m.end() && m.find(it->first*r)!=m.end()){
            count+=it->second * m[it->first/r] *m[it->first*r];
        }
    }
    if(r==1){
        long ans=0;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>=3){
                long t=it->second;
                ans+=(t)*(t-1)*(t-2)/6;
            }
        }
        return ans;
    }
    return count;
}

int main()
{

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    long ans = countTriplets(arr, r);

    cout << ans << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    string s;
    cin>>s;
    
    string revs = s;
    reverse(revs.begin(), revs.end());
    
    if(s==revs){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
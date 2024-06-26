#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);

        int n=s.size();
        string a="";
        for(int i=0;i<n;i++){
            if(s[i]>=97 and s[i]<=122){
                a+=s[i];
            }else if(s[i]>=48 and s[i]<=57){
                    a+=s[i];
            }
            else{
                //die
            }
        }
        string b=a;
        reverse(b.begin(),b.end());

        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;


        return a==b;



    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}
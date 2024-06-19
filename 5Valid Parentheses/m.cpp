#include <bits/stdc++.h>    
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;

        if(n%2){
            return false;
        }else{

            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    st.push('(');
                }else if(s[i]=='{'){
                    st.push('{');
                }else if(s[i]=='['){
                    st.push('[');
                }else if(s[i]==')'){
                    if(st.top()=='(')st.pop();
                    else return false;
                }else if(s[i]=='}'){
                    if(st.top()=='{')st.pop();
                    else return false;
                }else if(s[i]==']'){
                    if(st.top()=='[')st.pop();
                    else return false;
                }
            }


        }

        return st.empty();

    }
};

int main() {
    Solution s;
    cout << s.isValid("()") << endl;
    return 0;
}
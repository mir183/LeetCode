#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        if(n%2){
            return false;
        }else{
            for(char c:s){
                if(c=='(' or c=='{' or c=='['){
                    st.push(c);
                }else{
                    if(st.empty() or (c==')' and st.top()!='(') or  (c=='}' and st.top()!='{') or (c==']' and st.top()!='[')){
                        return false;
                    }
                    st.pop();
                }
            }
        }
        return st.empty();


    }
};

int main(){
    Solution s;
    cout<<s.isValid("()")<<endl;
    cout<<s.isValid("()[]{}")<<endl;
    cout<<s.isValid("(]")<<endl;
    cout<<s.isValid("([)]")<<endl;
    cout<<s.isValid("{[]}")<<endl;
    return 0;
}


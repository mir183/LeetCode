class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        string f=v[0];
        string l=v.back();

        int mn=min(f.size(),l.size());

        for(int i=0;i<mn;i++){
            if(f[i]==l[i]){
                ans+=f[i];
            }
        }

    
    
    
        return ans;
    }
};
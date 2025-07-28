class TrieNode{
    public:
    vector<TrieNode *> v;
    bool isEnd;
    TrieNode(): v(26,NULL), isEnd(false){};

};

class Trie {
    TrieNode* root;
public:
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string s) {
        int n=s.size();
        TrieNode * node =root;
        for(int i=0;i<n;i++){
            if(node->v[s[i]-'a']==NULL){
                node->v[s[i]-'a']=new TrieNode();
            }
            node = node->v[s[i]-'a'];

        }
        node->isEnd=true;
    }
    
    bool search(string word) {
        int n=word.size();
        TrieNode* node = root;
        for(int i=0;i<n;i++){
            if(node->v[word[i]-'a']==NULL){
                return false;
            }
            node = node->v[word[i]-'a'];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        int n=prefix.size();
        TrieNode* node = root;
        for(int i=0;i<n;i++){
            if(node->v[prefix[i]-'a']==NULL)return false;
            node = node -> v[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
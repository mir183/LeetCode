#include<bits/stdc++.h>
using namespace std;

// Paste here

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> nodeMap;
        Node* current = head;

        while(current) {
            nodeMap[current] = new Node(current->val);
            current = current->next;
        }
        current = head;
        while(current){
            Node* copy= nodeMap[current];
            copy->next = nodeMap[current->next];
            copy->random = nodeMap[current->random];
            current = current->next;
        }
        return nodeMap[head];
    }
};




signed main() {
    Solution s;
    
    return 0;
}
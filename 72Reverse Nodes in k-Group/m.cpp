#include<bits/stdc++.h>
using namespace std;

// Paste here
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* rev(ListNode* start,ListNode* end){
        ListNode* cur=start;
        ListNode* prev=NULL;
        while(cur!=end){
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp and cnt<k){
            tmp=tmp->next;
            cnt++;
        }
        if(cnt<k)return head;
        ListNode * new_head=rev(head,tmp);
        head->next=reverseKGroup(tmp,k);
        return new_head;
    }
};



signed main() {
    Solution s;
    
    return 0;
}
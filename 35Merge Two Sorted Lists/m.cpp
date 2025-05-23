#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if(list1==NULL) return list2;
            if(list2==NULL) return list1;

            ListNode* dummy= new ListNode(0);
            ListNode* cur=dummy;

            while(list1 and list2){
                if(list1->val > list2->val){
                    cur->next=list2;
                    list2=list2->next;
                }else{
                    cur->next=list1;
                    list1=list1->next;
                }
                cur=cur->next;
            }
            if(list1){
                cur->next=list1;
            }else{
                cur->next=list2;
            }
            
            return dummy->next;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}
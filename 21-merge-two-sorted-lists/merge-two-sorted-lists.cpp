/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//adrish
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy_node = new ListNode(-1);
        ListNode* previous = dummy_node;
        ListNode* ptr1 = list1,*ptr2=list2;
        while(ptr1 && ptr2){
            if((ptr1->val) <= (ptr2->val)){
                //ListNode* node=new ListNode(ptr1->val);
                previous->next=ptr1;
                ptr1=ptr1->next;
            }
            else{
                //ListNode* node=new ListNode(ptr2->val);
                previous->next = ptr2;
                ptr2=ptr2->next;
            }
            previous=previous->next;
        }
        if(ptr1) previous->next=ptr1;
        else if(ptr2) previous->next=ptr2;
        return dummy_node->next;
    }
};
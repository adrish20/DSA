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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode* dummy_node=new ListNode(-1);
        ListNode* ptr=dummy_node;
        priority_queue< pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>> > pq;
        for(auto &p:lists){
            if(p!=NULL) pq.push({p->val , p});
        }
        while(pq.size()){
            ListNode* node=pq.top().second;
            pq.pop();
            ptr->next=node;
            node=node->next;
            if(node!=NULL) pq.push({node->val,node});
            ptr=ptr->next;
        }
        return dummy_node->next;

        
    }
};
// Day 2 Problem No 3

// 141. Linked List Cycle => https://leetcode.com/problems/linked-list-cycle/description/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        map<ListNode*,bool> v;
        ListNode* tmp = head;
        while(tmp!=NULL){
            if(v[tmp]==true) return true;
            v[tmp] = true;
            tmp = tmp->next;
        }
        return false;
    }
};
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
    int pairSum(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp!=NULL){
            nodes.push_back(temp);
            temp = temp->next;
        }
        int maxSum = INT_MIN;
        int n=nodes.size();
        for(int i=0;i<(n/2);i++){
            int sum = nodes[i]->val+nodes[n-1-i]->val;
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};
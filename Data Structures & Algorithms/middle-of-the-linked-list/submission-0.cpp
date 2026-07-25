class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp != NULL){
            nodes.push_back(temp);
            temp = temp->next;
        }
        return nodes[nodes.size()/2];
    }
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode *temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        int k = count/2;
        for(int i = 0 ; i < k ; i++)
        {
            head = head->next;
        }
        return head;
    }
};
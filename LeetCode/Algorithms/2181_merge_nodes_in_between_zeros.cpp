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
    ListNode* mergeNodes(ListNode* head) {
        
        int sum {0};
        ListNode *newList = new ListNode(),
                 *head_newList = newList;

        while (head != nullptr)
        {
          if (head->val == 0 && sum)
          {
            newList->val = sum;
            sum = 0;

            if (head->next != nullptr)
            {
              ListNode *node = new ListNode();
              newList->next = node;
              newList = newList->next;
            }
          }
          else
          {
            sum += head->val;
          }
          
          head = head->next;
        }

        return head_newList;
    }
};

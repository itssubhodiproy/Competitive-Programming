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
void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    temp->val = item;
    temp->next = *root;
    *root = temp;
}
ListNode *arrayToList(vector<int> v, int n)
{
    ListNode *root = NULL;
    for (int i = n-1; i >= 0 ; i--)
        insert(&root, v[i]);
    return root;
}
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        // approach1/
        ListNode* temp=head;
        int sum=0;
        vector<int> v;
        while(temp!=NULL){
            if(temp->val==0 && sum!=0){
                v.push_back(sum);
                temp=temp->next;
                sum=0;continue;
            }
            sum+=temp->val;
            temp=temp->next;
        }
        // my vector is storing all the consecutive values
        ListNode* root = arrayToList(v, v.size());
        // root=root->next;
        return root;
        
    }
};

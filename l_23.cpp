#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &list)
    {
        if (list.empty())
            return nullptr;
        if (list.size() == 1 && list[0] == nullptr)
            return nullptr;
        vector<int> temp;
        int i = 0;
        for (int i = 0; i < list.size(); i++)
        {
            while (list[i] != nullptr)
            {
                temp.push_back(list[i]->val);
                list[i] = list[i]->next;
            }
        }

        sort(temp.begin(), temp.end());
        if (temp.empty())
            return nullptr;
        ListNode *head = new ListNode(temp[0]);
        ListNode *ref = head;
        ListNode *tempo;

        for (int l = 1; l < temp.size(); l++)
        {
            tempo = new ListNode(temp[l]);
            head->next = tempo;
            head = head->next;
        }

        return ref;
    }
};
int main()
{
    Solution s;
    ListNode *first = new ListNode(1);
    ListNode *first_one = new ListNode(4);
    ListNode *first_two = new ListNode(5);

    ListNode *second = new ListNode(1);
    ListNode *second_one = new ListNode(3);
    ListNode *second_two = new ListNode(4);

    ListNode *third = new ListNode(2);
    ListNode *third_one = new ListNode(6);

    first->next = first_one;
    first_one->next = first_two;

    second->next = second_one;
    second_one->next = second_two;

    third->next = third_one;

    vector<ListNode *> list = {first, second, third};
    ListNode *ans = s.mergeKLists(list);
    while (ans!=nullptr)
    {
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    
    return 0;
}
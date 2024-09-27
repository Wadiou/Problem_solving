#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode() , *temp3 = l3;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int d1 = (l1 != nullptr) ? l1->val : 0;
            int d2 = (l2 != nullptr) ? l2->val : 0;
            int sum = d1 + d2 + carry;
            int d = sum % 10;
            carry = sum / 10;
            temp3->next = new ListNode(d);
            temp3 = temp3->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        temp3 = l3->next;
        delete l3;
        return temp3;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList(const vector<int>& values) {
    ListNode* dummy = new ListNode();
    ListNode* current = dummy;

    for (int value : values) {
        current->next = new ListNode(value);
        current = current->next;
    }

    return dummy->next;
}

int main() {
    vector<int> list1 = {2, 4, 3};
    vector<int> list2 = {5, 6, 4};

    ListNode* l1 = createList(list1);
    ListNode* l2 = createList(list2);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}

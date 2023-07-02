#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* reverseList(ListNode* head) {
    if (head == NULL or head->next == NULL){
        return head;
    }
    auto result = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return result;
}

int main() {
    
    return 0;
}
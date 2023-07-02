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
// intersection of two linked list

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* tail = headA;
    while(tail->next){
        tail = tail->next;
    }

    tail->next = headA;

    ListNode *fast = headB, *slow = headB;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            slow = headB;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            tail->next = NULL;
            return slow;
        };
    }
    tail->next = NULL;
    return NULL;
}

int main() {
    
    return 0;
}
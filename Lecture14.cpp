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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) return l2;
    else if(l2 == NULL) return l1;
    else {
        ListNode dummy(0);
        auto p=l1, q=l2, r = &dummy;
        int sum =0, carry =0;
        while(p!=NULL or q!=NULL){
            sum = (p==NULL? 0: p->val) + (q==NULL?0:q->val) +carry;
            carry = sum /10;
            sum=sum%10;
            r->next = new ListNode(sum);
            r=r->next ;

            if(p!= NULL) p=p->next;
            if(q!= NULL) q=q->next;
        }
        if(carry>0){
            r->next = new ListNode(carry);
        }
        return dummy.next;
    }
}

int main() {
    
    return 0;
}
//Given the head of a singly linked list, reverse the list, and return the reversed list.
//Example 1:
// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Example 2:


// Input: head = [1,2]
// Output: [2,1]
// Example 3:

// Input: head = []
// Output: []
#include <iostream>
using namespace std;
//* Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
  ListNode* reverseList(ListNode* head) {

    struct ListNode*Tail=NULL;
    head->next=Tail;
    Tail=head;
    return Tail;
    }
    void Display(ListNode*head){
   
        cout<<"LinkedList"<<endl;
        while(head){ //while head isn't NULL
            cout<<"-->"<<head->val;
            head=head->next;
        }
        cout<<"-->NULL"<<endl;
    }
    int main(){
    cout<<"Test Case 1"<<endl;
     ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
   
    Display(reverseList(list1));
    return 0;
    }

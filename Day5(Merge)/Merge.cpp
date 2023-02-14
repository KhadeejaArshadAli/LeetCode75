//You are given the heads of two sorted linked lists list1 and list2.

//Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

//Return the head of the merged linked list.
//**
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]
 //* Definition for singly-linked list.
 #include <iostream>
 using namespace std;
 // Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  //The above code was provided with the question
 
 
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    struct ListNode*Head=NULL;//Intializing two pointers head pointing the start and tail point the end of final list
    struct ListNode*Tail=NULL;
     if(list1 == NULL) {  //if any one the list is empty return the other one
            return list2;
        }
        if(list2 == NULL) {
            return list1;
        }
   while(list1!=NULL&&list2!=NULL){
    //if head and tail are empty means its the first element
    if(Head==NULL&&Tail==NULL){
    if(list1->val>list2->val){//Compare which is smaller if list 2 element is
      Head=list2;             //Head becomes list 2 element
      Tail=list2;             //as well as the tail since there is only one element in the list
      list2=list2->next;      //list2 first element becomes the element that the previous element(now head ) was pointing to

    }
    else{
       Head=list1;
      Tail=list1;
      list1=list1->next;
      
    }
    }
    else{
    if(list1->val>list2->val){ //for the second or third and so on elements we will compare if list2 element is smaller
      Tail->next=list2;        //tail will start point the now smaller element
      Tail=Tail->next;         //pointing value then becomes the tail
      list2=list2->next;       //list2 first element will shift
    }
    else{
      Tail->next=list1;
      Tail=Tail->next;
      list1=list1->next;
    }
   }
   }
   if(list1!=NULL){//if any of the list becomes NULL and the other isn't
    Tail->next=list1; //tail will start to point the non-empty list
     Tail=Tail->next;
   }
   if(list2!=NULL){
    Tail->next=list2;
     Tail=Tail->next;
   }
   return Head; 
  }
  void Display(ListNode*Head){
   
        cout<<"LinkedList"<<endl;
        while(Head){ //while head isn't NULL
            cout<<"-->"<<Head->val;
            Head=Head->next;
        }
        cout<<"-->NULL"<<endl;
    }

  int main(){
    cout<<"Test Case 1"<<endl;
     ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    Display(mergeTwoLists(list1,list2));
     cout<<"Test Case 2"<<endl;
      ListNode* list3 = new ListNode();
       ListNode* list4 = new ListNode();
        Display(mergeTwoLists(list3,list4));
         cout<<"Test Case 3"<<endl;
          ListNode* list5 = new ListNode(0);
       ListNode* list6 = new ListNode();
        Display(mergeTwoLists(list5,list6));
        return 0;



  }
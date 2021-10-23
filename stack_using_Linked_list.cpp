//Wap to implement stack using linked list and perform the push and pop operation on it


#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display()
    {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
	 cout<< ptr->data <<" ";
	 ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   clrscr();
   cout<<"*****Stack Using Linked List*****\n";
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exdit"<<endl;
   do {
      cout<<"Anupreksha Enter your choice: "<<endl;
      cin>>ch;
      switch(ch) {
	 case 1: {
	    cout<<"Enter value to be pushed:"<<endl;
	    cin>>val;
	    push(val);
	    break;
	 }
	 case 2: {
	    pop();
	    break;
	 }
	 case 3: {
	    display();
	    break;
	 }
	 case 4: {
	    cout<<"Exit"<<endl;
	    break;
	 }
	 default: {
	    cout<<"Invalid Choice"<<endl;
	 }
      }
   }while(ch!=4);
   return 0;
}

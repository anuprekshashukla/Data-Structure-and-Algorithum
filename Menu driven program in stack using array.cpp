//Wap which is menu driven and asking to you for multiple insertion and deletion in stack.


#include<iostream.h>
#include<conio.h>
#include<process.h>
#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   clrscr();
   while(1){
      cout<<"\n------MENU DRIVEN IN STACK USING ARRAY------\n";
      cout<<"1. Push\n2. Pop\n3. Display\n4. Exit";
      cout<<"\nAnupreksha Enter your choice: ";
      cin>>choice;
      switch(choice){
	 case 1: cout<<"Enter the value to be insert: ";
		 cin>>value;
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: cout<<"\nSorry You Enter Wrong Choice";
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      cout<<"\nStack is Full!!! Insertion is not possible!!!";
   else{
      top++;
      stack[top] = value;
      cout<<"Insertion success!!!\n";
   }
}
void pop(){
   if(top == -1)
      cout<<"Stack is Empty!!! Deletion is not possible!!!\n";
   else{
      cout<<"Deleted :"<<stack[top];
      top--;
   }
}
void display(){
   if(top == -1)
      cout<<"Stack is Empty!!!\n";
   else{
      int i;
      cout<<"Stack elements are:\n";
      for(i=top; i>=0; i--)
	 cout<<stack[i];
   }
}

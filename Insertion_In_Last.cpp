//Wap to insert an element in linked list at the last position


#include<iostream.h>
#include<malloc.h>
#include<conio.h>
struct node 
{
  int data;          
  struct node *next;  
}*head;

void createList(int n);
void insertNodeAtEnd(int data);
void displayList();

void main()
{
int n, data;
clrscr();
cout<<"Enter the total number of nodes: ";
cin>>n;
createList(n);

cout<<"\nData in the list \n";
displayList();

cout<<"\nEnter data to insert at end of the list: ";
cin>>data;
insertNodeAtEnd(data);

cout<<"\nData in the list \n";
displayList();

getch();
}

void createList(int n)
{
struct node *newNode, *temp;
int data, i;
head = (struct node *)malloc(sizeof(struct node));
cout<<"Enter the data of node ";
cin>>data;
head->data = data; 
head->next = NULL; 
temp = head;
for(i=2; i<=n; i++)
{
 newNode = (struct node *)malloc(sizeof(struct node));
cout<<"Enter the data of node ";
cin>>data;
newNode->data = data;
newNode->next = NULL; 
temp->next = newNode; 
temp = temp->next; 
}
cout<<"SINGLY LINKED LIST CREATED SUCCESSFULLY\n";
}

void insertNodeAtEnd(int data)
{
struct node *newNode, *temp;
newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = data; 
newNode->next = NULL; 
temp = head;
while(temp != NULL && temp->next != NULL)
temp = temp->next;
temp->next = newNode; 
 cout<<"DATA INSERTED SUCCESSFULLY\n"<<endl;
}

void displayList()
{
struct node *temp;
temp = head;
while(temp != NULL)
{
cout<<"\nData = "<<temp->data;
temp = temp->next;               
}
}

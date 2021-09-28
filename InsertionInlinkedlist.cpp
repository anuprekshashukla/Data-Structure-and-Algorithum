//Wap to insert an element in the existing linkedlist at the beginning


#include<iostream.h>
#include<malloc.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createList(int n);
void insertNodeAtBeginning(int data);
void displayList();


void main()
{
    int n, data;
    clrscr();
    cout<<"Enter the total no of Nodes";
    cin>>n;
    createList(n);

    cout<<"Data in the list";
    displayList();
    cout<<"\nEnter the data insert at the beginning of the list"<<endl;
    cin>>data;
    insertNodeAtBeginning(data);

    cout<<"data in the list";
    displayList();

    getch();
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

	cout<<"Enter the node ";
	cin>>data;

	head->data = data;
	head->next = NULL;

	temp = head;

	for(i=2; i<=n; i++)
	{
	    newNode = (struct node *)malloc(sizeof(struct node));

		cout<<"Enter the data of node  ";
		cin>>data;

		newNode->data = data;
		newNode->next = NULL;

		temp->next = newNode;

		temp = temp->next;
       }

	cout<<"SINGLY LINKED LIST CREATED SUCCESSFULLY\n"<<endl;
}

void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = head;

	head = newNode;

	cout<<"DATA INSERTED SUCCESSFULLY\n"<<endl;
}

void displayList()
{
    struct node *temp;
	temp = head;
	while(temp != NULL)
	{
	    cout<<"\nData="<<temp->data;
	    temp = temp->next;
	}
}

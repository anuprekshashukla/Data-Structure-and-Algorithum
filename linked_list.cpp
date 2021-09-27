//Wap to create a linked list with five elements and display it


#include<iostream.h>
#include<malloc.h>

struct node
{
 int data;
struct node *next;
}*first;
void main()
{
node *n1,*n2,*n3,*n4,*n5;
n1=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data in the First node";
cin>>n1->data;
n1->next=NULL;
first=n1;

n2=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data in the Second node"<<endl;
cin>>n2->data;
n2->next=NULL;
n1->next=n2;

n3=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data in the Third node"<<endl;
cin>>n3->data;
n3->next=NULL;
n2->next=n3;

n4=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data in the Fourth node"<<endl;
cin>>n4->data;
n4->next=NULL;
n3->next=n4;

n5=(struct node*)malloc(sizeof(struct node));
cout<<"Enter data in the Fifth node"<<endl;
cin>>n5->data;
n5->next=NULL;
n4->next=n5;

struct node *temp;
temp=first;
while(temp!=NULL)
{
cout<<temp->data<<"-->";
temp=temp->next;
}
cout<<"NULL\n";
}


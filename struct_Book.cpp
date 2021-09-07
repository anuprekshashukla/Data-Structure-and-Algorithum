#include<iostream.h>
#include<conio.h>
struct Book
{
char name[20];
int  pages;
char writter_name[20];
};
int main()
{
struct Book b[2];
for(int i=0;i<2;i++)
{
  cout<<"\t\tBOOKS DETAILS:"<<i+1<<endl<<endl;
  cout<<"Enter Book Name:"<<endl;
  cin>>b[i].name;
  cout<<"Enter No of Pages:"<<endl;
  cin>>b[i].pages;
  cout<<"Enter Writter Name:"<<endl;
  cin>>b[i].writter_name;
}
for(i=0;i<2;i++)
{
  cout<<"\t\tBOOKS DETAILS GIVEN BELOW:"<<endl;
  cout<<"BOOK NAME:"<<b[i].name<<endl;
  cout<<"NO. OF PAGES:"<<b[i].pages<<endl;
  cout<<"WRITTER NAME:"<<b[i].writter_name<<endl;
}
}

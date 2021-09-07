#include<iostream.h>
#include<conio.h>
struct Building
{
int No_of_Gates;
char name[20];
int floor;
int No_Of_Security_Gards;
int No_of_lifts;
int parking_area;
int No_of_Blocks;
};
int main()
 {
  clrscr();
  struct Building build[3];
  //TAKING VALUES
  for(int i=0;i<3;i++)
   {
     cout<<"\t\tBUILDING DETAILS:"<<i+1<<endl<<endl;
     cout<<"Enter the Name of Building:"<<endl;
     cin>>build[i].name;
     cout<<"Enter the No. of Floor:"<<endl;
     cin>>build[i].floor;
     cout<<"Enter the No.of Security Gards:"<<endl;
     cin>>build[i].No_Of_Security_Gards;
     cout<<"Enter the NO. of Lifts:"<<endl;
     cin>>build[i].No_of_lifts;
     cout<<"Enter Parking Area:"<<endl;
     cin>>build[i].parking_area;
     cout<<"Enter No of Block:"<<endl;
     cin>>build[i].No_of_Blocks;
     cout<<"Enter No of Gates:"<<endl;
     cin>>build[i].No_of_Gates;
   }
  //PRINTING VALUES
   for(i=0;i<3;i++)
   {
      cout<<"\t\tBUILDING DETAILS:"<<endl<<endl;
      cout<<"BUILDING NAME: "<<build[i].name<<endl;
      cout<<"TOTAL FLOOR :"<<build[i].floor<<endl;
      cout<<"TOTAL Security Gards:"<<build[i].No_Of_Security_Gards<<endl;
      cout<<"PARKING AREAS :"<<build[i].parking_area<<endl;
      cout<<"BLOCKS :"<<build[i].No_of_Blocks<<endl;
      cout<<"TOTAl GATES:"<<build[i].No_of_Gates<<endl;
   }
 }

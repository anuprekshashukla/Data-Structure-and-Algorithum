#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,a[3][2]={{10,20},{30,40},{50,60}};
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
  {
    cout<<"Element at a["<<i<<"]["<<j<<"]:";
    cout<<a[i][j]<<endl;
  }
}
getch();
}

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
  char a[20],a1[20];
  int i,j;
  cout<<"Enter any String:"<<"\n";
  gets(a);    cout<<"Reverse of the string is: ";

  for(i=0;a[i]!='\0';++i);
     for(j=i-1;j>=0;--j)
	cout<<a[j];

  getch();
}

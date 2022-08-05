#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j;
	char x[80];
	cout<<"\nnhap mot chuoi : ";
	gets(x);
	for (i=j=0;x[i]!=NULL;i++)
	if (x[i]!='a')
	{
		x[j]=x[i];
		j++;
	}
	x[j]=NULL;
	cout<<"\nChuoi ky tu sau khi bo ky tu a la :";
	puts(x);
	getch();
}

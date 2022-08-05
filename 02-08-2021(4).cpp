#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	char ten[25], *tentro;
	tentro=ten;
	int i,sokytu;
	cout<<"\n nhap mot chuoi ky tu : ";
	gets(ten);
	cout<<"\n ban muon trich bao nhieu ky tu : ";
	cin>>sokytu;
	for (i=0;i<sokytu;i++)
	cout<<*tentro++;
	getch();
}


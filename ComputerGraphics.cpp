PROGRAM:
/*GENERATION OF BAR-GRAPH*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,n,i,i1=0;
	float data[100]={0},total=0;
	clrscr();
	printf("\n\aEnter total number of values that form the input: ");
	scanf("%d",&n);
	printf("\n\aEnter the values...");
	printf("\n\a===================\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&data[i]);
		total=total+data[i];
	}
	for(i=0;i<n;i++)
	{
		data[i]=(float)(data[i]/total)*500;
	}
	initgraph(&gd,&gm,"");
	line(20,450,630,450);
	line(20,450,20,50);
	for(i=0;i<n;i++)
	{
		setfillstyle(i+1,i+1);
		bar(50+i1,450-data[i],50+i1+20,450);
		i1=i1+50;
	}
	getch();
	closegraph();
}


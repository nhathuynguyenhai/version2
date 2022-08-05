#include<stdio.h>
#include<conio.h>
#include<string.h>
char *left(char *st,int n);
int main()
{
	char st[80];
	int n;
	printf("\n\t nhap vao mot xau : ");
	gets(st);
	printf("\n nhap vao so n=");
	scanf("%d",&n);
	printf("\n\t xau ben trai ky tu la : %s",n,left(st,n));
	getch();
}
char *left(char *st,int n)
{
	char *p;
	int i,j;
	if(strlen(st)<=n) return(st);
	i=0;
	while(i++<n-1) p[i]=st[i];
	p[i]='\0';
	return(p);
}

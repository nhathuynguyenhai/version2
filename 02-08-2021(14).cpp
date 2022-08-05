#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
 int i,j,n,m,dem,max=0;
 char s[1000];
 printf("nhap chuoi :");fflush(stdin);
 gets(s);
 for(i=0;i<strlen(s);i++)
 {
  if(s[i]!=' ')
  {
   dem=1;
   j=i+1;
  }
  while(s[j]!=' '&&j<strlen(s)){
  dem++;
  if(dem>max)
  {
   max=dem;
   n=i;
   m=j;
  }
  j++;
  }
 }
 printf("\ntu dai nhat :\n");
 for(int i=n;i<=m;i++)
 printf("%c",s[i]);
 
 getch();
}

#include<iostream>
#include<string.h>
using namespace std;
int i=0,j,n,n1,n2,vt;
char s[500],s1[500], s2[500];
void thay()
{
n=strlen(s);n1=strlen(s1);n2=strlen(s2);
while(s[i]){
j=0;vt=i;
while(s1[j]&&s[vt]==s1[j]) { vt++;j++;}
if(j==n1)
{
memmove(s+i+n2,s+i+n1,n-n1-i+1);
strncpy(s+i,s2,n2);
i+=strlen(s2); n+=n2-n1;
}
else i++;
}   
}
int main()
{
cout<<"Nhap vao doan van ban: ";
gets(s);
cout<<"Nhap vao tu can tim: ";
gets(s1);
cout<<"Nhap vao tu thay the: ";
gets(s2);
thay();
cout<<"Doan van ban sau khi thay the la:";
puts(s);
}

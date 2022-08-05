#include <iostream>
#include <cstdlib>
using namespace std;
char *left(char *dich,const char*nguon,int l);
int main()

{

    char s1[200];
  cout<<  left(s1,"cong nghe thong tin",4); // trich ra 4 ky tu o ben trai ket qua la "cong"




}
char *left(char *dich,const char*nguon,int l)
{
    int k=0;
    char *p=dich;
    while ((k<l) && (*nguon)) {*dich++=*nguon++;k++;}
    *dich='\0';
    return p;
}

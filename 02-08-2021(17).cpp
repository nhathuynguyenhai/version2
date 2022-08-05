#include <stdio.h>
#include <string.h>
 
int main() {
   char s1[10] = "NgonNgu";
   char s2[] = "BacCao";
     
   int i, j, n1, n2;
     
   n1 = strlen(s1);
   n2 = strlen(s2);
     
   j=0;
   for(i = n1; i<n1+n2; i++ ) {
      s1[i] = s2[j];
      j++;
   }
     
   s1[i] = '\0';
    
   printf("\nKet qua sau khi ghep hai chuoi la:\n");
   printf("%s", s1);
 
   return 0;
}

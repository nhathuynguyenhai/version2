#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char input[100];
    char extract[100];
    int i=0,j=0,k=0,endFlag=0;

    printf("Input string: ");
    fgets(input,sizeof(input),stdin);
    input[strlen(input)-1] = '\0';

    for(i=0;i<strlen(input);i++){
        if(input[i] == '"'){

                j =i+1;
                while(input[j]!='"'){
                     if(input[j] == '\0'){
                         endFlag++;
                         break;
                     }
                     extract[k] = input[j];
                     k++;
                     j++;
                }
        }
    }
    extract[k] = '\0';

    if(endFlag==1){
        printf("1.Chuoi ban nhap chi co dau ngoac kep.\n");
        printf("2.Chuoi da trich sau dau ngoac kep\n");
        printf("3.Dam bao chuoi ban nhap khong xay ra truong hop nay:\n");
        printf("4.Sua doi kich thuoc chuoi vua nhap giong voi kich thuoc ban dau\n");

        printf("\nXuat chuoi: %s\n",extract);
    }else{ 
       printf("Xuat = %s\n",extract);
    }

    return 0;
}

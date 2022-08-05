#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void nhap(char baoquy[], char mydung[]);
int xuli(char baoquy[], char mydung[]);
 
int main()
{
    char baoquy[100], mydung[100];
    nhap(baoquy,mydung);
    int vt=xuli(baoquy,mydung);
    printf("vi tri: %d",vt);
    getch();
}
 
void nhap(char gold[], char kimmee[])
{
    do{
    printf("Nhap chuoi gold: ");
    gets(gold);
    printf("Nhap chuoi kimmee: ");
    gets(gold);
    }while(strlen(gold)<strlen(kimmee));
}
 
int xuli(char gold[], char kimmee[])
{
    int cdgold=strlen(gold), cdkimmee=strlen(kimmee), flag=-1;
    for(int i=cdgold-1;i>=0;i--)
    {
        for(int j=cdkimmee-1;j>=0;j--)
        {
            if(gold[i]==kimmee[j])
            {
                if(j==0)
                    flag=i;
                i--;
            }
        }
    }
    return flag;
}

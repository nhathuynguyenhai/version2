#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define maxten 30
#define maxtenfile 11
struct HSCB
{
char hoten[maxten+1];
int tuoi;
long luong;
} hoso;
void Hienthi(HSCB *,int);
void Nhap();
void Indanhsach();
void Them();
char tenfile[maxtenfile+1];

FILE *f1;
void Nhap()
{
int i,n;
/* Tao file */
printf("\nCho ten file : ");
gets(tenfile);
if ((f1=fopen(tenfile,"wb"))==NULL)
{
printf("\nLoi mo file - Chuong trinh ket thuc\n");
exit(1);
}
/* Vao so lieu */
printf("Vao so lieu , muon thoi thi den muc Ten an Enter\n");
n = 0; /* Dem so phan tu trong file */
do
{
printf("Ten : ");
gets(hoso.hoten);
if (strlen(hoso.hoten)==0) break; /* Ket thuc neu ten la rong */
n++;
printf("Tuoi : "); scanf("%d",&hoso.tuoi);
printf("Luong : "); scanf("%ld",&hoso.luong);
getchar(); /* Xuong dong trong file sau mot nguoi */
printf("\n");
fwrite(&hoso,sizeof(hoso),1,f1); /* Ghi vao file */
} while (1);
fclose(f1);
printf("\nKet thuc viec tao file va ghi du lieu vao .");
printf("\nTrong file nay co %d phan tu (nguoi)",n);
getch();
}

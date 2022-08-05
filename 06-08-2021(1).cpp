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

if (strlen(hoso.hoten)==0) break; /* Ket thuc neu ten
la rong */
n++;
printf("Tuoi : ");
scanf("%d",&hoso.tuoi);
printf("Luong : ");
scanf("%ld",&hoso.luong);
getchar(); /* Xuong dong trong file sau mot nguoi */
printf("\n");
fwrite(&hoso,sizeof(hoso),1,f1); /* Ghi vao file */
} while (1);
fclose(f1);
printf("\nKet thuc viec tao file va ghi du lieu vao .");
printf("\nTrong file nay co %d phan tu (nguoi)",n);
getch();
}
void Indanhsach()
{ /* Hien thi noi dung file */
int n;
do
{ printf("\nCho ten file can doc : ");
gets(tenfile);
if ((f1=fopen(tenfile,"rb"))==0)
printf("\nKhong tim thay file - Cho lai ten\n");
} while (!f1);
n = 1;
while (fread(&hoso,sizeof(hoso),1,f1))
Hienthi(&hoso,n++);
fclose(f1);
printf("\nDoc xong danh sach trong file .");
}

void Them()
{/* Them du lieu vao cuoi file */
int n;

do
{ printf("\nCho ten file can them du lieu : ");
gets(tenfile);
if ((f1=fopen(tenfile,"ab"))==0)
printf("\nKhong tim thay file - Cho lai ten\n");
}
while (!f1);
do
{
printf("Ten : ");
gets(hoso.hoten);
if (strlen(hoso.hoten)==0) break;
n++;
printf("Tuoi : ");
scanf("%d",&hoso.tuoi);
printf("Luong : ");
scanf("%ld",&hoso.luong);
getchar(); /* Xuong dong trong file sau mot nguoi */
printf("\n");
fwrite(&hoso,sizeof(hoso),1,f1); /* Ghi vao file */
}
while (1);
fclose(f1);
printf("\nKet thuc viec ghi them du lieu vao cuoi file.");
getch();
}

void Hienthi(HSCB *hoso,int so)
{
int i;
printf("\nSo ho so : %d\n",so);
printf("Ten : %s\n",hoso->hoten);
printf("Tuoi : %d\n",hoso->tuoi);
printf("Luong : %ld\n",hoso->luong);
}

int main()
{
Nhap();
Indanhsach();
Them();
Indanhsach();
getch();
}

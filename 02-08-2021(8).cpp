#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
 
struct Hocsinh{
    char ten[30];
    char gt[5];
    int age;
    float dT, dL, dH;
    float dtb = 0;
};
 
typedef Hocsinh HS;
 
void nhap(HS &hs);
void nhapN(HS a[], int n);
void xuat(HS hs);
void xuatN(HS a[], int n);
void tinhDTB(HS &sv);
void sapxep(HS a[], int n);
void xeploai(HS a);
void xeploaiN(HS a[], int n);
void xuatFile(HS a[], int n, char fileName[]);
 
int main(){
    int key;
    char fileName[] = "DSHS.txt";
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong HS: "); scanf("%d", &n);
    }while(n <= 0);
    HS a[n];
    while(true){
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY HOC SINH    **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach hoc sinh       **\n");
        printf("**      3. Sap xep hoc sinh theo DTB   **\n");
        printf("**      4. Xep loai hoc sinh          **\n");
        printf("**      5. Xuat DS hoc sinh            **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap DS hoc sinh!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS hoc sinh !");
                    xuatN(a, n);
                }else{
                    printf("\nNhap DS HS truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon sap xep HS theo STB!");
                    sapxep(a, n);
                    xuatN(a, n);
                }else{
                    printf("\nNhap DS HS truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                if(daNhap){
                    printf("\nBan da chon thoat xep loai HS!");
                    xeploaiN(a, n);
                }else{
                    printf("\nNhap DS HS truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 5:
                if(daNhap){
                    printf("\nBan da chon xuat DS HS!");
                    xuatFile(a, n, fileName);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nXuat DSSV thanh cong vao file %s!", fileName);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}
 
void tinhDTB(HS &hs){
    hs.dtb = (hs.dH + hs.dL + hs.dT)/3;    
}
 
void nhap(HS &hs){
    printf("\nNhap ten: "); fflush(stdin); gets(hs.ten);
    printf("\nNhap gioi tinh: "); gets(hs.gt);
    printf("\nNhap tuoi: "); scanf("%d", &hs.age);
    printf("\nNhap diem 3 mon: "); scanf("%f%f%f", &hs.dT, &hs.dL, &hs.dH);
    tinhDTB(hs);
}
 
void nhapN(HS a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap HS thu %d:", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void xuat(HS hs){
    printf("\nHo ten HS: %s", hs.ten);
    printf("\nGioi tinh: %s", hs.gt);
    printf("\nTuoi HS  : %d", hs.age);
    printf("\nDiem Toan - Ly - Hoa: %.2f - %.2f - %.2f", hs.dT, hs.dL, hs.dH);
    printf("\nDiem TB: %.2f", hs.dtb);
}
 
void xuatN(HS a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0;i < n;++i){
        printf("\nThong tin HS thu %d:", i+1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void sapxep(HS a[], int n){
    //Sap xep theo DTB tang dan
    HS tmp;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(a[i].dtb > a[j].dtb){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
 
void xeploai(HS hs){
    if(hs.dtb >= 8) printf("Gioi");
    else if(hs.dtb >= 6.5) printf("Kha");
    else if(hs.dtb >= 4) printf("Trung binh");
    else printf("Yeu");
}
 
void xeploaiN(HS a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0;i < n;++i){
        printf("\nXep loai cua HS thu %d la: ", i+1);
        xeploai(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void xuatFile(HS a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp, "%20s%5s%5s%10s%10s%10s%10s\n", "Ho Ten","GT", "Tuoi", "DT", "DL", "DH", "DTB");
    for(int i = 0;i < n;i++){
        fprintf(fp, "%20s%5s%5d%10f%10f%10f%10f\n", a[i].ten,a[i].gt, a[i].age, a[i].dT, a[i].dL, a[i].dH, a[i].dtb);
    }
    fclose (fp);
}

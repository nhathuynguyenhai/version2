#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int &n){
    cout<<("Nhap n: ");
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"  "<<a[i];
    }
}
void Doixung(int a[], int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i])
            dem++;
    }
    if(dem==0)
        cout<<"Mang doi xung"<<endl;
    else
        cout<<"Mang khong doi xung"<<endl;
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    cout<<"Mang da nhap:",xuat(a,n);
    cout<<endl;
    cout<<"=>", Doixung(a,n);
    return 0;
}

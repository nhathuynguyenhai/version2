#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int &n){
  cout<<("Nhap n: ");
  cin>>n;
  for(int i=0; i<n; i++){
    cout<<"a["<<i+1<<"]: ";
    cin>>a[i];
  }
}
void FindMax(int a[], int n){
  int Max=a[0];
  for(int i=1;i<n;i++){
    if(a[i]>Max){
      Max=a[i];
    }
  }
  cout<<"\nPhan tu lon nhat: "<<Max;
}
int main(){
  int a[100];
  int n;
  nhap(a,n);
  FindMax(a,n);
  return 0;
}

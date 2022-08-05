#include <iostream>
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
  for(int i=n-1;i>=0;i--){
      cout<<a[i]<<" ";
  }
}
int main(){
  int a[100];
  int n;
  nhap(a,n);
  FindMax(a,n);
  return 0;
  }

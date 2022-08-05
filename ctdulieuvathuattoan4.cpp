#include <iostream>
#include<iostream>
using namespace std;
void nhap(int a[], int &n) {
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"  "<<a[i];
    }
}
int socapnghichdao(int a[], int n){
  int dem = 0;
  for (int i=0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(a[i]>a[j]){
        dem+=1;
      }
    }
  }
  return dem;
}
int main(){
    int a[1000];
    int n;
    nhap(a, n);
    cout<<"Dãy v?a nh?p: ",xuat(a,n);
    cout<<endl<<"So cap nghich dao: "<<socapnghichdao(a, n); 
    // cout<< socapnghichdao(a, n); 
    return 0;
}
//T(n)=O(n2)
// int main() {
//   std::cout << "Hello World!\n";
// }

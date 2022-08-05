#include <iostream>
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

int Sum(int a[], int n, int x){
  int dem=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                dem++;
            }
        }
    }
    return dem;
}

int main(){
    int a[100], n, x;
    nhap(a, n);
    cout<<endl<<"Dãy v?a nh?p:",xuat(a,n);
    cout<<endl<<"Nh?p s? x = ";
    cin>>x;
    cout<<endl<<"S? c?p có t?ng b?ng "<<x<<" là: "<<Sum(a,n,x);
    return 0;  
}
// O(n^2)
//int main() {
//  std::cout << "Hello World!\n";
//}

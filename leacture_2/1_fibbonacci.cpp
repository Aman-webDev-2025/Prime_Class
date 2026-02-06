
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==0 or n==1){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<fibo(i)<<" ";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
void fibo(int n){
    int a=0,b=1,c;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}

int main(){
    int n;
    cin>>n;
    fibo(n);
}
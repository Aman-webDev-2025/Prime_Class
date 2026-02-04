// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,a=0,b=1,temp=0;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<temp<<" ";
//             temp=a+b;
//             a=b;
//             b=temp;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 or n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n,g=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fibo(g)<<" ";
            g++;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void binary(int n){
    if(n==0){
        cout<< n;
    }
    int ar[64];
    int i=0;

    while(n>0){
        ar[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<ar[j];
    }
}

int main(){
    int n;
    cin>>n;
    binary(n);
    return 0;
}
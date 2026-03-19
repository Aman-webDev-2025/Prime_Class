#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,ansr=true;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            ansr=false;
        }
    }
        if(ansr){
            cout<<"prime number";
        }
        else{
            cout<<"not a prime number";
        }
    return 0;
}
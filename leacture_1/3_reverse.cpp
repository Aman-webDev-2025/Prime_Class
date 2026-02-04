#include<iostream>
using namespace std;
int main(){
    int n,add=0,temp=0,rev=0;
    cin>>n;
    while(n!=0){
        temp=n%10;
        add=add+temp;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<rev<<endl;
    cout<<add<<endl;
    cout<<abs(add);  //remove (- sign)
    return 0;
}
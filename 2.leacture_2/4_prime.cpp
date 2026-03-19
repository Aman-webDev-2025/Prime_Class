#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
        if(c==2){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    cout<<n;
                }
                cout<<endl;
            }

        }
        
    return 0;
}
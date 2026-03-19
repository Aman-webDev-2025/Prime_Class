#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n;
    m=(n+1)/2;
    for(i=1;i<=m;i++){
        if(i<=m){
            for(j=1;j<=n;j++){
            if(j==1 || i==m || (i==1 && j>m) || j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        }
    }
    for(i=m-1;i>=1;i--){
        if(i<=m){
            for(j=1;j<=n;j++){
            if(j==n || i==m || (i==1 && j<m) || j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        }
    }
}
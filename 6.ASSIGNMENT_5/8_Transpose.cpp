// 00 01 02         00 10 20
// 10 11 12         01 11 21
// 20 21 22         02 12 22

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m , n;
    cin>>m>>n;

    vector<vector<int>> ar(n ,vector<int>(n));
    for(int i=0 ; i<m ;i++){
        for(int j=0 ; j<n ; j++){
            cin>>ar[i][j];
        }
    }

    for(int i=0 ; i<m ;i++){
        for(int j=0 ; j<n ; j++){
            cout<<ar[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

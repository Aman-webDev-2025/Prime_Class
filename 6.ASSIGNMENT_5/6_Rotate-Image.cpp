//Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.
// 1 2 3
// 4 5 6
// 7 8 9

// 00 01 02        // 02 12 22 
// 10 11 12        // 01 11 21
// 20 21 22        // 00 10 20

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int  n ;
    cin>>n;

    vector<vector<int>> ar(n ,vector<int>(n));
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<n ; j++){
            cin>>ar[i][j];
        }
    }

    for(int j=n-1 ; j>=0 ; j--){
        for(int i=0 ; i<n ; i++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
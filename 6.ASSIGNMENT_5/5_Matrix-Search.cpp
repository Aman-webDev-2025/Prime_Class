// Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.
// 1 2 3
// 4 5 6
// 7 8 9

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int m , n ;
    cin>>m>>n;

    vector<vector<int>> ar(m , vector<int>(n));
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>ar[i][j];
        }
    }
    int src , ans=0;
    cin>>src;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(ar[i][j] == src){
                ans = 1;
            }
        }
    }

    if(ans == 1){
        cout<<1;
    }
    else{
        cout<<0;
    }

}
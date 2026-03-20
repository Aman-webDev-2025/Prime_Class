// Take as input a two-d array. Wave print it column-wise.
// 1 2 3 
// 4 5 6
// 7 8 9

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m , n;
    cin>>m>>n;

    vector<vector<int>> ar(m , vector<int>(n));
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>ar[i][j];
        }
    }

    for(int i=0 ; i<m ; i++){

        if(i%2 == 0){
            for(int j=0 ; j<n ; j++){
                cout<<ar[j][i]<<", ";
            }
        }
        else{
            for(int j=n-1 ; j>=0 ; j--){
                cout<<ar[j][i]<<", ";
            }
        }
    }
    cout<<"END";
    return 0;
}

// 1, 4, 7, 8, 5, 2, 3, 6, 9, END
// Take as input a 2-d array. Print the 2-D array in spiral form clockwise.
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
    
    int startRow = 0 , endRow = m-1;
    int startCol = 0 , endCol = n-1;

    while(startRow <= endCol && startCol <= endCol){

        //left - right
        for(int i = startCol ; i<= endCol ; i++){
            cout<<ar[startRow][i]<<", ";
        }
        startRow++;

        //up - down
        for(int i = startRow ; i <= endRow ; i++){
            cout<<ar[i][endCol]<<", ";
        }
        endCol--;

        //right - left
        if(startRow <= endRow){
            for(int i = endCol ; i >= startCol ; i--){
                cout<<ar[endRow][i]<<", ";
            }
            endRow--;
        }

        //down - up
        if(startCol <= endCol){
            for(int i = endRow ; i >= startRow ; i--){
                cout<<ar[i][startCol]<<", ";
            }
            startCol++;
        }

    }
    cout<<"END";
    return 0;
}

//1, 2, 3, 6, 9, 8, 7, 4, 5, END
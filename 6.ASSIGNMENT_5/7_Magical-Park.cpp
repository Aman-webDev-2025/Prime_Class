// . (Obstacle): Strength -2.
// * (Magic Bean): Strength +5.
// # (Blockade): He immediately jumps to the start of the next row
// for each step -1 except #
// stop when curStrength < Strength

// . . * .
// . # . .
// * * . .
// . # * *

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int m , n , curStrng , totalStrng;
    cin>>m>>n>>curStrng>>totalStrng;

    vector<vector<int>> ar(m , vector<int>(n));
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>ar[i][j];
        }
    }

    bool skip = true;

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){

            if(curStrng < totalStrng){
                skip = false;
                break;
            }

            if(j != n-1){
                curStrng--;
            }

            int ch = ar[i][j];

            if(ch == '.'){
                curStrng = curStrng - 2;
            }
            else if(ch == '*'){
                curStrng = curStrng + 5;
            }
            else if(ch == '#'){
                break;
            }
            
        }
        if(!skip){
            break;
        }
    } 
    if(skip && curStrng >= totalStrng){
        cout<<curStrng;
    }
    else{
        cout<<-1;
    }
    return 0; 
}
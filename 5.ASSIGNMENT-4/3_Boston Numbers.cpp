#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=1 ; i<s.length() ; i++){
        int n = s[i] - '0';
        int sum = sum + n;
        int num = num*10 + n;

        for(int i=2 ; i<num ; i++){
            if(num % i !=0){
                int prime = i;
            }
        }
    }
    return 0;
}
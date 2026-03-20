#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0 ; i<s.length() ; i++){
        int num = s[i]-'0';

		if( i == 0 && num ==9){
			num = num;
		}
        else if(num > 4){
            num = 9 - num;
        }
        cout<<num;
    }

    return 0;
}
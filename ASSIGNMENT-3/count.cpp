#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
   int c=0;
   int i=0;
   while(i<str.size()){
       int val=str[i];
    for(int j=0;i<str.size();j++){
       if(str[j]==val){
           c++;
       }else{
           break;
       }
    }
       cout<<str[i]<<c;
       i=c;
   }
    return 0;
}
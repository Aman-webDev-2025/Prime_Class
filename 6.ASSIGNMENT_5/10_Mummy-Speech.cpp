#include<iostream>
#include<vector>
using namespace std;

int main () {

	int n;
	cin>>n;
	vector<vector<int>> ar(n , vector<int>(n));

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>ar[i][j];
		}
	}

	bool check=true;

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(j > i && ar[i][j] !=0){
				check=false;
				break;
			}
		}
	}
	if(check){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}
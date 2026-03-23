#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
	int r,c;
	cin>>r>>c;
	vector<vector<int>> ar(r , vector<int>(c));
	
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++){
			cin>>ar[i][j];
		}
	}

	for(int i=0 ; i<r ; i++){
		sort(ar[i].begin() , ar[i].end());
	}

	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
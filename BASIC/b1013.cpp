#include<cstdio>
#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
bool isprime(int n){
	int k;
	k=(int)sqrt(n);
	for(int i  = 2;i<=k;i++){
		if(n%i==0) return false;

	}
	return true;

}

int main() {
	int n,m;
	cin>>n>>m;
	int i = 0;
	vector<int> output;
	for(int j = 2;i!=m;j++){
		if(isprime(j)){
			if(i>=n-1) output.push_back(j);
			i++;
		}
	}
	i=0;
	int count =0;
	while(i!=output.size()-1){
		if(count!=9){
			cout<<output[i]<<" ";
			count ++;
		}
		else {
			cout<<output[i]<<endl;
			count=0;
		}
		i++;

	}
	cout<<output[i]<<endl;
	return 0;
}
\

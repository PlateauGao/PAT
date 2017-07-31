#include<cstdio>
#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int a;
	int n,times;
	cin>>a;
	cin>>n>>times;
	int add[100001];
	int next[100001];
	int now;
	for(int i = 0;i!=n;i++){
		cin>>now;
		cin>>add[now]>>next[now];
		
	}
	int output[100001];
	int temp=a;
	int j =0;
	while(temp!=-1){
		output[j]=temp;
		temp=next[temp];
		j++;
	}
	for(int i = 0 ; i<=j-times;i+=times){
		reverse(begin(output)+i,begin(output)+i+times);
	}
	int i = 0;
	for( i = 0;i!=j-1;i++){
		printf("%05d %d %05d\n", output[i], add[output[i]], output[i + 1]);
	}
		printf("%05d %d -1", output[i], add[output[i]]);
	return  0 ;
}

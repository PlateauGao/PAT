#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring> 
#include<iostream> 
#include<sstream>
#include<cstdio>

using namespace std;  

int main(){  
int a[10];
	for(int i = 0 ;i!=10;i++){
		cin>>a[i];
	}
	for(int i =1 ;i!=10;i++){
		
		if(a[i]!=0){
			cout<<i;
			a[i]--;
			break;
		} 
		
	}
	for(int i = 0 ;i!=10;i++){
		for(int k = 0 ;k!=a[i];k++){
			cout<<i;
		}
	}
	cout<<endl;
	
	return 0;  
} 

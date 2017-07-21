#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int counta=0;
	int countb=0;
	string str1,str2;
	int a,b;
		int sum=0;
	cin>>str1>>a>>str2>>b;
	for(int i=0;i!=str1.size();i++){
		if(str1[i]-'0'==a) counta++; 
	} 

	for(int i = 0;i!=counta;i++){
		sum+=pow(10,i)*a;
	}
	for(int i=0;i!=str2.size();i++){
		if(str2[i]-'0'==b) countb++; 
	} 
		for(int i = 0;i!=countb;i++){
		sum+=pow(10,i)*b;
	}
	
	cout<<sum<<endl;
	return 0;
} 

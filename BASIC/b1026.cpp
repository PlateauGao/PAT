#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int h,m,s;
	double ans=(double)(b-a)/100.0;

	h=ans/3600;

	ans=ans-h*3600;

	
	m=ans/60;

	ans=ans-m*60;

	s=ans+0.5;

	printf("%02d:%02d:%02d",h,m,s);
	return 0; 
	} 

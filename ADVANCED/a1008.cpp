#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int a = 0 ;
	int b=0;
	int sum =0;
	while(n--){
		cin>>b;
		if(b>a) sum+=(b-a)*6+5;
		else sum+=(a-b)*4+5;
		a=b;
		
		
	}
	cout<<sum<<endl;
	return 0;
	
}

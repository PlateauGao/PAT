#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	x=sqrt((n+1)/2);
	char s;
	cin>>s;
	int max=2*x-1;
	for(int i =max;i!=-1;i-=2) {
		for(int j=max;j!=i;j-=2){
			cout<<" ";
			
		}
	for(int j=i;j!=0;j--){
		cout<<s;
		
	}
	cout<<endl;
	}
	for(int i =3;i!=2*x-1+2;i+=2){
			for(int j=max;j!=i;j-=2){
			cout<<" ";
			
		}
		
		
		for(int j=i;j!=0;j--){
		cout<<s;
		
	}
	cout<<endl;
	}
	cout<<n-(2*pow(x,2)-1);
	return 0 ;
}

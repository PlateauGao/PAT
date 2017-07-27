#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
string n;
cin>>n;
int pos;
int exp=0;
if(n[0]=='-' ) cout<<"-";
	
	for(int i  = 0;i!=n.size();i++){
		if(n[i]=='E') pos=i;
		
	}
	
	int k =0;
	for(int i = n.size()-1;i!=pos+1;i--){
		
		exp+=(n[i]-'0')*pow(10,k);
		
		k++;
		
	}

	if(exp==0){
		for(int i = 1;i!=pos;i++){
			cout<<n[i];
	}
		return 0 ;
	}
	if(n[pos+1]=='-'){
		cout<<"0.";
		for(int i =1;i!=exp;i++){
			cout<<"0";
		}
		for(int i =1;i!=pos;i++){
			if(n[i]!='.') cout<<n[i];
		}
	}
	
	else{
	cout<<n[1];
		if(pos-3>=exp){
			for(int i = 3;i!=pos;i++){
				if(i==exp+3){
					cout<<".";
				}
				if(n[i]!='.') cout<<n[i];
				
			}
			
		}
		else{
			for(int i = 3;i!=pos;i++){
				
				cout<<n[i];
			}
			for(int i=0;i!=exp-(pos-3);i++){
				cout<<0;
			}
		}
		
		
	}
	return 0 ;
}

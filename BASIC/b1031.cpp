#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	string x;
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string co="10X98765432";
	int n;
	cin>>n;
	int ans;
	vector<string> out;
	int flag;
	while(n--){
		cin>>x;
		ans=0;
		flag=0;
		for(int i =0;i<17;i++){
			if(x[i]<'0'||x[i]>'9'){
				out.push_back(x);
			flag=1;
			i=17;
			}
		}
		
		if(flag==0){
		
		
		
		for(int i =0;i!=17;i++){
			ans+=(x[i]-'0')*a[i];
		}
		
		ans=ans%11;
	
		if(co[ans]!=x[17]) out.push_back(x);
		
		
		}
		
	}
	
	
	
	if(out.size()==0) cout<<"All passed";
	else{
		for(int i =0;i!=out.size();i++){
			cout<<out[i]<<endl;
			
		}

	}
	
	return 0 ;
} 

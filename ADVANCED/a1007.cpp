#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
	cin>>n;

	int sum=-1;
	int current=0;
	int l,r;
	int start=0;
	int pos=0;
	vector<int>  ans(n);
	for(int i = 0 ;i!=n;i++){
		cin>>ans[i];
	if(ans[i]>=0) pos=1;
		current+=ans[i];
		if(current>sum){
			sum=current;
		
			l=start;
			r=i;
		}
		else if(current<0){
			current=0;
			start=i+1;
		}
		
	}
	if(pos==0) cout<<"0 "<<ans[0]<<" "<<ans[n-1]<<endl;
	else  cout<<sum<<" "<<ans[l]<<" "<<ans[r]<<endl;
	return 0;
	
}

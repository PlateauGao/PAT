#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	string str;
	int a;
	cin>>str>>a;
	vector<int> out;
	int current=0;
	for(int i = 0;i!=str.size();i++){
		current=10*current+(str[i]-'0');
		out.push_back(current/a);
		current=current%a;
	}
	bool b=false;

	for(int i = 0;i!=out.size();i++){
		if(out[i]!=0&&b==false){
			b=true;
		}
		if(b){
			cout<<out[i];
		}
	}
	if(!b) cout<<"0";
	cout<<" "<<current<<endl;
	
	return 0 ;
}

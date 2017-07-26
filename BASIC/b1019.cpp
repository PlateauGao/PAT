#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring> 
#include<iostream> 
#include<sstream>
#include<cstdio>
using namespace std;

int main(){

	string str;
	int ans=-1;
		int a=0;
		int b=0;
		int temp[4];
		int temp1[4];
			cin>>str;
			
	while(ans!=6174){
		 a=0;
		 b=0;
		if(ans!=-1) str=to_string(ans);

	
		if(str.size()!=4){
			int a= str.size();
			while(a!=4){
			str.insert(0,"0");
			a++;
			}
	
		}
		for(int i =0;i!=4;i++){
			temp[i]=str[i]-'0';
		}
		sort(temp,temp+4);
		if(temp[0]==temp[1]&&temp[1]==temp[2]&&temp[2]==temp[3]){
		cout<<str<<" - "<<str<<" = 0000"<<endl;
			return 0;
		}
		for(int i =0;i!=4;i++){
			temp1[i]=temp[3-i];
		}
		for(int i =0;i!=4;i++){
			a+=temp[3-i]*pow(10,i);
		
		}
	
		for(int i =0;i!=4;i++){
			b+=temp1[3-i]*pow(10,i);
		}
		ans=b-a;
	
		printf("%04d - %04d = %04d\n",b,a,ans);
	}
	return 0;
}


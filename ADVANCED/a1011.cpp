#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	double max=0.0;
	char ans[4]={"WTL"};
	double temp;
	double next;
	char out;
	double sum=1.0;
	for(int k=0;k!=3;k++){
		cin>>max;
	
		out=ans[0];
		for(int i =  1 ;i!=3;i++){
		cin>>next;
		if(next>max){
			max=next;
			out=ans[i];
		}
		
		
		}
		sum*=max;
		cout<<out<<" ";
	}	
sum=(sum*0.65-1)*2;
printf("%.2f",sum);
return 0;
}

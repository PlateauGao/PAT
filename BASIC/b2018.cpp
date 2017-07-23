#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
	cin>>n;
	char a,b;
	int p1[3]={0};
	int p2[3]={0};
	int c1[3]={0};
	int c2[3]={0};
	int a1,b1;
	
	while(n!=0){
		cin>>a>>b;
		if(a=='B') a1=0;
		else if(a=='C') a1=1;
		else if(a=='J') a1=2;
		
		if(b=='B') b1=0;
		else if(b=='C') b1=1;
		else if(b=='J') b1=2;
		if(a1==b1){
		p1[1]++;
		p2[1]++;
		}
		else {
			if(a1-b1==2||a1-b1==-1){
				p1[0]++;
				p2[2]++;
				c1[a1]++;
				
			}
			else{
				p1[2]++;
				p2[0]++;
				c2[b1]++; 
			}
			
		}
		
		n--;
		
	}
		cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
		cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
	

int maxa=c1[0];
int maxb=c2[0];

if(max(c1[1],c1[2])>maxa) {
	if(c1[1]>=c1[2]) maxa=1;
	else maxa=2;
	
	
}
else {
	maxa=0;
}
 
if(max(c2[1],c2[2])>maxb)	{
	
if(c2[1]>=c2[2]) maxb=1;
	else maxb=2;
	
	
}
else {
	maxb=0;
}

if(maxa==0 ) cout<<"B"<<" ";
else if(maxa==1 ) cout<<"C"<<" ";
else if(maxa==2 ) cout<<"J"<<" ";

if(maxb==0 ) cout<<"B"<<endl;
else if(maxb==1 ) cout<<"C"<<endl;
else if(maxb==2 ) cout<<"J"<<endl;

	return 0;
}

#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
#include<map> 
using namespace std;
struct student{
	int id;
	int high;
	int score[4];
	int rank[4];
};
int times =  0 ;
char ans[5]="ACME";
bool cmp(student a, student b){
	return  a.score[times]>b.score[times];
}
int main(){
	int m,n;
	vector<int>  na(1000000);
	for(int i=0;i!=1000001;i++){
		na[i]=0;
	}
	cin>>m>>n;
	 student stu[2001];
	for(int i=0;i!=m;i++){
		cin>>stu[i].id>>stu[i].score[1]>>stu[i].score[2]>>stu[i].score[3];
		stu[i].score[0]=(stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3.0 + 0.5;
	
	} 
	for( times = 0 ;times!=4;times++){
		sort(stu,stu+m,cmp);
		for(int i =0;i!=m;i++){
			stu[i].rank[times]=i+1;
			if(i!=0){
				if(stu[i].score[times]==stu[i-1].score[times]){
					stu[i].rank[times]=	stu[i-1].rank[times];
				}
			}
		}
	}
	int temprank;
	for(int i=0;i!=m;i++){
			na[stu[i].id]=i+1;
		stu[i].high=0;
		temprank=stu[i].rank[0];
		for(int j=1;j!=4;j++){
			if(stu[i].rank[j]<temprank){
				temprank=stu[i].rank[j];
				stu[i].high=j;
			}
		}
	}
	int input;
	int l;
	int max;
	for(int i=0;i!=n;i++){
		cin>>input;
		if(na[input]!=0){
			l=na[input];
			max=stu[l-1].high;
			
			cout<<stu[l-1].rank[max]<<" "<<ans[max]<<endl;
		}
		else{
			cout<<"N/A"<<endl;
		}
	}
	
	return 0;
}

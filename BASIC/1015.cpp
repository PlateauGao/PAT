#include<cstdio>
#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
using namespace std;
struct student{
	int number,de,cai;
	
};
bool compare(student a,student b){
	if(a.de+a.cai!=b.de+b.cai) return (a.de+a.cai)>(b.de+b.cai) ; 
	else if(a.de!=b.de) return a.de>b.de;
	else return a.number<b.number;
	
}
int main(){
	vector<student> t1,t2,t3,t4;
	student stu;
int sum=0;	 
	int n,m,l;
	cin>>n>>m>>l;
	int count=n;
	while(count!=0){
		
		cin>>stu.number>>stu.de>>stu.cai;
		if(stu.de>=m&&stu.cai>=m){
			sum++;
			if(stu.de>=l&&stu.cai>=l) t1.push_back(stu);
			else if(stu.de>=l)  t2.push_back(stu);
			else if(stu.de>=stu.cai) t3.push_back(stu);
			else  t4.push_back(stu);
		}
		
		
		
		
		count--;
	} 

	sort(t1.begin(),t1.end(),compare);
	sort(t2.begin(),t2.end(),compare);
	sort(t3.begin(),t3.end(),compare);
	sort(t4.begin(),t4.end(),compare);
	cout<<sum<<endl;
	for(int j=0;j!=t1.size();j++){
	printf("%d %d %d\n",t1[j].number,t1[j].de,t1[j].cai);
	}
	for(int j=0;j!=t2.size();j++){
		printf("%d %d %d\n",t2[j].number,t2[j].de,t2[j].cai);
	}
	for(int j=0;j!=t3.size();j++){
		printf("%d %d %d\n",t3[j].number,t3[j].de,t3[j].cai);
	}
	for(int j=0;j!=t4.size();j++){
		printf("%d %d %d\n",t4[j].number,t4[j].de,t4[j].cai);
	}
	return 0;
	
}


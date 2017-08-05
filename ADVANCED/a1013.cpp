#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int visited[1030];
int vertices[1030][1030];
int n;
void s(int a){
	visited[a]=1;
	for(int i =1;i<=n;i++){
		if(visited[i]==0&&vertices[a][i]==1){
			s(i);
		}
		
	}
	
}
int main(){
	

	int m,k;
	cin>>n>>m>>k;
	int a,b;
	int x;
	for(int i =0;i!=m;i++){
		cin>>a>>b;
		vertices[a][b]=vertices[b][a]=1;
		
	}
	for(int i =0;i!=k;i++){
		cin>>x;
		int count=0;
	
		for(int j=0;j!=1030;j++){
			visited[i]=0;
		}
			visited[x]=1;
		for(int j=1;j<=n;j++){
			if(visited[j]==0){
				s(j);
				count++;
			}
			
			
		}
	printf("%d\n",count-1);
		
		
		
	}
	return 0 ;
} 

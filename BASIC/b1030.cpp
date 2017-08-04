#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
	long long p;
	cin>>n>>p;
	if (n == 0) {
        cout << n;
        return 0;
    }
	vector<int> out(n);
	for(int i=0;i!=n;i++){
		cin>>out[i];
	}
	int maxc=1;

	sort(out.begin(),out.end());
	
	
	
	for(int i =0;i!=n-1;i++){
		for(int j=i+maxc;j<=n-1;j++){
			if(out[j]>out[i]*p) break;
				
				maxc=max(maxc,j-i+1);
			
		}
	}
	cout<<maxc;
	
	return 0;
}


#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n;
    cin >> n;
    int *a = new int [n];
    int *b = new int [n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int m=0;
    while(m!=n&&b[m]<=b[m+1]){
    	m++;
	}
	int m1=m+1;
	while(m1!=n&&a[m1]==b[m1]){
		 m1++;
	}
    if(m1==n){
    	  cout << "Insertion Sort" << endl;
        sort(a, a + m + 2);
	}
	else{
		  cout << "Merge Sort" << endl;
		
		
	}
}

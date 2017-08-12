#include <iostream>
#include <algorithm>
#include <vector>
#include<cmath>

using namespace std;
int main(){
	char a;
	int flag=0;
	string s;
	 getline(cin, s);
	 string in;
	cin>>in;
	if(s.size()==0){
		cout<<in;
		return 0 ;
	}
	
	for(int i =0;i!=s.size();i++){

		if(s[i]=='+') flag=1;
	}



	if(flag==1){
		for(int i =0;i!=in.size();i++){
			if(in[i]>='A'&&in[i]<='Z'){
				in[i]='*';
			}
			
		}
	}
	
	
for(int i =0;i!=in.size();i++){
 	for(int j=0;j!=s.size();j++){
 		if(in[i]==s[j]) in[i]='*';
 		 if (s[j] >= 'A' && s[j] <= 'Z' && in[i] == s[j] + 32) {
                in[i] = '*';
            }
	 }
}

	for(int i =0;i!=in.size();i++){
		if(in[i]!='*'){
			cout<<in[i];
			flag=1;
		} 
	}


	return 0;
}

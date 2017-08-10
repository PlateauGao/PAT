#include <iostream>
#include <algorithm>
#include <vector>
#include<cmath>

using namespace std;
int main() {
    int n;
    cin >> n;
     int num, temp;
    vector<int> a(n);
    

    for (int i = 0; i < n; i++) {
        cin >> num >> temp;
        a[num] += temp;
    }
     int max = a[1];
   int out=1;
    for (int i = 1; i !=n; i++) {
    	
        if ( a[i]>max ) {
            max = a[i];
            out = i;
        }
        
    }
    cout << out << " " << max;
    return 0;
}

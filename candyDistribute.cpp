#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, N;
	
	cin >> t;
	
	while(t != 0) {
	    cin >> N;
	    
	    if(N % 3 == 0) {
	        cout << "YES" << endl;
	    }
	    else {
	        cout << "NO" << endl;
	    }
	    
	    t--;
	}
	
	return 0;

}
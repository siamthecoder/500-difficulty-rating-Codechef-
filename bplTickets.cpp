#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M, t;
	
	cin >> t;
	
	while(t != 0) {
	    cin >> N >> M;
	    
	    if(M >= N) {
            cout << 0 << endl;
        }
        else {
            cout << N - M << endl;
        }
	    
	    t--;
	}
	
	return 0;

}
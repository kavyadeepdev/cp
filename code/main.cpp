#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int arr[3];
	    for (int i = 0; i < 3; ++i) {
	        cin >> arr[i];
	    }
		sort(arr, arr + 3);
	    int sum = 0;
	    for (int i = 0; i < 3; ++i) {
	        if (arr[i] > 0) {
    	        ++sum;
    	        --arr[i];
	        }
	    }
		if (arr[0] >= 2)
			sum += 3;
		else if (arr[0] == 1) {
			if (arr[2] >= 2)
				sum += 2;
			else
				sum += 1;
		}
		else if (arr[1] >= 1) {
				sum += 1;
		}
	    cout << sum << '\n';
	}
	return 0;
}


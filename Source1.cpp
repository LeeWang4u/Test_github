#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr;
		int a;
		int h = 0;
		for (int i = 0; i < n; i++)
		{
			
			cin >> a;
			h = h + a;
			arr.push_back(a);
		}
		vector<int> ao;
		vector<int> at;
		int b = 0;
		int d = 0;
		int o = 0;
		for (int i = 0; i < n; i++)
		{
			if (b * 2 > h) {
				o = i;
				break;
			}
			b = b + arr[i];
			ao.push_back(b);
			
		}
		int c = 0;
		int p = 0;
		for (int i = n-1; i >= 0; i--)
		{
			if (c * 2 > h) {
				p = n -1 - i;
				break;
			}
			c = c + arr[i];
			at.push_back(c);
			
		}
		int max = 0;
		int k = 0;
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < p; j++) {
				if (ao[i] == at[j]) {
					k = i + j + 2;
					if (k  >= max && k<= n) max = k;
//					cout << ao[i] << " " << at[j] << " || ";
				}
			}
		}
//		if (n % 2 != 0 && (b + arr[(n-1) / 2]) * 2 == h ) cout << n << endl;
//		else if( b * 2 == h && n % 2 != 0) cout << n << endl;
		cout << max << endl;
	}
}
/*
int n;
		cin >> n;
		string s;
		cin >> s;
		if (n == 1 && (int)s[0] != 87) cout << "NO" << endl;
		else if (n == 2 && (int)s[0] == 87 && (int)s[1] != 87) cout << "NO" << endl;
		else if (n == 2 && ((int)s[0] != 87 && (int)s[1] == 87)) cout << "NO" << endl;
		else if ((int)s[0] != 87 && (int)s[1] == 87) cout << "NO" << endl;
		else if ((int)s[n-1] != 87 && (int)s[n-2] == 87) cout << "NO" << endl;
		else {
			for (int i = 0; i < n-3; i++)
			{
				if (s[i] == 87 && s[i + 1] == 87 && s[i + 2] == 87) {
					cout << "NO" << endl;
					break;
				}
				else if (s[i] == 82 && s[i + 1] == 82 && s[i + 2] == 82) {
					cout << "NO" << endl;
					break;
				}
				else if (s[i] == 82 && s[i + 1] == 82 && s[i + 2] == 82) {

				}
			}
		}

*/
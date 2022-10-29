#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main() {
	fast;
	int N;
	cin >> N;
	vector<int> Array(N,0);
	int a;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		for (int j = 0; j < N; j++) {
			if (a == 0&&Array[j]==0) {
				Array[j] = i;
				break;
			}
			else if (Array[j] == 0) a--;
		}
	}
	for (int i = 0; i < Array.size(); i++) {
		cout << Array[i] << " ";
	}
}
#include <iostream>
using namespace std;

int main() {
	 int N = 0,T = 0;
   cin >> N;
   cin >> T;
	 int ans = 0;
	 if(N != 1) {
		T /= N;
		N /= N;
	 }
	 int temp = T + N;
	 while(temp != 1) {
		 temp /= 2;
		 ans += 1;
	 }
   cout << ans;
   cout << "\n";
 }

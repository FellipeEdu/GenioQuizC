#include <iostream>
using namespace std;

int main() {
	
	int N, M;
	int X[M], Y[M];
  	int PP;
	
	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {
		cin >> X[i] >> Y[i];
	}

  PP = N * 2;

  cout << PP - M;
  
  return 0;
}

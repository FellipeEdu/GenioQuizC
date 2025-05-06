#include <iostream>
using namespace std;

int main() {
	
	int N, M;
	int X, Y;
  	int Mat[N][M];
	
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
        	Mat[i][j] = 1;
        }
	}
  
// criei isso só pra ver como a matriz tava
  
 for (int k = 0; k < N; k++) {
 	for (int l = 0; l < M; l++) {
 		cout << Mat[k][l] << " ";
 	}
 	cout << "\n";
 }
	
 for (int i = 0; i < M; i++) {
 	cin >> X >> Y;
		
 	Mat[X][Y] = 0;
 	
 	// tambem criei pra ver como a matriz tava mas dps de inserir os 0
		
 	for (int k = 0; k < N; k++) {
 		for (int l = 0; l < M; l++) {
 			cout << Mat[k][l] << " ";
 		}
 		cout << "\n";
 	}
 	cout << "\n";
 }
  
  return 0;
}

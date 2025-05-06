#include <iostream>
using namespace std;

int main() {
	
	int A, B;
	int C = -2147483647, media;
	
	cin >> A >> B;
	
	media = (A + B + C) / 3;
	
	while (!(media == A || media == B || media == C)) {
		C++;
		media = (A + B + C) / 3;
	}
	
	cout << C << endl;
}

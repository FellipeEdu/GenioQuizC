#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double base, potencia;
	double res;
	
	cin >> base;
	cin >> potencia;
	
	res = pow(base, potencia);
	
	cout << res << "\n";
	cout << "resto: " << fmod(res, +5);
	
	return 0;
}

#include <stdio.h>
#include <math.h>

void dme(float altMslAct, float altMslVor, float lateralDist) {
	float dmeDist, H;
	float altActVor = altMslAct - altMslVor;
	float aAVinNM = altActVor / 6076;
	
	H = pow(aAVinNM, 2) + pow(lateralDist, 2);
	dmeDist = sqrt(H);
  // dmeDist = ceil(dmeDist);
	printf("DME Distance: %.2f NM", dmeDist);
}

int main() {
	float aMA, aMV, lD; 
	
	scanf("%f %f %f", &aMA, &aMV, &lD);
	dme(aMA, aMV, lD);
}

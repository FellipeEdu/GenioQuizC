#include <stdio.h>

int main() {
 int w = -10;
 int *p = &w;
 *p += 10;
 printf("%d", w);

 return 0;
}

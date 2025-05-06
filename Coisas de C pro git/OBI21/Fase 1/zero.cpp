#include <iostream>
using namespace std;

int main() {
  int N, soma = 0;

  cin >> N;

  int num[N];
  
  for (int i = 0; i < N; i++) {
    cin >> num[i];
  }

  for (int i = 0; i < N; i++) {
    if (num[i] == 0 && i != 0) {
      if (num[i+1] == 0) {
        int cont = 0;
        for (int j = i; j >= 0; j--) {
          //int cont = 0;
          if (num[j] != 0 && cont < 2) {
            num[j] = 0;
            cont++;
          }
          if (cont == 2) break;
        }
        cont = 0;
        i++;
      } else {
        for (int j = i; j >= 0; j--) {
          if (num[j] != 0) {
            num[j] = 0;
            break;
          }
        }
      }
    }
  }
  for (int i = 0; i < N; i++) {
    soma += num[i];
  }
  cout << soma << '\n';
}

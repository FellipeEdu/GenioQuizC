#include <iostream>
using namespace std;

int main() {
  int N1, N2, N3;

  cin >> N1 >> N2 >> N3;

  if ((N1 >= N2 && N1 <= N3) || (N1 <= N2 && N1 >= N3)) {
    cout << N1 << '\n';
  } else if ((N2 >= N1 && N2 <= N3) || (N2 <= N1 && N2 >= N3)) {
    cout << N2 << '\n';
  } else if ((N3 >= N1 && N3 <= N2) || (N3 <= N1 && N3 >= N2)) {
    cout << N3 << '\n';
  }
}

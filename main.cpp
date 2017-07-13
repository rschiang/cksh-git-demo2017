#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 20; i++) {
    for (int j = i; j < 20; j++)
      cout << “O”;
    cout << endl;
  }
  return 0;
}

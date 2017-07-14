#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 20; i++) {
    for (int j = i; j < 20; j++)
      cout << “★”;
    cout << endl;
  }
  cout << "您蒸蚌！(・ω・)" << endl;
  return 0;
}

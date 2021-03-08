#include <iostream>
#include <string>

using namespace std;

int washClothes(int x) {
  return x;
}

double washClothes(double x) {
  return x;
}

float washClothes(float x) {
  return x;
}

string washClothes() {
  return "No Clothes are give so its holiday :)";
}

int main() {
  int clothesInt = washClothes(7);
  double clothesDouble = washClothes(7.55555);
  float clothesFloat = washClothes(7.5555555555555);
  cout << "Kiara Washed (INT): " << clothesInt << "\n";
  cout << "Kiara Washed (Double): " << clothesDouble<< "\n";
  cout << "Kiara Washed (Float): " << clothesDouble<< "\n";
  cout << "Kiara Washed : " << washClothes()<< "\n";
  return 0;
}

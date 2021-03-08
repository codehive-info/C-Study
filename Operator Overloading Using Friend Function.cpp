#include <iostream>
using namespace std;

class TestB;


//CLASS TEST A
class TestA {
int a = 111;

friend void operator >(TestA ta, TestB tb);

};
// Class A END


//CLASS TEST B
class TestB {

int b = 124;

friend void operator >(TestA ta, TestB tb);
};
// Class B END


// Friend Function Defn
void operator >(TestA ta, TestB tb)
{
ta.a > tb.b ? cout<< "A is Bigger" : cout<< "B is Bigger";
}

//  Main Function
int main() {
TestA ta;
TestB tb;

ta > tb;
  return 0;
}

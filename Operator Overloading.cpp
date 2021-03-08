#include <iostream>
#include <iomanip>

using namespace std;

class DrinkFood {

private:int drink,food;

public : DrinkFood (int d, int f) {
 drink = d;
 food = f;
}

public : DrinkFood () {

}

DrinkFood operator +(DrinkFood df)
{
DrinkFood temp;
temp.drink  = drink + df.drink;
temp.food  = food + df.food;

return temp;
}



//JUST TO PRINT VALUES
void print()
{
cout << "Kiara Had " << drink << " Drinks and " << food << " LBS of food";
}

};

int main() {
  
  DrinkFood day1;
  DrinkFood day2(5,6);
  DrinkFood day3(4,3);
  day1 = day2 + day3;
  
 day1.print();
 
 
 
  //int a  = 10;
 //int b  = 11;
//int c  = a+b;
//cout << "Value of C = "<< setw(5) << c << endl;
  
  return 0;
}

#include <iostream>
#include <stdexcept>

using namespace std; 

int main()
{

  double cm_per_inch = 2.54;                                              // assign the value

  double length= 1;                                                       // assign the value 

  char unit= 0;                                                           // default value on char
  cout << "Please enter a length followed by a unit (c or i);\n";
  cin >> length >> unit;

  if (unit == 'i')
    cout << length << "in == " << cm_per_inch*length << "cm\n";
  else
    cout << length << "cm == " << length/cm_per_inch << "in\n";

}

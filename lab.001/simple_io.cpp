#include <iostream>
#include <tuple>
using namespace std;


int heltal;
float flyttal;
char tecken;
string strang;

int main()
{

  cout << "Skriv in ett heltal: ";
  cin >> heltal;
  cout << "Du skrev in talet: " << heltal << endl;

  cout << "Skriv in fem heltal: ";                          // Detta fungerar inte!
  cin >> heltal;
  cout << "Du skrev in talen: " << heltal << endl;

  cout << "Skriv in ett flyttal: ";
  cin >> flyttal;
  cout << "Du skrev in flyttalet: " << flyttal << endl;

  cout << "Skriv in ett heltal och ett flyttal: ";
  cin >> heltal >> flyttal;
  cout << "Du skrev in heltalet " << heltal << endl;
  cout << "Du skrev in flyttalet " << flyttal << endl;


  return 0;
}

#include <iostream>
#include <string>
using namespace std;


int heltal[5];
float flyttal;
char tecken;
string str;

int main()
{

  cout << "Skriv in ett heltal: ";
  cin >> heltal[0];
  cout << "Du skrev in talet: " << heltal[0] << endl;

  cout << "Skriv in fem heltal: ";                      
  cin >> heltal[0] >> heltal[1] >> heltal[2] >> heltal[3] >> heltal[4];
  cout << "Du skrev in talen: " << heltal[0] << ", " << heltal[1] << ", " << heltal[2] << ", " << heltal[3] << ", " << heltal[4] << endl;

  cout << "Skriv in ett flyttal: ";
  cin >> flyttal;
  cout << "Du skrev in flyttalet: " << flyttal << endl;

  cout << "Skriv in ett heltal och ett flyttal: ";
  cin >> heltal[0] >> flyttal;
  cout << "Du skrev in heltalet " << heltal[0] << endl;
  cout << "Du skrev in flyttalet " << flyttal << endl;

  cout << "Skriv in ett tecken: " << endl;
  cin >> tecken; 
  cout << "Du skrev in tecknet: " << tecken << endl;

  cout << "Skiv in en sträng: ";
  cin >> str; 
  cout << "Strängen '" << str << "' har " << str.length() << " tecken." << endl; 

  cout << "Skriv in ett heltal och en sträng: ";
  cin >> heltal[0] >> str;
  cout << "Du skrev in talet |" << heltal[0] << "| och strängen |" << str << "|." << endl;

  cout << "Skriv in en sträng och ett flyttal: ";
  cin >> str >> flyttal;
  cout << "Du skrev in \"" << flyttal << "\" och \"" << str << "\"" << endl;

  cout << "Skriv in en hel rad med text: ";
  cin >> str;
  cout << "Du skrev in textraden: '" << str << "'" << endl;
  
  cout << "Skriv in en textrad som slutar med ett negativt heltal: ";
  cin >> str >> heltal[0];
  cout << "Du skrev in textraden: " << str << " och heltalet '" << heltal[0] << "'" << endl;

  return 0;
}

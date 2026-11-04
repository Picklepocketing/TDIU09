#include <iostream>
#include <iomanip>

using namespace std;
void del_1 () {
  cout << "Del 1: In- och utmatning" << endl;

  int age {};
  float shoesize {};
  char first_letter {};
  string last_name {};

  cout << "Mata in din ålder och skostorlek: ";
  cin >> age >> shoesize;
  cout << endl;

  cout << "Mata in första bokstaven i ditt namn: ";
  cin >> first_letter;
  cout << endl;

  cout << "Mata in ditt efternamn: ";
  cin >> ws;
  getline(cin, last_name);
  cout << endl;

  cout << "Hej " << first_letter << ". " << last_name << '!' << endl;
  cout << "Din ålder: " << setw(5) << age << endl;
  cout << "Skostorlek: " << shoesize << endl << endl;
}

void del_2 () {
  cout << "Del 2: Temperaturtabell" << endl;
  int start {};
  int end {};

  cout << "Ange startvärde: ";
  cin >> start;

  while (true) {
    cout << "Ange slutvärde: ";
    cin >> end;
    if (end > start) break;
    cout << "Felaktigt slutvärde!" << endl;
  }

  cout << "Celsius" << setw(9) << "Kelvin" << setw(14) << "Fahrenheit" 
    << setw(10) << "Reaumur" << endl
    << "----------------------------------------" << endl;

  for (int i = start; i <= end; i++) {
    cout << setw(7) << i 
      << setw(9) << float(i + 273.15) 
      << setw(14) << fixed << setprecision(2) << float (i * 1.8 + 32) 
      << setw(10) << float (i * 0.8) 
      << endl;
  }
}

int main () {
  del_1();
  del_2();
}

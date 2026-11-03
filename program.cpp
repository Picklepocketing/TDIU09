#include <iostream>

using namespace std;
void del_1 ()
{
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
  cout << "Din ålder: " << age << endl;
  cout << "Skostorlek: " << shoesize << endl;
}

int main () {
  del_1();
}

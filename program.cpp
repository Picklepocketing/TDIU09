// karno058: Samarbetat med hugko281, Hugo Kollegger, samma program

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


int main () { 

   cout << "Del 1: In- och utmatning" << endl;

  int age {};
  float shoesize {};
  char first_letter {};
  string last_name {};

  cout << "Mata in din ålder och skostorlek: ";
  cin >> age >> shoesize;
  

  cout << "Mata in första bokstaven i ditt namn: ";
  cin >> first_letter;


  cout << "Mata in ditt efternamn: ";
  cin >> ws;
  getline(cin, last_name);


  cout << "Hej " << first_letter << ". " << last_name << '!' << endl;
  cout << "Din ålder:" << setw(10) << age << endl;
  cout << "Din skostorlek: " << shoesize << endl << endl; 
/////////////////////////////////////////////////////////////////////7
  cout << "Del 2: Temperaturtabell" << endl;
  int start {};
  int end {};
 cout << "Ange startvärde: " << endl;
  cin >> start ;
  while ( start < -273)
  { 
    cout << "Felaktigt startvärde!" << endl ; 
    cout << "Ange startvärde: " << endl ;
    cin >> start ; 
    cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

  }  

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');  
    cout << "Ange slutvärde: "; 
    cin >> end; 
  while (end <= start) { 
    if(cin.fail()) 
    { 
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    cout << "Ange slutvärde: "; 
        cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin >> end; 
    //if (end > start) break;
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
  cout << endl;
////////////////////////////////////////////////////////////////////////////// 
string input{};
  string inputShortened {};
  int alphaCount {};
  int numCount {};
  int spaceCount {};
  char fillChar {};

  cout << "Del 3: Teckenhantering" << endl; 

  //cin.get(bitchassChar, 10); 
  char cha{}; 
 
  cin.ignore();
  
  for (int i = 0; i < 10 && cin.get(cha); ++i) {
    //char curr = input[i]; 


    if (isalpha(cha)) alphaCount++;

    if (isdigit(cha)) numCount++;

    if (isspace(cha)) spaceCount++;

    inputShortened.push_back(cha);
  } 
 // cin.clear(); 
 cin.ignore(numeric_limits<streamsize>::max(),'\n');

  cout << "Mata in utfyllnadstecken: ";

  cin >> fillChar;

  cout << left << setw(21) << setfill(fillChar);

  cout << "Alfabetiska tecken:"
    << alphaCount << endl; 

  cout << left << setw(21) << setfill(fillChar);

  cout << "Siffertecken:"
    << numCount << endl;

  cout << left << setw(21) << setfill(fillChar);

  cout << "Vita tecken:"
    << spaceCount << endl; 
    cout << endl;
//////////////////////////////////////////////////////////////////////////////////////// 
 cout << "Del 4: Ordhantering" << endl;  
      string word{} ; 
      int wordCount{0} ; 
      string shortestWord{""} ; 
      string longestWord{""} ; 
      float charSum{0};
 
  
  while(cin >> word) {  

    
      if(word.size() == 0)
      { 
       continue; 
      } 
      else
      {  
        ++wordCount; 
        charSum += word.size();
        if(word.size() > longestWord.size()){ 
          longestWord = word ;
        }  
        if(word.size() < shortestWord.size() || shortestWord.size() == 0){ 
          shortestWord = word ;
        }  
      


    }
      //word += cha;   
      
  } 
  cout << "Texten innehöll " << wordCount << " ord." << endl ;
  cout << "Kortaste ordet: " << '"' << shortestWord << '"' << " (" << shortestWord.size() <<" tecken)." << endl ; 
  cout << "Längsta ordet: " << '"' << longestWord << '"' <<" (" << longestWord.size() <<" tecken)." << endl ; 
  cout << "Medelordlängd: " << fixed << setprecision(1) <<charSum / wordCount << " tecken." << endl;
} 


// karno058: Samarbetat med hugko281, Hugo Kollegger, samma program
#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

int compute_factorial(int n) 
{
    if (n == 0) {
        return 1;
    }
    return n * compute_factorial(n - 1);
}

void factorial()
{
    int n {};
    cout << "Mata in ett heltal: ";
    cin >> n;
    cout << "Fakulteten av " << n << " är " << compute_factorial(n) << endl;
}

string compute_multyply_string(string text, int multiplier){
    string new_text {};

    for (int i {0}; i < multiplier; ++i){
        new_text += text;    
    }

    return new_text;
}

void multiply_string()
{
    string text {};
    int multiplier {};

    cout << "Mata in en text och ett heltal: ";
    cin >> text >> multiplier;
    cout << "Den multiplicerade texten är " << compute_multyply_string(text, multiplier) << endl;
}

void ints_a_floater(int & a, float & b){
    cout << "Heltalets värde är nu " << static_cast<int>(ceil(b)) << endl; 
    cout << "Flyttalets värde är nu " << fixed << setprecision(1) << static_cast<float>(a) << endl;
    return;   
}

void totally_mean_length(string const& text_1, string const& text_2, int & total_length, float & mean_length){
    total_length = text_1.length() + text_2.length();
    mean_length = static_cast<float>(total_length) / 2;
    return;
}

void main_menu()
{  
    cout << "Välkommen till huvudmenyn!" << endl; 
    while(true) 
    {  
        int choice{0}; 
        int a {};
        float b {};
        string text_1{};
        string text_2{};
        int total_length{};
        float mean_length{};

        cout << "1. Beräkna N-fakultet." << endl; 
        cout << "2. Multiplicera en sträng." << endl; 
        cout << "3. Byta värden på ett heltal och ett flyttal." << endl; 
        cout << "4. Beräkna totala längden samt medellängden på två strängar." << endl; 
        cout << "5. Avsluta programmet." << endl;
        
        cout << "Val: " ;  
        cin >> choice;
        cin.ignore(1000, '\n');


        switch (choice) 
        {
            case 1: 
                factorial();
                break;
            case 2:
                multiply_string();
                break;
            case 3: 
                cout << "Mata in ett heltal och ett flyttal: ";
                cin >> a >> b;
                ints_a_floater(a, b);
                break;
            case 4: 
                cout << "Mata in två ord: ";
                cin >> text_1 >> text_2;
                totally_mean_length(text_1, text_2, total_length, mean_length);
                cout << "Totallängd: " << total_length << endl;
                cout << "Medellängd: " << fixed << setprecision(1) << mean_length << endl;
                break;
            case 5: 
                cout << "Ha en bra dag!" << endl;
                return; 
            default:
                cout << "Fel val!" << endl;
    }
}

} 

int main()
{  
    main_menu();
    return 0;
}   

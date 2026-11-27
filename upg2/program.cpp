// hugko281: Samarbetat med karno058, Karl Nord, samma program
#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int compute_factorial(int const n) 
{
    if (n == 0) 
    {
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

string compute_multyply_string(string const & text, 
                               int const multiplier)
{
    string new_text {};

    for (int i {}; i < multiplier; ++i)
    {
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

void swap_int_float(int & a, 
                    double & b)
{
    int old_a {a};

    a = static_cast<int>(ceil(b));
    b = static_cast<float>(old_a);
}

void ints_a_floater()
{
    int a {};
    double b {};

    cout << "Mata in ett heltal och ett flyttal: ";
    cin >> a >> b;

    swap_int_float(a, b);

    cout << "Heltalets värde är nu " << a << endl;
    cout << "Flyttalets värde är nu " << fixed << setprecision(1) << b << endl;
}

void totally_mean_length(string const & text_1, 
                         string const & text_2, 
                         int & total_length, 
                         double & mean_length)
{
    total_length = static_cast<int>(text_1.length() + text_2.length());
    mean_length = static_cast<double>(total_length) / 2;
}

void out_totally_mean_length()
{
    string text_1 {};
    string text_2 {};
    int total_length {};
    double mean_length {};

    cout << "Mata in två ord: ";
    cin >> text_1 >> text_2;

    totally_mean_length(text_1, text_2, total_length, mean_length);

    cout << "Totallängd: " << total_length << endl;
    cout << "Medellängd: " << fixed << setprecision(1) << mean_length << endl;
} 

void menu_choices(int const choice) 
{ 
    switch (choice) 
    {
        case 1: 
            factorial();
            break;
        case 2:
            multiply_string();
            break;
        case 3: 
            ints_a_floater();
            break;
        case 4: 
            out_totally_mean_length();
            break;
        case 5:
            break;
        default:
            cout << "Fel val!" << endl;
    }
}

void main_menu()
{  
    int choice {};

    cout << "Välkommen till huvudmenyn!" << endl;

    while (choice != 5) 
    {  
        cout << "1. Beräkna N-fakultet." << endl;
        cout << "2. Multiplicera en sträng." << endl;
        cout << "3. Byta värden på ett heltal och ett flyttal." << endl;
        cout << "4. Beräkna totala längden samt medellängden på två strängar." << endl;
        cout << "5. Avsluta programmet." << endl;
        cout << "Val: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        menu_choices(choice);
    } 
    cout << "Ha en bra dag!" << endl;
} 

int main()
{  
    main_menu();
    return 0;
}   

#include <iostream>
#include <conio.h>
using namespace std;

class payroll_calculation
{
protected:
    string name;
    long int basic_pay, salary;
    int HRA, TA, PF, LIC;

    void input()
    {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your basic_pay: ";
        cin >> basic_pay;
    }

    void operation()
    {
        HRA = basic_pay * 0.1;
        TA = basic_pay * 0.05;
        PF = basic_pay * 0.12;

        if (basic_pay < 20000)
        {
            LIC = basic_pay * 0.5;
        }
        else
        {
            LIC = 0;
        }

        salary = (basic_pay + HRA + TA) - (PF + LIC);
    }
};

class payroll_display : payroll_calculation
{
public:
    void display()
    {
        input();
        operation();

        cout << "\nYour name is: " << name;
        cout << "\nYour basic_pay is: " << basic_pay;
        cout << "\nYour HRA is: " << HRA;
        cout << "\nYour TA is: " << TA;
        cout << "\nYour PF is: " << PF;
        cout << "\nYour LIC is: " << LIC;
        cout << "\nYour salary is: " << salary;
    }
};

int main()
{
    payroll_display pd;
    pd.display();
    return 0;
}

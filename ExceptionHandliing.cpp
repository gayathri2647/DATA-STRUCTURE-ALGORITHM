// Exception Handling
#include <iostream>
using namespace std;

class exception_handling
{
public:
    float numerator, denominator, result;

    void input()
    {
        cout << "Enter the value for numerator: ";
        cin >> numerator;

        cout << "Enter the value for denominator: ";
        cin >> denominator;
    }

    void operation()
    {
        if (denominator == 0)
        {
            cout << "Divided by zero error" << endl;
        }
        else
        {
            result = numerator / denominator;
            cout << "Result is: " << result << endl;
        }
    }
};

int main()
{
    exception_handling e;
    e.input();
    e.operation();
    return 0;
}

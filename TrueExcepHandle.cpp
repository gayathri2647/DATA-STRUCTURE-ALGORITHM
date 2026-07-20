// True Exception Handling
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
        try
        {
            if (denominator == 0)
            {
                throw denominator;
            }

            result = numerator / denominator;
            cout << "Result is: " << result << endl;
        }
        catch (float)
        {
            cout << "Divide by zero error" << endl;
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

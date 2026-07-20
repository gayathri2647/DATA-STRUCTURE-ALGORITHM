// Linear Search
#include <iostream>
using namespace std;

class search
{
public:
    int element[20], key, i;

    void input()
    {
        cout << "\nEnter the elements of array: ";
        for (i = 0; i < 5; i++)
        {
            cin >> element[i];
        }

        cout << "\nEnter the value to search: ";
        cin >> key;
    }

    void operation()
    {
        int count = 0;

        for (i = 0; i < 5; i++)
        {
            if (key == element[i])
            {
                count = count + 1;
            }
        }

        if (count > 0)
        {
            cout << key << " is present " << count << " times";
        }
        else
        {
            cout << key << " is not present in the array";
        }
    }
};

int main()
{
    search s;
    s.input();
    s.operation();
    return 0;
}

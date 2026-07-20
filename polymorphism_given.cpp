#include <iostream>
#include <conio.h>
using namespace std;

class area_calculation
{
public:
    float result;

    void area(int page);
    void area(float length, float breadth);
    void area(float radius);
};

void area_calculation::area(int page)
{
    result = page * page;
    cout << "Area of square: " << result;
}

void area_calculation::area(float length, float breadth)
{
    result = length * breadth;
    cout << "Area of rectangle: " << result;
}

void area_calculation::area(float radius)
{
    result = 3.14 * radius * radius;
    cout << "Area of circle: " << result;
}

int main()
{
    area_calculation ac;

    int page;
    float length, breadth, radius;

    cout << "\nArea of square";
    cout << "\nEnter the value for side: ";
    cin >> page;
    ac.area(page);

    cout << "\nArea of rectangle";
    cout << "\nEnter the value for length and breadth: ";
    cin >> length >> breadth;
    ac.area(length, breadth);

    cout << "\nArea of circle";
    cout << "\nEnter the value for radius: ";
    cin >> radius;
    ac.area(radius);

    return 0;
}

// ADDITION OF TWO NUMBERS USING CLASS AND OBJECT
#include <iostream>
using namespace std;

class sum{
public:
    int x, y, result;
    void input(){
        cout << "Enter the value for x and y: ";
        cin >> x >> y;
    }
    void operation(){
        result = x + y;
    }
    void display(){
        cout << "The addition result: " << result;
    }
};

int main(){
    sum s;
    s.input();
    s.operation();
    s.display();
    return 0;
}

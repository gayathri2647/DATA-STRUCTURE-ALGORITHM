// PRICE CALCULATION USING CONSTRUCTOR AND DESTRUCTOR
#include <iostream>
using namespace std;
class price_calculation {
    int quantity;
    float price_per_quant, total;
public:
    // Constructor
    price_calculation()  {
        price_per_quant = 27.4;
    }
    void input() {
        cout << "Enter the quantity for the product: ";
        cin >> quantity;
    }

    void operation() {
        total = quantity * price_per_quant;
    }
    void display() {
        cout << "Total amount to pay is: " << total;
    }
    // Destructor
    ~price_calculation() {
        cout << "\nObject deleted";
    }
};

int main(){
    price_calculation p;
    p.input();
    p.operation();
    p.display();
    return 0;
}

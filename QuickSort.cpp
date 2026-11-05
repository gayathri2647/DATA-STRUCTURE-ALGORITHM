
#include <iostream>
using namespace std;

class quicksort {
public:
    int conquer(int a[], int low, int high) {
        int pivot = a[high], i = low, temp;

        for (int j = low; j < high; j++) {
            if (a[j] <= pivot) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
            }
        }

        temp = a[i];
        a[i] = a[high];
        a[high] = temp;

        return i;
    }

    void divide(int a[], int low, int high) {
        if (low < high) {
            int p = conquer(a, low, high);
            divide(a, low, p - 1);
            divide(a, p + 1, high);
        }
    }

    void display(int a[], int n) {
        cout << "Sorted elements are: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << "\t";
    }
};

int main() {
    int a[20], n;
    quicksort qs;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Enter a number between 1 and 20.";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    qs.divide(a, 0, n - 1);
    qs.display(a, n);

    return 0;
}

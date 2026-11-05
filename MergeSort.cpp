#include <iostream>
using namespace std;

class merge_sort {
public:
    void divide(int a[], int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            divide(a, low, mid);
            divide(a, mid + 1, high);
            merge(a, low, mid, high);
        }
    }

    void merge(int a[], int low, int mid, int high) {
        int i = low, j = mid + 1, k = low;
        int temp[20];

        while (i <= mid && j <= high)
            temp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

        while (i <= mid)
            temp[k++] = a[i++];

        while (j <= high)
            temp[k++] = a[j++];

        for (i = low; i <= high; i++)
            a[i] = temp[i];
    }

    void display(int a[], int n) {
        cout << "Sorted elements are: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << "\t";
    }
};

int main() {
    int a[20], n;
    merge_sort ms;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Enter a number between 1 and 20.";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ms.divide(a, 0, n - 1);
    ms.display(a, n);

    return 0;
}

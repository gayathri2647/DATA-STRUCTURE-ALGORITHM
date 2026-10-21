
#include <iostream>
using namespace std;

class quicksort
{
public:
    void divide(int elements[], int low, int high)
    {
        int pivot_position;

        if (low < high)
        {
            pivot_position = conqure(elements, low, high);

            divide(elements, low, pivot_position - 1);
            divide(elements, pivot_position + 1, high);
        }
    }

    int conqure(int elements[], int low, int high)
    {
        int pivot, i, j, temp;

        pivot = elements[high];
        i = low;

        for (j = low; j < high; j++)
        {
            if (elements[j] <= pivot)
            {
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;

                i++;
            }
        }

        temp = elements[i];
        elements[i] = elements[high];
        elements[high] = temp;

        return i;
    }

    void display(int elements[], int low, int high)
    {
        int i;

        cout << "Sorted elements are: ";

        for (i = low; i <= high; i++)
        {
            cout << elements[i] << "\t";
        }
    }
};

int main()
{
    int elements[20], n, i;
    quicksort qs;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 1 || n > 20)
    {
        cout << "Enter a number between 1 and 20.";
        return 0;
    }

    cout << "Enter the elements: ";

    for (i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    qs.divide(elements, 0, n - 1);
    qs.display(elements, 0, n - 1);

    return 0;
}

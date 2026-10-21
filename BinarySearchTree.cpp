
#include <iostream>
using namespace std;

class binary_search_tree
{
public:
    int tree[50], i, count;

    void init()
    {
        for (i = 1; i < 50; i++)
        {
            tree[i] = -1;
        }
        count = 0;
    }

    void insert()
    {
        int value;

        cout << "Enter the value: ";
        cin >> value;

        i = 1;

        while (i < 50 && tree[i] != -1)
        {
            if (value > tree[i])
            {
                i = i * 2 + 1;
            }
            else
            {
                i = i * 2;
            }
        }

        if (i < 50)
        {
            tree[i] = value;
            count = count + 1;
        }
        else
        {
            cout << "Tree is full. Cannot insert value.\n";
        }
    }

    void preorder(int i)
    {
        if (i < 50 && tree[i] != -1)
        {
            cout << tree[i] << "\t";

            preorder(i * 2);
            preorder(i * 2 + 1);
        }
    }
};

int main()
{
    binary_search_tree bs;

    bs.init();

    bs.insert();
    bs.insert();
    bs.insert();

    cout << "\nPreorder elements are: ";
    bs.preorder(1);

    return 0;
}

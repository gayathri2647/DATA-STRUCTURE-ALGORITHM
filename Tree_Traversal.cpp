#include <iostream>
using namespace std;
class Tree_traversal
{
public:
    int i, tree[7];

    void input()
    {
        cout << "Enter the elements for the tree: ";

        for (i = 1; i <= 6; i++)
        {
            cin >> tree[i];
        }
    }
    void preorder(int i)
    {
        if (i <= 6 && tree[i] != -1)
        {
            cout << tree[i] << "\t";
            preorder(i * 2);
            preorder(i * 2 + 1);
        }
    }
    void postorder(int i)
    {
        if (i <= 6 && tree[i] != -1)
        {
            postorder(i * 2);
            postorder(i * 2 + 1);
            cout << tree[i] << "\t";
        }
    }
    void inorder(int i)
    {
        if (i <= 6 && tree[i] != -1)
        {
            inorder(i * 2);
            cout << tree[i] << "\t";
            inorder(i * 2 + 1);
        }
    }
};
int main()
{
    Tree_traversal t;

    t.input();

    cout << "\nPreorder elements are: ";
    t.preorder(1);

    cout << "\nPostorder elements are: ";
    t.postorder(1);

    cout << "\nInorder elements are: ";
    t.inorder(1);

    return 0;
}

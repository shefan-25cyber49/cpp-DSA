// lower Triangular Matrix - c++ class
#include <iostream>
using namespace std;

class LowTri
{
private:
    int n;
    int *A;

public:
    LowTri()
    {
        n = 2;
        A = new int[n * (n + 1) / 2];
    }
    LowTri(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void setL(int i, int j, int x);
    int getL(int i, int j);
    void display();

    ~LowTri()
    {
        delete[] A;
    }
};

void LowTri::setL(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = x;
}
int LowTri::getL(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}
void LowTri::display()
{
    int i, j;
    cout << endl
         << "Matrix :-" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i * (i - 1) / 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the Order of Matrix : ";
    cin >> n;
    LowTri LT(n);
    int i, j, x;
    cout << "Enter the Elements :-" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> x;
            LT.setL(i, j, x);
        }
    }
    LT.display();
    return 0;
}
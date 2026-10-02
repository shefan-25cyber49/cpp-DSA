// C++ Class for Diagonal Matrix
#include <iostream>
using namespace std;

class Diag
{
private:
    int n;
    int *A;

public:
    Diag(){
        n=2;
        A = new int[n];
    }
    Diag(int n)
    {
        this->n = n;
        A = new int[n];
    }

    void setD(int i, int j, int x);
    int getD(int i, int j);
    void display();

    ~Diag()
    {
        delete[] A;
    }
};

void Diag::setD(int i, int j, int x)
{
    if (i == j)
        A[i] = x;
}
int Diag::getD(int i, int j)
{
    if (i == j)
        return A[i];
    else
        return 0;
}
void Diag::display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                cout << A[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    Diag d(4);
    d.setD(0,0,5);
    d.setD(1,1,8);
    d.setD(2,2,9);
    d.setD(3,3,1);
    d.display();
    cout << "Element at 1,1 : " << d.getD(1, 1);

    return 0;
}
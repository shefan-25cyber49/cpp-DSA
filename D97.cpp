// Program for Operations on an array using C++ CLASS
#include <iostream>
using namespace std;

class array
{
private:
    int *A;
    int size;
    int len;
    void swap(int *x, int *y);

public:
    array()
    {
        size = 10;
        A = new int[size];
        len = 0;
    }
    array(int sz)
    {
        size = sz;
        A = new int[sz];
        len = 0;
    }
    ~array()
    {
        delete[] A;
    }
    void display();

    void append(int x);

    void insert(int index, int x);

    void delet(int index);

    void get(int index);

    void set(int index, int x);

    void max();

    void min();

    void sum();

    void avg();

    void search(int x);

    void reverse();

    void sort();

    void rearrange();
};

void array::display()
{
    cout << endl
         << "Elements :-" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void array::append(int x)
{
    if (len < size)
        A[len++] = x;
}

void array::insert(int index, int x)
{
    if (index >= 0 && index <= len)
    {
        for (int i = len; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        len++;
    }
}

void array::delet(int index)
{
    int x = 0;
    if (index >= 0 && index < len)
    {
        x = A[index];
        for (int i = index; i < len - 1; i++)
        {
            A[i] = A[i + 1];
        }
        len--;
    }
    cout << endl
         << "Deleted Element at Index : " << index << " is " << x;
}

void array::get(int index)
{
    if (index >= 0 && index < len)
    {
        cout << endl
             << "Element get at Index " << index << " is " << A[index];
    }
}

void array::set(int index, int x)
{
    if (index >= 0 && index < len)
    {
        A[index] = x;
        cout << endl
             << "Element set at Index " << index << " is " << A[index];
    }
}

void array::max()
{
    int mx = A[0];
    for (int i = 1; i < len; i++)
    {
        if (A[i] > mx)
        {
            mx = A[i];
        }
    }
    cout << endl
         << "Largest Element : " << mx << endl;
}

void array::min()
{
    int mn = A[0];
    for (int i = 1; i < len; i++)
    {
        if (A[i] < mn)
        {
            mn = A[i];
        }
    }
    cout << endl
         << "Smallest Element : " << mn << endl;
}

void array::sum()
{
    int s = 0;
    for (int i = 0; i < len; i++)
    {
        s += A[i];
    }
    cout << endl
         << "Sum of Elements : " << s << endl;
}
void array::avg()
{
    int s = 0;
    float a;
    for (int i = 0; i < len; i++)
    {
        s += A[i];
    }
    a = (float)s / (len);
    cout << endl
         << "Average of Elements : " << a << endl;
}

void array::search(int x)
{
    for (int i = 0; i < len; i++)
    {
        if (A[i] == x)
        {
            cout << endl
                 << "Element found at Index : " << i << endl;
        }
    }
}

void array::reverse()
{
    int *B;
    B = new int[size];
    for (int i = 0, j = len - 1; i < len, j >= 0; i++, j--)
    {
        B[i] = A[j];
    }
    for (int i = 0; i < len; i++)
    {
        A[i] = B[i];
    }
    display();
}

void array::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void array::sort()
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
                swap(&A[j], &A[j + 1]);
        }
    }
}

void array::rearrange()
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] >= 0)
            j--;
        if (i < j)
            swap(&A[i], &A[j]);
    }
}

int main()
{
    int ch, sz, num, ind, n;
    array *arr = nullptr;

    cout << "Enter Size of Array : ";
    cin >> sz;
    arr = new array(sz);

    cout << "Enter Number of Elements : ";
    cin >> n;
    cout << endl
         << "Enter the Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr->append(num);
    }

    cout << endl
         << "MENU :-" << endl
         << "1. Display" << endl
         << "2. Append" << endl
         << "3. Insert" << endl
         << "4. Delete" << endl
         << "5. Get" << endl
         << "6. Set" << endl
         << "7. Max & Min" << endl
         << "8. Sum & Average" << endl
         << "9. Search" << endl
         << "10. Reverse" << endl
         << "11. Sort" << endl
         << "12. Rearrange" << endl
         << "13. Exit" << endl
         << endl;

    do
    {
        cout << endl
             << "Enter your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            arr->display();
            break;
        case 2:
            cout << "Enter the number to Append : ";
            cin >> num;
            arr->append(num);
            arr->display();
            break;
        case 3:
            cout << "Enter an index : ";
            cin >> ind;
            cout << "Enter the number to Insert : ";
            cin >> num;
            arr->insert(ind, num);
            arr->display();
            break;
        case 4:
            cout << "Enter the index of element to Delete : ";
            cin >> ind;
            arr->delet(ind);
            arr->display();
            break;
        case 5:
            cout << "Enter the index of element to Get : ";
            cin >> ind;
            arr->get(ind);
            break;
        case 6:
            cout << "Enter the index of element to Set : ";
            cin >> ind;
            cout << "Enter a number to Set : ";
            cin >> num;
            arr->set(ind, num);
            break;
        case 7:
            arr->display();
            arr->max();
            arr->min();
            break;
        case 8:
            arr->display();
            arr->sum();
            arr->avg();
            break;
        case 9:
            cout << "Enter a number to Search : ";
            cin >> num;
            arr->search(num);
            break;
        case 10:
            arr->display();
            arr->reverse();
            cout << endl
                 << "Reversed Array :-" << endl;
            arr->display();
            break;
        case 11:
            arr->display();
            arr->sort();
            cout << endl
                 << "Sorted Array :-" << endl;
            arr->display();
            break;
        case 12:
            arr->display();
            arr->rearrange();
            cout << endl
                 << "Rearranged Array :-" << endl;
            arr->display();
            break;
        default:
            break;
        }
    } while (ch > 0 && ch < 13);

    delete arr;
    return 0;
}
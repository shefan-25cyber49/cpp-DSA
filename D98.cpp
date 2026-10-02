// Program for Operations on an array using CLASS & TEMPLATE
#include <iostream>
using namespace std;

template <class T>

class array
{
private:
    T *A;
    int size;
    int len;
    void swap(T *x, T *y);

public:
    array()
    {
        size = 10;
        A = new T[size];
        len = 0;
    }
    array(int sz)
    {
        size = sz;
        A = new T[sz];
        len = 0;
    }
    ~array()
    {
        delete[] A;
    }
    void display();

    void append(T x);

    void insert(int index, T x);

    void delet(int index);

    void get(int index);

    void set(int index, T x);

    void max();

    void min();

    void sum();

    void avg();

    void search(T x);

    void reverse();

    void sort();

    void rearrange();
};

template<class T>
void array<T>::display()
{
    cout << endl
         << "Elements :-" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

template<class T>
void array<T>::append(T x)
{
    if (len < size)
        A[len++] = x;
}

template<class T>
void array<T>::insert(int index, T x)
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


template<class T>
void array<T>::delet(int index)
{
    T x = T();
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

template<class T>
void array<T>::get(int index)
{
    if (index >= 0 && index < len)
    {
        cout << endl
             << "Element get at Index " << index << " is " << A[index];
    }
}

template<class T>
void array<T>::set(int index, T x)
{
    if (index >= 0 && index < len)
    {
        A[index] = x;
        cout << endl
             << "Element set at Index " << index << " is " << A[index];
    }
}

template<class T>
void array<T>::max()
{
    T mx = A[0];
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

template<class T>
void array<T>::min()
{
    T mn = A[0];
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

template<class T>
void array<T>::sum()
{
    T s = 0;
    for (int i = 0; i < len; i++)
    {
        s += A[i];
    }
    cout << endl
         << "Sum of Elements : " << s << endl;
}

template<class T>
void array<T>::avg()
{
    T s = 0;
    double a;
    for (int i = 0; i < len; i++)
    {
        s += A[i];
    }
    a = static_cast<double>(s) / len;
    cout << endl
         << "Average of Elements : " << a << endl;
}

template<class T>
void array<T>::search(T x)
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

template<class T>
void array<T>::reverse()
{
    T *B = new T[size];
    for (int i = 0, j = len - 1; i < len && j >= 0; i++, j--)
    {
        B[i] = A[j];
    }
    for (int i = 0; i < len; i++)
    {
        A[i] = B[i];
    }
    delete[] B;
    display();
}

template<class T>
void array<T>::swap(T *x, T *y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}

template<class T>
void array<T>::sort()
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

template<class T>
void array<T>::rearrange()
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
    int ch, sz, ind, n;
    char num;
    array<char> *arr = nullptr;

    cout << "Enter Size of Array : ";
    cin >> sz;
    arr = new array<char>(sz);

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
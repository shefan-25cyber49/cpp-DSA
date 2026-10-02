// Menu Driven Program for Operations on an array
#include <iostream>
using namespace std;

struct array
{
    int *A;
    int size;
    int len;
};

void display(struct array arr)
{
    cout << endl
         << "Elements :-" << endl;
    for (int i = 0; i < arr.len; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void append(struct array *arr, int x)
{
    if (arr->len < arr->size)
        arr->A[arr->len++] = x;
}

void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->len)
    {
        for (int i = arr->len; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->len++;
    }
}

void delet(struct array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->len)
    {
        x = arr->A[index];
        for (int i = index; i < arr->len - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->len--;
    }
    cout << endl
         << "Deleted Element at Index : " << index << " is " << x;
}

void get(struct array arr, int index)
{
    if (index >= 0 && index < arr.len)
    {
        cout << endl
             << "Element get at Index " << index << " is " << arr.A[index];
    }
}

void set(struct array arr, int index, int x)
{
    if (index >= 0 && index < arr.len)
    {
        arr.A[index] = x;
        cout << endl
             << "Element set at Index " << index << " is " << arr.A[index];
    }
}

void max(struct array arr)
{
    int mx = arr.A[0];
    for (int i = 1; i < arr.len; i++)
    {
        if (arr.A[i] > mx)
        {
            mx = arr.A[i];
        }
    }
    cout << endl
         << "Largest Element : " << mx << endl;
}

void min(struct array arr)
{
    int mn = arr.A[0];
    for (int i = 1; i < arr.len; i++)
    {
        if (arr.A[i] < mn)
        {
            mn = arr.A[i];
        }
    }
    cout << endl
         << "Smallest Element : " << mn << endl;
}

void sum(struct array arr)
{
    int s = 0;
    for (int i = 0; i < arr.len; i++)
    {
        s += arr.A[i];
    }
    cout << endl
         << "Sum of Elements : " << s << endl;
}
void avg(struct array arr)
{
    int s = 0;
    float a;
    for (int i = 0; i < arr.len; i++)
    {
        s += arr.A[i];
    }
    a = (float)s / (arr.len);
    cout << endl
         << "Average of Elements : " << a << endl;
}

void search(struct array arr, int x)
{
    for (int i = 0; i < arr.len; i++)
    {
        if (arr.A[i] == x)
        {
            cout << endl
                 << "Element found at Index : " << i << endl;
        }
    }
}

void reverse(struct array arr)
{
    int *B;
    B = new int[arr.size];
    for (int i = 0, j = arr.len - 1; i < arr.len, j >= 0; i++, j--)
    {
        B[i] = arr.A[j];
    }
    for (int i = 0; i < arr.len; i++)
    {
        arr.A[i] = B[i];
    }
    display(arr);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(struct array *arr)
{
    for (int i = 0; i < arr->len - 1; i++)
    {
        for (int j = 0; j < arr->len - 1 - i; j++)
        {
            if (arr->A[j] > arr->A[j + 1])
                swap(&arr->A[j], &arr->A[j + 1]);
        }
    }
}

void rearrange(struct array *arr)
{
    int i = 0, j = arr->len - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    int ch, num, ind;
    struct array arr;

    cout << "Enter Size of Array : ";
    cin >> arr.size;
    cout << "Enter Number of Elements : ";
    cin >> arr.len;
    arr.A = new int[arr.size];
    cout << endl
         << "Enter the Elements : " << endl;
    for (int i = 0; i < arr.len; i++)
    {
        cin >> arr.A[i];
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
            display(arr);
            break;
        case 2:
            cout << "Enter the number to Append : ";
            cin >> num;
            append(&arr, num);
            display(arr);
            break;
        case 3:
            cout << "Enter an index : ";
            cin >> ind;
            cout << "Enter the number to Insert : ";
            cin >> num;
            insert(&arr, ind, num);
            display(arr);
            break;
        case 4:
            cout << "Enter the index of element to Delete : ";
            cin >> ind;
            delet(&arr, ind);
            display(arr);

            break;
        case 5:
            cout << "Enter the index of element to Get : ";
            cin >> ind;
            get(arr, ind);
            break;
        case 6:
            cout << "Enter the index of element to Set : ";
            cin >> ind;
            cout << "Enter a number to Set : ";
            cin >> num;
            set(arr, ind, num);
            break;
        case 7:
            display(arr);
            max(arr);
            min(arr);
            break;
        case 8:
            display(arr);
            sum(arr);
            avg(arr);
            break;
        case 9:
            cout << "Enter a number to Search : ";
            cin >> num;
            search(arr, num);
            break;
        case 10:
            display(arr);
            reverse(arr);
            cout << endl
                 << "Reversed Array :-" << endl;
            display(arr);
            break;
        case 11:
            display(arr);
            sort(&arr);
            cout << endl
                 << "Sorted Array :-" << endl;
            display(arr);
            break;
        case 12:
            display(arr);
            rearrange(&arr);
            cout << endl
                 << "Rearranged Array :-" << endl;
            display(arr);
            break;
        default:
            break;
        }
    } while (ch > 0 && ch < 13);

    return 0;
}
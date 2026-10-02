// Applying the Template

#include <iostream>
using namespace std;

template <class T>
class arithmetic
{

private:
    T a;
    T b;

public:
    arithmetic(T a, T b);
    T add();
    T sub();
    T mul();
    T dvs();
};

template <class T>
arithmetic<T>::arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

template <class T>
T arithmetic<T>::mul()
{
    T c;
    c = a * b;
    return c;
}

template <class T>
T arithmetic<T>::dvs()
{
    T c;
    c = a / b;
    return c;
}

int main()
{
    arithmetic<int> ar(10, 5); // object
    cout << "Addition : " << ar.add() << endl;
    cout << "Subtraction : " << ar.sub() << endl;
    cout << "Multiplication : " << ar.mul() << endl;
    cout << "Division : " << ar.dvs() << endl;

    return 0;
}
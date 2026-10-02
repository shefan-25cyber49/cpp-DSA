// CARDS
// Face : 1 to 10, 11 = Joker, 12 = Queen, 13 = King
// Colors : 0 = black, 1 = red
// Shape : 0 = club, 1 = spade, 2 = diamond, 3 = heart
#include <iostream>
using namespace std;
struct card
{
    int color;
    int face;
    int shape;
};
int main()
{
    struct card c = {1, 0, 0};
    cout << c.color << endl;
    cout << c.face << endl;
    cout << c.shape << endl;

    return 0;
}
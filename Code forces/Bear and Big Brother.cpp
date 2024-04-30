#include <iostream>
using namespace std;
// the bear and big brother
int main()
{
    int a;
    int b;
    int count = 0;
    cin >> a;
    cin >> b;

    do {
        b *= 2;
        a *= 3;

        count++;

    } while (a <= b);
    cout << count << endl;
}
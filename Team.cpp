#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t, v, p;
    cin >> t >> v >> p;
    int count;
    if (t + v + p > 2)
    {
        count++;
    }

    cout << count;
}
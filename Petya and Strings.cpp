
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    for (auto& x : a) {
        x = tolower(x);
    }
    for (auto& x : b) {
        x = tolower(x);
    }
    if (a > b)
    {
        cout << 1;

    }
    else if (b > a)
    {
        cout << -1;

    }
    else {
        cout << 0;
    }


}
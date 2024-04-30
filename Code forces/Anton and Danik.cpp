#include <iostream>
#include <string>
using namespace std;
int main() {
    int num = 0;
    int count = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else
        {
            num++;
        }

    }
    if (count > num)
    {
        cout << "Anton";
    }
    else if (count < num)
    {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
}
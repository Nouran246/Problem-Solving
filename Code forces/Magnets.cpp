#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    int num[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];

    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] != num[i + 1])
            count++;
    }
    cout << count << endl;

}
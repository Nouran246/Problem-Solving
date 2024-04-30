#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

// sereja and dima
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    int i = 0; int j = n - 1;
    int max, k;
    int p[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];

    }
    while (i <= j)
    {
        if (p[i] >= p[j])
        {
            max = p[i];
            i++;

        }
        else {
            max = p[j];
            j--;
        }
        if (k % 2 == 0)
        {
            sum += max;
        }
        else {
            count += max;
        }
        k++;
    }
    cout << count << " " << sum;
}
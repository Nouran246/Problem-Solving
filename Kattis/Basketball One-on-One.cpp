#include <iostream>
#include <string>

using namespace std;

int main() {
    string record;
    cin >> record;

    int alice_score = 0, barbara_score = 0;

    for (int i = 0; i < record.length(); i += 2) {
        char player = record[i];
        int points = record[i + 1] - '0'; 

        if (player == 'A') {
            alice_score += points;
        }
        else {
            barbara_score += points;
        }
    }

    if (alice_score > barbara_score) {
        cout << "A" << endl;
    }
    else {
        cout << "B" << endl;
    }

    return 0;
}
#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Consume the newline character.

    unordered_map<string, int> userBalances;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string login;
        int balance;
        getline(iss, login, ';');
        iss >> balance;
        userBalances[login] = balance;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string login;
        cin >> login;

        if (userBalances.find(login) != userBalances.end()) {
            cout << userBalances[login] << " ";
        } else {
            cout << "0 ";
        }
    }

    cout << endl;

    return 0;
}

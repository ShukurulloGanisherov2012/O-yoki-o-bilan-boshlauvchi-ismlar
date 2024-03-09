#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nechta ism kerak: ";
    cin>>n;
    string ismlar[n];
    for (int i = 0; i < n; ++i) {
        string a;
        cout << i + 1 << "-ismni kiriting: ";
        cin >> a;
        ismlar[i] = a;
    }

    for (int i = 0; i < 7; i++) {
        string b = ismlar[i];
        if (b[0] == 'O' or b[0] == 'o'){
            cout << i+1 << ") " << ismlar[i] << endl;
        }
    }
}

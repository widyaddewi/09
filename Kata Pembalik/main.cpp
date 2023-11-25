#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string kalimat, kata;
    vector<string> words;

    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    istringstream iss(kalimat);
    while (iss >> kata) {
        words.push_back(kata);
    }

    for (int i = words.size() - 1; i > 0; i--) {
        cout << words[i] << " ";
    }

    // Menampilkan kata pertama tanpa spasi di akhir
    if (!words.empty()) {
        cout << words[0];
    }

    return 0;
}
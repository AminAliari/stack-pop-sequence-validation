#include <iostream>
#include <vector>

using namespace std;

int getInput();
string validateSeq(vector<int> seq);

int main() {

    vector<int> seq;

    cout << "enter a number sequence: ";

    while (true) {
        int n = getInput();

        if (n != -1) {
            seq.push_back(n);
        } else {
            break;
        }
    }

    cout << validateSeq(seq) << endl;
    return 0;
}

int getInput () {
    int n;
    while (!(cin >> n) || n < -1 || n > 9) {
        if (n == -1) return -1;

        cout << "enter a valid digit" << endl;
        cin.clear();
        cin.ignore();
    }

    return n;
}

string validateSeq(vector<int> seq) {
    int max = -1;
    for (int i = 0;i < seq.size();i++) {
        if (seq[i] > max) {
            max = seq[i];
            continue;
        }
        if (seq[i] < seq[i-1]) {
            continue;
        }
        return "invalid sequence";
    }
    return "valid sequence";
}

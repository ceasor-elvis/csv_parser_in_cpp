#include <bits/stdc++.h>
using namespace std;

// TODO (csv-basics): implement per the lesson description.

int main() {
    string first_line;
    if (!getline(cin, first_line) || first_line.empty()) return 0;
    char delim = first_line.back();
    cout << "OK" << "\n";

    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        string cur_line = line.substr(6);
        size_t pos = 0;
        while ((pos = cur_line.find(delim, pos)) != string::npos){
            cur_line.replace(pos, 1, " | ");
            pos+=3;
        }
        cout << cur_line << "\n";
    }
}

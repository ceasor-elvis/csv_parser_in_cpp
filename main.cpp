#include <bits/stdc++.h>
using namespace std;

// TODO (csv-basics): implement per the lesson description.

int main() {
    string first_line;
    if (!getline(cin, first_line) || first_line.empty()) return 0;
    char delim = first_line.back();

    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        size_t pos = 0;
        while ((pos = line.find(delim, pos)) != string::npos){
            line.replace(pos, 1, " | ");
            pos+=3;
        }
        cout << line << "\n";
    }
}

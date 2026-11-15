#include <bits/stdc++.h>
using namespace std;

// TODO (csv-basics): implement per the lesson description.

int main() {
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        size_t pos = 0;
        while ((pos = line.find_first_of(",; \t", pos)) != string::npos){
            line.replace(pos, 1, " | ");
            pos+=3;
        }
        cout << line << "\n";
    }
}

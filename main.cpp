#include <iostream>
#include "git-practice-sub/auxi.h"

using namespace std;

int main() {
    int x = 10;
    int y = 3;
    cout << "add(" << x << "," << y << ") = " << add(x, y) << endl;
    cout << "sub(" << x << "," << y << ") = " << sub(x, y) << endl;
    return 0;
}

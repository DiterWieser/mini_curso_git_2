#include <iostream>

using namespace std;

void print(int valor);

int main() {

    print(1);
    print(0);

    return 0;
}

void print(int valor) {
    cout << valor++ << endl;
    print(valor);
}

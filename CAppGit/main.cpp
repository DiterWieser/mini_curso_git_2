#include <iostream>

using namespace std;

void print(int valor);

int main() {

    print(0);
    print(1);

    return 0;
}

void print(int valor) {
    cout << valor++ << endl;
    print(valor);
}

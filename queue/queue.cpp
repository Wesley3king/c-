#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <string> cores;
    cores.push("yellow");
    cores.push("red");
    cores.push("green");
    cout << "quantidade da fila : " << cores.size() << endl;
    cores.pop();
    cout << "quantidade da fila : " << cores.size() << endl;
    cout << "ultimo elemento na fila : " << cores.front() << endl;
    cout << "primeiro elemento na fila : " << cores.back() << endl;
    string isEmpty = cores.empty() ? "a fila esta vazia" : "a fila nao esta vazia";
    cout << isEmpty;

    return 0;
}
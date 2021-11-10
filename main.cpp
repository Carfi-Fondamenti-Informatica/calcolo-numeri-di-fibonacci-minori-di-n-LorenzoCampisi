#include <iostream>
using namespace std;
int main(){
int n;
cout << "inserisci n:";
cin >> n;

int long primo = 0, secondo = 1, numero = primo + secondo;
int i = 0;
while (numero <= n) {
if (i == 0) cout << 1 << endl;
else {
cout << numero << endl;
primo = secondo;
secondo = numero;
numero = secondo + primo;
}
i++;
}
}

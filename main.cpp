#include <iostream>
using namespace std;

int main() {

    int n=0, primo=1 , secondo=1 , terzo=0;

    cout<<"inserisci numero"<<endl;
    cin>>n;

    if(n>=2){
        cout<<primo<<endl;
        cout<<secondo<<endl;

        for(int i=2;terzo<(n-2);i++){
            terzo=primo+secondo;
            primo=secondo;
            secondo=terzo;
            cout<<terzo<<endl;
        }

    }
    else{
        cout<<"errore"<<endl;
    }




    return 0;



}

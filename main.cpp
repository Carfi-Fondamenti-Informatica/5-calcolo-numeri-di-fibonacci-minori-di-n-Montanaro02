#include <iostream>
using namespace std;

int main(){
    int prossimonumero;
    int primonumero=0;
    int secondonumero=1;
    int numero=0;
    cin>>numero;
    cout <<secondonumero<<"\n";
    for(int i=0; i<=numero; i++){
        prossimonumero=primonumero+secondonumero;
        primonumero=secondonumero;
        secondonumero=prossimonumero;
        cout<<prossimonumero<<"\n";
    }
    return 0;
}

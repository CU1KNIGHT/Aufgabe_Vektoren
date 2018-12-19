#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int dimension = 3;

    int v1[dimension];
    int v2[dimension];
    cout << "erste Vektor eingeben:" << endl;
    for (int i = 0; i < dimension; i++) {

        cin >> v1[i];

    }
    cout << "zweite Vektor eingeben:" << endl;
    for (int z = 0; z < dimension; z++) {
        cin >> v2[z];
    }
    cout << "   Danke  " << endl;
    cout << "der Summe der vektoren ist:" << endl;
    for(int c=0; c < 3; c++)
        cout << v1[c]+v2[c] << endl;


    int sS=0;
    for(int b=0 ;b< dimension ; b++){

     int sP =  v1[b]*v2[b];
     sS = sS +sP;}

    cout << "Das Skalarprodukt betraegt " << sS<< endl;
    main();
}
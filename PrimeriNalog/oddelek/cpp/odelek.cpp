//
// Created by marjan on 16.1.2024.
//

#include <iostream>
#include "../h/odelek.h"

Odelek::Odelek() {}

Odelek::Odelek(Dijak *d, int stevilo, const string &razrednik) : d(d), stevilo(stevilo), razrednik(razrednik) {}

Dijak & Odelek::addDijak(){
    Dijak * d = new Dijak() ;
    string ime;
    cout << "vstavi ime: ";
    std::getline(std::cin, ime);
    d->setIme(ime);
    string pri;
    cout << "vstavi priimek: ";
    std::getline(cin, pri);
    d->setPriimek(pri);
    return *d;
}

void Odelek::addDijaktoArray(int st) {

    Dijak dijak[st];
    for (int i = 0; i < st; ++i) {
        d[i] = addDijak();


    }
   // d = dijak;

}

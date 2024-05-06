//
// Created by marjan on 23.1.2024.
//

#include <iostream>
#include "../h/Oddelek.h"

Oddelek::Oddelek() {}

Oddelek::Oddelek(const string &naziv, int st, const vector<Dijak> &dijaki) :
naziv(naziv), st(st), dijaki(dijaki) {}

const string &Oddelek::getNaziv() const {
    return naziv;
}

void Oddelek::setNaziv(const string &naziv) {
    Oddelek::naziv = naziv;
}

int Oddelek::getSt() const {
    return st;
}

void Oddelek::setSt(int st) {
    Oddelek::st = st;
}

vector<Dijak> Oddelek::getDijaki() const {
    return dijaki;
}

void Oddelek::vnosOddelek(){
    Oddelek o;
    o.


}

void Oddelek::vnosDijakovOddelek(int st){

    for (int i = 0; i < st; ++i) {
        Dijak d ;

        d = d.stVnosDijakNakljucno();

        dijaki.push_back(d);
    }

    }


const string Oddelek::getNakljucniNaziv() {
    string naziv[] = {"1. A", "1. B", "1. C", "2. A", "2. B", "2. C", "3. A", "3. B", "3. C", "4. A", "4. B", "4. C"};
    int st = sizeof(naziv) / sizeof(naziv[0]);
    int i = rand() % st;
    return naziv[i];
}

int Oddelek::getNakljucnoSteviloDijakov() {
    return rand() % 20 + 15;
}

void Oddelek::izpisdijakovOddelek( vector <Dijak> dijaki) {
    Dijak d;
    for (int i = 0; i < dijaki.size(); ++i) {
        cout << i + 1 << ". ---Dijak---\n";
         d.IzpisiDijak(dijaki[i]);

    }

}





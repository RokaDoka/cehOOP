//
// Created by marjan on 23.1.2024.
//

#include <iostream>

#include "../h/Dijak.h"

Dijak::Dijak() {}

Dijak::Dijak(string i, string p, int s) {
    this->ime = i;
    this->priimek = p;
    this->starost = s;
}


const string &Dijak::getIme() const {
    return ime;
}

void Dijak::setIme(const string &ime) {
    Dijak::ime = ime;
}

const string &Dijak::getPriimek() const {
    return priimek;
}

void Dijak::setPriimek(const string &priimek) {
    Dijak::priimek = priimek;
}

int Dijak::getStarost() const {
    return starost;
}

void Dijak::setStarost(int starost) {
    Dijak::starost = starost;
}

//Vnos dijaka
//vrne kazalec na dijaka
Dijak * Dijak::VnosDijak() {
    Dijak *d = new Dijak();
    string ime;
    cout << "Vnesi ime: ";
    getline(cin, ime);
    d->ime = ime;
    cout << "Vnesi priimek: ";
    string priimek;
    getline(cin, d->priimek);
    cout << "Vnesi starost: ";
    cin >> d->starost;
    cin.ignore();
    return d;

}

Dijak  Dijak::VnosDijaka() {
    Dijak d ;
    string ime;
    cout << "Vnesi ime: ";
    getline(cin, ime);
    d.ime = ime;
    cout << "Vnesi priimek: ";
    string priimek;
    getline(cin, d.priimek);
    cout << "Vnesi starost: ";
    cin >> d.starost;
    cin.ignore();

    return d;

}

Dijak * Dijak::VnosDijakNakljucno() {
   Dijak * d = new Dijak();
    d->ime = d->getNakljucnoIme();
    d->priimek = d->getNakljucniPriimek();
    d->starost = rand() % 20 + 15;
    return d;

}
Dijak  Dijak::stVnosDijakNakljucno() {
   Dijak  d ;
    d.ime = getNakljucnoIme();
    d.priimek = getNakljucniPriimek();
    d.starost = rand() % 20 + 15;
    return d;

}

void Dijak::IzpisiDijak(Dijak d) {


    cout << " Ime: " << d.ime << "\n";
    cout << " Priimek: " << d.priimek << "\n";
    cout << " Starost: " << d.starost << "\n";

}
void Dijak::IzpisiDijak(Dijak * d) {
    cout << "Ime: " << d->ime;
    cout << ", Priimek: " << d->priimek;
    cout << ", Starost: " << d->starost;
}

void Dijak::IzpisDijaka() {
     cout << "Ime: " << this->ime;
    cout << ", Priimek: " << this->priimek;
    cout << ", Starost: " << this->starost;

}

const string Dijak::getNakljucnoIme() {
    string imena[10] = {"miha", "jana", "tone", "iva", "jan", "marko",
                        "luka", "domen", "zan", "cvetka",};
    return imena[rand() % 10];
}
const string Dijak::getNakljucniPriimek() {
    string priimki[5] = {"hočevar", "hec", "Lep", "horvat", "kosar"};
    return priimki[rand() % 5];
}
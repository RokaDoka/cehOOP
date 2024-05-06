//
// Created by marjan on 23.1.2024.
//

#include <iostream>
#include "h/"

Dijak::Dijak() {}

Dijak::Dijak(string i, string p, int s) {
    this->ime = i;
    this->priimek = p;
    this->starost = s;
}

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

    return d;

}

void Dijak::IzpisiDijak(Dijak d) {
    cout << "Ime: " << d.ime;
    cout << ", Priimek: " << d.priimek;
    cout << ", Starost: " << d.starost;
}
void Dijak::IzpisiDijak(Dijak * d) {
    cout << "Ime: " << d->ime;
    cout << ", Priimek: " << d->priimek;
    cout << ", Starost: " << d->starost;
}
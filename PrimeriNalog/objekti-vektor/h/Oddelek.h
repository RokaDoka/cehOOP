//
// Created by marjan on 23.1.2024.
//

#ifndef ODD_ODDELEK_H
#define ODD_ODDELEK_H

#include "vector"
#include "Dijak.h"

class Oddelek {
    string naziv;
    int st;
    vector<Dijak> dijaki;


public:
    Oddelek();

    Oddelek(const string &naziv, int st, vector<Dijak> dijaki);

    Oddelek(Oddelek *pOddelek);

    Oddelek(const string &naziv, int st, const vector<Dijak> &dijaki);


    vector<Dijak> getDijaki() const;

    void setDijaki(vector<Dijak> dijaki);

    void vnosDijakov(int st, Dijak *);


    void stVnosDijakov(int st);

    void izpisdijakov(int st);

    void vnosDijakovNakljucno(int st, Dijak *);


    const string getNakljucniNaziv();

    int getNakljucnoSteviloDijakov();

    void vnosDijakovOddelek(int st);

    void izpisdijakovOddelek(vector<Dijak> dijak);


    void izpisdijakovOddelek(vector<Dijak> &dijaki);

    const string &getNaziv() const;

    void setNaziv(const string &naziv);

    int getSt() const;

    void setSt(int st);
};


#endif //ODD_ODDELEK_H

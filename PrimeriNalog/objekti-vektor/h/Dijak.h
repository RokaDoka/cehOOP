//
// Created by marjan on 23.1.2024.
//
#include <string>


using namespace std;
#ifndef ODD_DIJAK_H
#define ODD_DIJAK_H


class Dijak {
    string ime;
    string priimek;
    int starost;


public:
    Dijak();
    Dijak(string i,string p,int s);

    explicit Dijak(const string &ime);

    Dijak * VnosDijak();
    Dijak VnosDijaka();


    void IzpisiDijak(Dijak);
    void IzpisDijaka();

    void IzpisiDijak(Dijak *);

    const string &getIme() const;

    void setIme(const string &ime);

    const string &getPriimek() const;

    void setPriimek(const string &priimek);

    int getStarost() const;

    void setStarost(int starost);

    Dijak stVnosDijakNakljucno();

    Dijak *VnosDijakNakljucno();


    const string getNakljucnoIme();

    const string getNakljucniPriimek();
};


#endif //ODD_DIJAK_H

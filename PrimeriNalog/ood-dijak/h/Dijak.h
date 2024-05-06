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
    Dijak * VnosDijak();
    Dijak & VnosDijak(Dijak );

    void IzpisiDijak(Dijak d);

    void IzpisiDijak(Dijak *);
};


#endif //ODD_DIJAK_H

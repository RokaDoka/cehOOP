//
// Created by marjan on 16.1.2024.
//

#ifndef ODDELEK_ODELEK_H
#define ODDELEK_ODELEK_H

#include "dijak.h"

class Odelek {
    Dijak *d = new Dijak[2];
    int stevilo;
    string razrednik;
public:
    Odelek();

    Odelek(Dijak *d, int stevilo, const string &razrednik);

    Dijak & addDijak();


    void addDijaktoArray(int st);


};

#endif //ODDELEK_ODELEK_H

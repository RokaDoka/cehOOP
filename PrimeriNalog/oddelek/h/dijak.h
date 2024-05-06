//
// Created by marjan on 16.1.2024.
//
#include <string>
#ifndef ODDELEK_DIJAK_H
#define ODDELEK_DIJAK_H

#endif //ODDELEK_DIJAK_H

using namespace std;
class Dijak {

    string ime;
    string priimek;
    int starost;

public:
    Dijak();
    Dijak(const string &ime, const string &priimek, int starost);
    string getIme();
    void setIme(string s);

    const string &getPriimek() const;

    int getStarost() const;

    void setPriimek(string s);
};
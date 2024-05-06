//
// Created by marjan on 16.1.2024.
//

#include "../h/dijak.h"

Dijak::Dijak() {};
Dijak::Dijak(const std::string &ime, const std::string &priimek, int starost) {
    this->ime=ime;
    this->priimek = priimek;
    this->starost = starost;
}
string Dijak::getIme() {
    return this->ime;
}

void Dijak::setIme(string s){
    this->ime = s;
}

void Dijak::setPriimek(string s){
    this->priimek = s;
}

const string &Dijak::getPriimek() const {
    return priimek;
}

int Dijak::getStarost() const {
    return starost;
}

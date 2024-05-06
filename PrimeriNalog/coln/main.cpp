#include <iostream>
#include <cmath>

using namespace std;

class Coln {
protected:
    int dolzina;
    int nosilnost;

public:
    Coln(){

    }


    Coln(int dolzina, int nosilnost) {
        this->dolzina = dolzina;
        this->nosilnost = nosilnost;
    }

   void izpisi() {
        cout << "Dolzina: " << dolzina << " Nosilnost: " << nosilnost << endl;
    }

    int getDolzina() const {
        return dolzina;
    }

    void setDolzina(int dolzina) {
        Coln::dolzina = dolzina;
    }

    int getNosilnost() const {
        return nosilnost;
    }

    void setNosilnost(int nosilnost) {
        Coln::nosilnost = nosilnost;
    }

    float hitrost_trupa(float dtrup){

        float vhull=1.34 * sqrt(dtrup);
        return vhull;

    }
};

class Motrni : public Coln{
private:
    float moc_motor;
public:
    Motrni(){}

     //Motrni(float mocMotor) : moc_motor(mocMotor) {}

    Motrni(float mocMotor) {
        this->moc_motor = mocMotor;
    }

    float getMocMotor() const {
        return moc_motor;
    }

    void setMocMotor(float mocMotor) {
        moc_motor = mocMotor;
    }
    void izpisi(){

        cout << "Moc motorja" << getMocMotor() << endl;
    }

};

class jadrnica : public Coln{
    float povrsina_jader;

public:
    jadrnica(){}
    explicit jadrnica(float povrsinaJader) : povrsina_jader(povrsinaJader) {}

    float getPovrsinaJader() const {
        return povrsina_jader;
    }

    void setPovrsinaJader(float povrsinaJader) {
        povrsina_jader = povrsinaJader;
    }

    void izpisi(){
        Coln::izpisi();
        cout << "Povrsina jader" << getPovrsinaJader() << endl;
    }

};

class Motjad : public jadrnica,public Motrni{
    int st_kabin;

public:
    Motjad(){}
    explicit Motjad(int stKabin) : st_kabin(stKabin) {}

    int getStKabin() const {
        return st_kabin;
    }

    void setStKabin(int stKabin) {
        st_kabin = stKabin;
    }
    void izpisi(){
        Motrni::izpisi();
        jadrnica::izpisi();

        cout << "St kabin: " << getStKabin() << endl;

    }
};

int main() {
    jadrnica j;
    jadrnica j1(201);
    j.setPovrsinaJader(201.5);
    j.setDolzina(12);
    j.setNosilnost(25);
    j.izpisi();

    Motjad mj;




    return 0;
}

#include <iostream>
using namespace std;

class Vozel{
private:
    Vozel *nasl;
public:
private:
    int podatek;
public:
    Vozel *getNasl() const {
        return nasl;
    }

    void setNasl(Vozel *nasl) {
        Vozel::nasl = nasl;
    }

public:
    int getPodatek() const {
        return podatek;
    }

    void setPodatek(int podatek) {
        Vozel::podatek = podatek;
    }

    virtual ~Vozel() {
        delete this->nasl;

    }

    Vozel() {
        this->nasl=NULL;
    }

    Vozel(int p){
        this->podatek=p;
        this->nasl=NULL;
    }

    Vozel(int podatek, Vozel *nasl) : podatek(podatek), nasl(nasl) {}


    void Izpis(){
        cout<<"Podatek je: "<<podatek<<endl;

    }

};

class Seznam{
    Vozel *voz;
public:
    Vozel *getVoz() const {
        return voz;
    }

public:
    Seznam() {}

    void dodajVozel(int p){
        Vozel *v = new Vozel(p);
            v->setNasl(this->voz);
            this->voz = v;

    }
    void DodajKonec(Seznam *s,int p){
        Vozel *v = new Vozel(p);
        while (s-> getVoz()){
            if(s->getVoz()->getNasl() == NULL){
                s->getVoz()->setNasl(v);
            }
            s->getVoz() = s->getVoz()->getNasl();
        }
    }
};

int main() {

    Seznam *sez = new Seznam;
    Vozel *v;
    Seznam *kopi;
    sez->dodajVozel(9);
    sez->dodajVozel(12);
    sez->dodajVozel(10);
    v=sez->getVoz();
    while (v != NULL){
        cout<<v->getPodatek();
        v= v ->getNasl();

    }

    /*
    Vozel *s1 = new Vozel(3);

    Vozel *s2 = new Vozel(5);
    Vozel *s3 = new Vozel(4);

    s1->setNasl(s2);
    s2->setNasl(s3);
*/

    return 0;
}

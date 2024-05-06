#include <iostream>

using namespace std;

class Vozel{
    int podatek;
    Vozel * nasl;

public:
   Vozel(){
       this->nasl= NULL;
   }

   Vozel(int p){
       this->podatek = p;
       this->nasl = NULL;
   }

    virtual ~Vozel() {
       delete this->nasl;

    }

    int getPodatek() const {
        return podatek;
    }

    void setPodatek(int podatek) {
        Vozel::podatek = podatek;
    }

    Vozel * getNasl() const {
        return nasl;
    }

    void setNasl(Vozel *nasl) {
        Vozel::nasl = nasl;
    }

    void Izpis(){

       cout << "podatek je: " << this->podatek << endl;
   }


};

class Seznam{
    Vozel * voz;
public:
    Vozel *getVoz() const {
        return voz;
    }

public:
    Seznam(){}

    void setVoz(Vozel *voz) {
        Seznam::voz = voz;
    }

    void DodajVozel(int p){

        Vozel * v = new Vozel(p);

            v->setNasl(this->voz);
            this->voz = v;

    }

    void DodajKonec(Seznam * s,int p){
        Vozel * v = new Vozel(p);
        Vozel * temp;
        temp = s->getVoz();
        while (temp){
            if(temp->getNasl() == NULL){
                temp ->setNasl(v);

                return ;
            }
            temp= temp->getNasl();
        }


    }
    int vrniVelikostSeznama(Seznam *s){
        int i =0;
        Vozel *v;
        v = s->getVoz();
        while ( v!= NULL){
            i++;
            v =v->getNasl();
        }
        return i;

    }

    void brisiVozelZacetek(Seznam * s){
        Vozel * temp;
        temp = s->getVoz();
        if(temp == NULL) return;

        s->setVoz(temp->getNasl());
        temp = NULL;
        delete temp;



    }
    void brisiKonec(Seznam *s){
          Vozel *v,*t;

        v = s->getVoz();
        if(v == NULL){
            cout << "Seznam je prazen";
            return;
        }
        while(v){
            if(v->getNasl() == NULL){
                t->setNasl( v->getNasl());
                v =NULL;

                delete v;

                return;


            }
            t=v;
            v=v->getNasl();
        }
    }



    void vstaviVozel(Seznam *s, int m){
          Vozel *v,*t;

        v = s->getVoz();
        if(v == NULL){
            cout << "Seznam je prazen";
            return;
        }
        if (m < vrniVelikostSeznama(s)){
            int i=1;
            Vozel *nov = new Vozel(20);

            while(i<=m){
                if(i == m){
                    nov->setNasl(v);
                    t->setNasl(nov);
                }

                t=v;
                v= v->getNasl();
                i++;
            }

        }



    }

    void brisiVozelbyIndex(Seznam *s,int index) {
        Vozel *v, *t;

        v = s->getVoz();
        if (v == NULL) {
            cout << "Seznam je prazen";
            return;
        }
        if (index < vrniVelikostSeznama(s)) {
            int i = 1;
            while (i <= index) {
                if (i == index) {
                    t->setNasl(v->getNasl());
                    v = NULL;
                    delete v;
                    return;
                }

                t = v;
                v = v->getNasl();
                i++;
            }

        }
    }

    void izpisiVozel(Seznam * s) {
        Vozel *v;
        v = s->getVoz();
        while (v != NULL) {

            cout << v->getPodatek() << " ";

            v = v->getNasl();
        }
    }

};

int main() {

    Seznam * sez = new Seznam();

    Vozel * v;


    sez->DodajVozel(9);

     sez->DodajVozel(12);
      sez->DodajVozel(10);
      sez->DodajKonec(sez,13);
      cout << sez->vrniVelikostSeznama(sez) << endl;
      sez->vstaviVozel(sez,2);
      sez->izpisiVozel(sez);
      cout << "null" << endl;
      sez->brisiVozelbyIndex(sez,4);

      sez->izpisiVozel(sez);
      cout << "prvi" << endl;
      //sez->brisiVozelZacetek(sez);
      //sez->izpisiVozel(sez);
       //cout << "drugi" << endl;
     // sez->brisiKonec(sez);
      //sez->izpisiVozel(sez);
/*
    Vozel * s1 = new Vozel(3);

    Vozel * s2 = new Vozel(5);
    Vozel * s3 = new Vozel(4);
    s1->setNasl(s2);
    s2->setNasl(s3);








    std::cout << "Hello, World!" << std::endl;
    */
    return 0;
}

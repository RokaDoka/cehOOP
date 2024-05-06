#include <iostream>
using namespace std;

class Dijak{
private:
    string ime;
    string priimek;
    int starost;
    Dijak *nazaj;
    Dijak *naprej;
public:
    Dijak(string i,string p,int s){
        this->priimek=p;
        this->ime=i;
        this->starost=s;
        this->naprej= nullptr;
        this->nazaj= nullptr;
    }

    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        Dijak::ime = ime;
    }

    void setPriimek(const string &priimek) {
        Dijak::priimek = priimek;
    }

    void setStarost(int starost) {
        Dijak::starost = starost;
    }

    void setNazaj(Dijak *nazaj) {
        Dijak::nazaj = nazaj;
    }

    void setNaprej(Dijak *naprej) {
        Dijak::naprej = naprej;
    }

    const string &getPriimek() const {
        return priimek;
    }

    int getStarost() const {
        return starost;
    }

    Dijak *getNazaj() const {
        return nazaj;
    }

    Dijak *getNaprej() const {
        return naprej;
    }


};


    class seznamDijakov{
    private:
        Dijak *zacetek;
    public:
        seznamDijakov(){
            this->zacetek= nullptr;
        }
        void DodajZacetek(string ime,string priimek,int starost){
            Dijak *nov = new Dijak(ime,priimek,starost);
            if(this->zacetek == nullptr){
                this->zacetek = nov;
            }
            else{
                nov->setNaprej(this->zacetek);
                this->zacetek=nov;
            }

        }
        void DodajNakonec(string ime,string priimek,int starost){
            Dijak *nov = new Dijak(ime,priimek,starost);

            if(this->zacetek == nullptr){
                this->zacetek = nov;}
            else{
                Dijak *temp = this->zacetek;
                while (temp->getNaprej()!= nullptr){
                    temp = temp->getNaprej();
                }
                temp->setNaprej(nov);
                nov->setNazaj(temp);
            }
        }
        void  Brisizacetek(){
            if (this->zacetek == nullptr){
                cout<<"Seznam je prazen"<<endl;
                return;
            }
            else{
                Dijak *temp = this->zacetek;
                this->zacetek = temp->getNaprej();
                this->zacetek->setNazaj(nullptr);
                delete temp;
            }
        }
        void BrisiKonec(){
            if (this->zacetek == nullptr){
                cout<<"Seznam je prazen"<<endl;
                return;
            }
            else{
                Dijak *temp = this->zacetek;
                while(temp->getNaprej()== nullptr){
                    temp = temp->getNaprej();
                }
                temp->getNazaj()->setNaprej(nullptr);
            }
        }

        void print(){
            Dijak *temp = this->zacetek;
            while(temp != nullptr){
                cout<<temp->getIme()<<" "<<temp->getPriimek()<<" "<<temp->getStarost()<<endl;
                temp = temp->getNaprej();
            }
        }
        void brišiNaindex(int index){
            if (this->zacetek == nullptr){
                cout<<"Seznam je prazen"<<endl;
                return;
            }
            else{
                Dijak *temp = this->zacetek;
                for(int i=1;i<index;i++){
                    temp=temp->getNaprej();
                }
                temp->getNazaj()->setNaprej(temp->getNaprej());
                temp->getNaprej()->setNazaj(temp->getNazaj());
                delete temp;
            }
        }
    };
int main() {

    seznamDijakov * seznam = new seznamDijakov();
    seznam->DodajZacetek("toni","lepi",10);
    seznam->DodajZacetek("jan","kralj",20);
    seznam->DodajZacetek("miha","novak",30);
    seznam->DodajNakonec("marta","kos",40);
    seznam->DodajNakonec("zala","bezjak",50);

    seznam->print();
    cout<<"Brišem"<<endl;
    seznam->brišiNaindex(2);
    //seznam->BrisiKonec();
    //seznam->Brisizacetek();
    seznam->print();
    return 0;
}

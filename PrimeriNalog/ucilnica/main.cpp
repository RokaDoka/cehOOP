#include <iostream>
#include <vector>

using namespace std;
class komponeta{
    string id;
    string naziv;
    float cena;

public:
    komponeta() {
        this->id= to_string(rand() % 1000);
        this->naziv = NakljucnaImena();
        this->cena = 1.2 *(rand() % 200);


    }

    komponeta(const string &id, const string &naziv, float cena) :
            id(id), naziv(naziv), cena(cena) {}



            const string &getId() const {
        return id;
    }

    void setId(const string &id) {
        komponeta::id = id;
    }

    const string &getNaziv() const {
        return naziv;
    }

    void setNaziv(const string &naziv) {
        komponeta::naziv = naziv;
    }

    float getCena() const {
        return cena;
    }

    void setCena(float cena) {
        komponeta::cena = cena;
    }

    string NakljucnaImena(){
        string imena[5] = {"janko","metka","miha","lucka","fucka"};

        return imena[rand()%5];

    }


};

class Racunalnik {
    string naziv;
    string model;
    komponeta k[3];
    float cena;
    // vector <komponeta> vk;

public:
    Racunalnik() {}

    Racunalnik(const string &naziv, const string &model, float cena) {
        this->naziv = naziv;
        this->model = model;
        this->cena = cena;

    }

    Racunalnik VnesiRacunalnik(int st_komponet){
       for(int i=0;i<st_komponet;i++){
           komponeta lk;
           this->k[i]=lk;
       }
        komponeta k;



    }

    void IzpisRacunalnika(){



    }

    const string &getNaziv() const {
        return naziv;
    }

    void setNaziv(const string &naziv) {
        Racunalnik::naziv = naziv;
    }

    const string &getModel() const {
        return model;
    }

    void setModel(const string &model) {
        Racunalnik::model = model;
    }

    const komponeta *getK() const {
        return k;
    }

    void setCena(float cena) {
        this->cena = cena;
    }

    float getCena() const {
        return cena;
    }

};



int main() {
    std::cout << "Hello, World!" << std::endl;
    Racunalnik ucilnica[10];
    ucilnica[0].VnesiRacunalnik(3);
    ucilnica[0].IzpisRacunalnika();

    return 0;
}

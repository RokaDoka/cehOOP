#include <iostream>

using namespace std;

class oseba{
protected:
    string ime;
    int starost;

public:
    oseba(const string &ime, int starost) : ime(ime), starost(starost) {}

    oseba() {}


    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        oseba::ime = ime;
    }

    int getStarost() const {
        return starost;
    }

    void setStarost(int starost) {
        oseba::starost = starost;
    }
};

class student : public oseba {
    private:
        string id;
        string letnik;
public:

    student(){}

    student(const string &id, const string &letnik) : id(id), letnik(letnik) {}

    student(const string &ime, int starost) : oseba() {}

    student(const string &ime, int starost, const string &id, const string &letnik)
            : oseba(ime, starost), id(id),letnik(letnik) {}



    const string &getId() const {
        return id;
    }

    void setId(const string &id) {
        student::id = id;
    }

    const string &getLetnik() const {
        return letnik;
    }

    void setLetnik(const string &letnik) {
        student::letnik = letnik;
    }

};

class podimploski : public student{
    private:
        string predmet;
        int ocena;
    public:
    podimploski() {}

    void setPredmet(const char *string) {
        podimploski::predmet = string;

    }

    void setOcena(int i) {
        podimploski::ocena = i;

    }
};

int main() {
   oseba o;
   o.setIme("micka");
   o.setStarost(23);
   cout << o.getIme()<< "  " << o.getStarost() << endl;
//konstruktor 1
   student s;
   s.setId("123");
   s.setIme("joza");
   s.setStarost(23);
   s.setLetnik("3.B");
   //izpis studenta

   //konstruktor 2
    student s1("marko", 25);
    s1.setId("123");
    s1.setLetnik("3.B");
    //izpis

    student s2("12", "3.c");
    s2.setIme("marko");
    s2.setStarost(25);
    //izpis

    student s3("joze", 21, "11", "3.d");
    //izpis

    podimploski p;
    p.setIme("micka");
    p.setStarost(23);
    p.setId("123");
    p.setLetnik("3.B");
    p.setPredmet("matematika");
    p.setOcena(10);

    return 0;


}

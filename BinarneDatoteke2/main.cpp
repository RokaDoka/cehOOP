#include <iostream>
#include <fstream>
using namespace std;
class student{
public:
    student(const string &ime, int starost, const string &telefon) : ime(ime), starost(starost), telefon(telefon) {}
    student(){}
private:
    string ime;
public:
    void setIme(const string &ime) {
        student::ime = ime;
    }

private:
    int starost;
public:
    const string &getIme() const {
        return ime;
    }

private:
    string telefon;
};

int main() {
    student s={"Miha",16,"04051-234"};
    student ss[10] ={{"Lihi",19,"04051-234"},{"Miki",17,"04051-234"}};
    ofstream sfile;
    sfile.open("bdat.dat",ios::binary|ios::out);
    if (sfile.is_open()){
        sfile.write((char *)&s,sizeof(student));
        sfile.write((char *)&ss,sizeof (ss));
    }


    sfile.close();
    student a,rss[2];

    ifstream rsfile;

    rsfile.open("bdat.dat",ios::binary|ios::in);
    if(rsfile.is_open()){
        rsfile.read((char *)&a, sizeof(a));
        rsfile.read((char *)&rss, sizeof(rss));
        cout<<a.getIme()<<endl;
        cout<<rss[0].getIme()<<endl;
        cout<<rss[1].getIme()<<endl;
    }

    rsfile.close();


    return 0;
}

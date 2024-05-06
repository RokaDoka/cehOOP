#include <iostream>
#include <fstream>

using namespace std;
class Student{
    string ime;
    int starost;
    string telefon;

public:
    Student(const string &ime, int starost, const string &telefon) : ime(ime), starost(starost), telefon(telefon) {}

    explicit Student(const string &ime);

    Student() {

    }

    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        Student::ime = ime;
    }

};




int main() {

    streampos poz;
    Student a;
    Student * rss = new Student[2];
    Student oss[3];
    Student s={"Miha",16,"04051-234"};
    Student  ss[2]= {{"Lihi",19,"04051-234"},{"Miki",17,"04051-234"}};

      ofstream sfile;
      sfile.open("bdat.dat",ios::binary | ios::out  );
      if (sfile.is_open()){

          sfile.write((char *)(&ss),2*sizeof (Student));

      }
      sfile.close();

      ifstream rsfile;
      rsfile.open("bdat.dat",ios::in | ios::binary);
     // rsfile.seekg(0,ios::beg);
     poz=rsfile.tellg();
     cout << poz <<endl;
      //rsfile.seekg(0,ios::end);
    poz=rsfile.tellg();
    cout << poz <<endl;
    rsfile.seekg(-sizeof(Student),ios::end);
      if (rsfile.is_open()){


          rsfile.read((char *)rss, sizeof (oss));

          cout << rss->getIme();

          rss++;
          cout << rss->getIme();

      }

rsfile.close();



 /*   int p = 100;
    int rp;
    int pp[5]={2,4,5,7,9};
    int rpp[5];
    cout << sizeof(pp) << endl;
    ofstream file;
    file.open("bdat.bin",ios::binary | ios::out );

    if (file.is_open()){

        file.write((char *)(&p), sizeof(int));
        file.write((char *)&pp, sizeof (pp));
        file.close();

    }

    ifstream rfile;
    rfile.open("bdat.bin",ios::binary | ios::in);
    if(rfile.is_open()){

        rfile.read((char *)&rp,sizeof (int));
        cout << rp << endl;
         rfile.read((char *)&rpp,sizeof (rpp));
        cout << rpp[3] << endl;
    }

rfile.close();

*/
    return 0;
}

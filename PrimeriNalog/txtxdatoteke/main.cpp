#include <iostream>
#include <fstream>


using namespace std;

int main() {
    ofstream dat;
    dat.open("test.txt",ios::out|ios::app );

    dat << "lep dan je danes" << endl;

/*
    ifstream rdat;
    rdat.open("test.txt",ios::in  );
    if (rdat.is_open()){
        char c;
        char p[80];

        while(! rdat.eof()){
            //c=rdat.get();
            rdat.getline(p,80);
            cout << p; cout << endl;

        }
        rdat.close();
        dat.close();

    }
    */
    ifstream  f;
    f.open("moja.txt", ios::in);
     if (f.is_open()){
         char p[80][200];
         int i=0;
          while(! f.eof()){
              f.getline(p[i],80);
              //obdelujemo

              dat << p[i++];

          }

     }
dat.close();
     f.close();


    return 0;
}

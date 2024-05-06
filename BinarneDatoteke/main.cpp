#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int p = 100;
    int rp;
    int pp[5]={2,4,5,7,9};
    int rpp[5];
    cout<<sizeof(pp)<<endl;
    ofstream file;
    file.open("bdat.bin",ios::binary|ios::out);

    if (file.is_open()){
        file.write((char *)&p,sizeof(int));
        file.write((char *)&pp, sizeof(pp));
        file.close();
    }

    ifstream rfile;
    rfile.open("bdat.bin",ios::binary|ios::in);
    if(rfile.is_open()){
        rfile.read((char *)&rp,sizeof(int ));
        cout<<rp<<endl;
        rfile.read((char *)&rpp, size(rpp));
        cout<<rpp[3]<<endl;
    }
    rfile.close();
    return 0;
}

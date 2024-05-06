#include "h/Oddelek.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    vector <Oddelek> sola;
    Oddelek odd;
    int st_dijakov = 10;
    odd.vnosDijakovOddelek(st_dijakov);
    for (int i=0;i<st_dijakov;i++){
        cout << i +1 << ". ---Dijak---\n";
        odd.izpisdijakovOddelek(odd.getDijaki());
    }
    return 0;
}

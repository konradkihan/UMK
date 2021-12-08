#include<iostream>
using namespace std;


struct student{
        string naziwsko;
        int wiek;
        double sr_ocen;
};


int main(){

    // inicjalizacja studenta ze wszystkimi danymi
    student x = {"Kowalksi", 20, 3.3};

    // odwołania do pól struktury
    student y;
    y.naziwsko = "Nowak";
    y.wiek = 19;
    y.sr_ocen = 4.1;


}
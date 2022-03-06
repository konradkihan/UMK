#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int ile_razy(string nazwa){
    fstream plik;
    plik.open(nazwa, ios::in);

    string str;
    int ctr=0;
    while(getline(plik, str)){
        for(int i=0; i<str.size(); i++){
            if(str[i]=='a' && str[i+1]=='b') ctr++;
        }
    }
    return ctr;
}

int main(){
    cout<<hex<<ile_razy("plik.txt");
}
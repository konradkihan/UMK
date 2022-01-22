/* ZADANIE 4 
Napisać program tworzący skorowidz, czyli listę wszystkich słów występujących
w pliku tekstowym i dla każdego słowa listę numerów wierszy, w których to słowo wystąpiło.

Konrad Kihan 2022
*/

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;


bool is_duplicate(string word, string tab[], string tab_lines[], int tab_size, int line_number){
    /* sprawdza duplikaty i jeśli istnieją dopisuje ich lokalizację w liście line_number */
    bool is_dupe = false;

    for(int i = 0; i < tab_size; i++){
        if(tab[i] == word){
            tab_lines[i] += to_string(line_number); // jeśli duplikat - dodaj numer jego linii
            is_dupe = true;
            break;
        }
    }
    
    return is_dupe;    
}


void make_data(string name, int tab_size, string words[], string words_lines[] ){
    /* funkcja czyta plik z danymi wejścowymi a następnie do listy words dodaje
    słowa które napotka, jeśli nie są duplikatami, natomiast w tablicy words_lines
    znajduje się napis łączący numery wszystkich linii w których znajduje się słowo */
    fstream file;
    file.open(name, ios::in);
    if(!file.good()) cout << "Nie mozna otworzyc pliku" << endl;
    
    else{
        string str, line;
        int id = 0;
        int line_number = 1;

        while(getline(file, line)){
            stringstream ss(line);
            while(getline(ss, str, ' ')){
                str[0] = tolower(str[0]); // konwersja słów na małe litery
                if(str[str.size()-1] == '.' || str[str.size()-1] == ',') str.pop_back(); // usuwanie kropek i przecinków z końców wyrazów
                if(!is_duplicate(str, words, words_lines, id, line_number)){ // sprawdzenie czy duplikat
                    words_lines[id] += to_string(line_number); // dopisanie linii wystąpienia 
                    words[id] = str; // dopisaenie do listy słów
                    id++;
                }
            }
            line_number++;
        }
        file.close();
    }
}


void sort_words(int tab_size, string words[], string words_lines[]){
    /* funkcja sortuje listę słów alfabetycznie */
    for(int i = 0; i < tab_size-1; i++){
        for(int j = 0; j < tab_size-1; j++){
            if(words[j] > words[j+1] && words[j+1] != ""){
                swap(words[j], words[j+1]);
                swap(words_lines[j], words_lines[j+1]);
            }
        }
    }
}


void console_presentation(int tab_size, string words[], string words_lines[]){
    /* funkcja prezentuje wynik działania programu do konsoli */
    sort_words(tab_size, words, words_lines);
    for(int i = 0; i<tab_size; i++){
        if(words[i]=="") break; 
        cout << i+1 <<".\t"<< words[i] << " || Wystapienia: ";
        for(int j=0; j<words_lines[i].size(); j++){
            cout << words_lines[i][j];
            if(j+1 != words_lines[i].size()) cout << ", ";
        }
        cout << endl;
    }
}


void save_to_file(string name, int tab_size, string words[], string words_lines[]){
    /* funkcja zapisuje wynik działania programu do pliku wskazanego przez użytkownika */
    fstream file;
    file.open(name, ios::out);
    if(!file.good()) cout<<"Nie mozna otworzyc pliku" << endl;
    else{
        for(int i = 0; i<tab_size; i++){
            if(words[i]=="") break; 
            file << i+1 <<".\t"<< words[i] << " || Wystapienia: ";
            for(int j=0; j<words_lines[i].size(); j++){
                file << words_lines[i][j];
                if(j+1 != words_lines[i].size()) file << ", ";
            }
            file << endl;
        }
        file.close();
    }
}


int main(){
    const int TAB_SIZE = 1000;
    string words[TAB_SIZE];
    string words_lines[TAB_SIZE];

    cout << "Program do generowania skorowidzow." << endl << endl;

    while(true){
        string in_file, out_file, yes_no;
        // wybranie lokalizacji pliku wejściowego
        cout << "Wpisz lokalizacje / nazwe pliku, ktorego skorowidz ma byc utworzony:" << endl << ">>> ";
        cin >> in_file;

        // wybranie czy wynik ma zostać zapisany do osobnego pliku tekstowego
        cout << "Czy wynik dzialania programu ma byc zapisany do pliku? Wpisz 'tak' lub 'nie', 'q' aby wyjsc." << endl << ">>> ";
        cin >> yes_no;
        
        if(yes_no == "q") break;
        
        if(yes_no == "tak"){
            // wybór pliku tekstowego do zapisu
            cout << "Jak ma nazywac sie plik do ktorego zapisany jest skorowidz?" << endl << ">>> ";
            cin >> out_file;

            // wykonanie programu
            make_data(in_file, TAB_SIZE, words, words_lines);
            sort_words(TAB_SIZE, words, words_lines);
            save_to_file(out_file, TAB_SIZE, words, words_lines);
        }
        else if(yes_no == "nie"){
            // alternatywne wykonanie programu
            make_data(in_file, TAB_SIZE, words, words_lines);
            sort_words(TAB_SIZE, words, words_lines);
            console_presentation(TAB_SIZE, words, words_lines);
        }
        else{
            // gdy dane zostaną źle wprowadzone
            cout << "Niepoprawne dane.";
        }

        // gdy skrypt wykona się poprawnie
        cout << "Wykonano!" << endl;
        
    }
    cout << "Konczenie dzialania.";
}

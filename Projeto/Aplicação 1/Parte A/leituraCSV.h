#ifndef LEITURACSV_H_
#define LEITURACSV_H_

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void leituraCSV() {
    int count;
    string nameFile = "NutritionalFacts_Fruit_Vegetables_Seafood.csv";
    ifstream csvFile(nameFile);
    
    if(csvFile.is_open()) {
        while(!csvFile.eof()) {
            string temp;
            getline(csvFile, temp);
            count = 1;
        }
    }
    else {
        getline(csvFile, )
    }


}

#endif
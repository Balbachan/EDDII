#ifndef LEITURACSV_H_
#define LEITURACSV_H_

#include <iostream>
#include <string>
#include <fstream>
#include "Alimentos.h"

using namespace std;

void leituraCSV() {
    int count;
    string calories, caloriesFromFat, totalFatG, totalfatDV, sodiumG, sodiumDV, potassiumG, potassiumDV; 
    string totalCarbG, totalCarbDV, dietaryFiberG, dietaryFiberDV, sugars, protein, vitaminA, vitaminC; 
    string calcium, iron, saturatedFatDV, saturatedFatMG, cholesterolDV, cholesterolMG, foodType;
    
    string nameFile = "NutritionalFacts_Fruit_Vegetables_Seafood.csv";
    ifstream csvFile;

    csvFile.open(nameFile);

    if(csvFile.is_open()) {
        while(!csvFile.eof()) {
            string temp;
            getline(csvFile, temp);
            count = 1;
        }
    }
    else {
        getline(csvFile, calories, ',');
        getline(csvFile, caloriesFromFat, ',');
        getline(csvFile, totalFatG, ',');
        getline(csvFile, totalfatDV, ',');
        getline(csvFile, sodiumG, ',');
        getline(csvFile, sodiumDV, ',');
        getline(csvFile, potassiumG, ',');
        getline(csvFile, potassiumDV, ',');
        getline(csvFile, totalCarbG, ',');
        getline(csvFile, totalCarbDV, ',');
        getline(csvFile, dietaryFiberG, ',');
        getline(csvFile, dietaryFiberDV, ',');
        getline(csvFile, sugars, ',');
        getline(csvFile, protein, ',');
        getline(csvFile, vitaminA, ',');
        getline(csvFile, vitaminC, ',');
        getline(csvFile, calcium, ',');
        getline(csvFile, iron, ',');
        getline(csvFile, saturatedFatDV, ',');
        getline(csvFile, saturatedFatMG, ',');
        getline(csvFile, cholesterolDV, ',');
        getline(csvFile, foodType, ',');

        // adicionar na árvore 
        
    }

    csvFile.close();
}

#endif
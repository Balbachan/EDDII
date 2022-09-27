/*
    Faculdade de Computação e Informática
    Estrutura de Dados II
    Professor: Jean M. Laine
    Aplicação 1 (Parte A e B)
    Aplicação que ajuda a controlar as calorias e a perda de peso
    Alunos:
        - Diego Guedes de Moraes (32148127)
        - Erick Cauã Ferreira Gomes (32116251)
        - Laura C. Balbachan dos Santos (32173008)
        - Pedro Moreno Campos (32172656)
*/

#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_

#include <iostream>
#include <string>
using namespace std;


 class Alimentos
   {
   private:
      string key;
      int calories, caloriesFromFat, totalFatG, totalFatDV, sodiumG, sodiumDV, potassiumG, potassiumDV; 
      int totalCarbG, totalCarbDV, dietaryFiberG, dietaryFiberDV, sugars, protein, vitaminA, vitaminC; 
      int calcium, iron, saturatedFatDV, saturatedFatMG, cholesterolDV, cholesterolMG, foodType;
      int * left;
      int * right;


   public:
      // construtor 
      Alimentos(string key){
         this->calories = calories;
         this->caloriesFromFat = caloriesFromFat;
         this->totalFatG = totalFatG;
         this->totalFatDV = totalFatDV;
         this->sodiumG = sodiumG;
         this->sodiumDV = sodiumDV;
         this->potassiumG = potassiumG;
         this->potassiumDV = potassiumDV;
         this->totalCarbG = totalCarbG;
         this->totalCarbDV = totalCarbDV;
         this->dietaryFiberG = dietaryFiberG;
         this->dietaryFiberDV = dietaryFiberDV;
         this->sugars = sugars;
         this->protein = protein;
         this->vitaminA = vitaminA;
         this->vitaminC = vitaminC;
         this->calcium = calcium;
         this->iron = iron;
         this->saturatedFatDV = saturatedFatDV;
         this->saturatedFatMG = saturatedFatMG;
         this->cholesterolDV = cholesterolDV;
         this->cholesterolMG = cholesterolMG;
         this->foodType = foodType;
      } 

      //getters e setters atributos  
      string getKey() {return this->key;};
      void setKey(string key){this->key = key;};

      int getCalories() {return this->calories;};
      void setCalories(int calories){this->calories = calories;};

      int getCaloriesFromFat() {return this->caloriesFromFat;};
      void setCaloriesFromFat(int caloriesFromFat){this->caloriesFromFat = caloriesFromFat;};

      int getTotalFatg() {return this->totalFatG;};
      void setTotalFatG(int totalFatG){this->totalFatG = totalFatG;}

      int getTotalFatDV() {return this->totalFatDV;};
      void setTotalFatDV(int totalFatDV){this->totalFatDV = totalFatDV;}

      int getSodiumG() {return this->sodiumG;};
      void setSodiumG(int sodiumG){this->sodiumG = sodiumG;}

      int getSodiumDV() {return this->sodiumDV;};
      void setSodiumDV(int sodiumDV){this->sodiumDV = sodiumDV;}

      int getPotassiumG() {return this->potassiumG;};
      void setPotassiumG(int potassiumG){this->potassiumG = potassiumG;}

      int getPotassiumDV() {return this->potassiumDV;};
      void setPotassiumDV(int potassiumDV){this->potassiumDV = potassiumDV;}

      int getTotalCarbG() {return this->totalCarbG;};
      void setTotalCarbG(int totalCarbG){this->totalCarbG = totalCarbG;}

      int getTotalCarbDV() {return this->totalCarbDV;};
      void setTotalCarbDV(int totalCarbDV){this->totalCarbDV = totalCarbDV;}

      int getDietaryFiberG() {return this->dietaryFiberG;};
      void setDietaryFiberG(int dietaryFiberG){this->dietaryFiberG = dietaryFiberG;}

      int getDietaryFiberDV() {return this->dietaryFiberDV;};
      void setDietaryFiberDV(int dietaryFiberDV){this->dietaryFiberDV = dietaryFiberDV;}

      int getSugars() {return this->sugars;};
      void setSugars(int sugars){this->sugars = sugars;}

      int getProtein() {return this->protein;};
      void setProtein(int protein){this->protein = protein;}

      int getVitaminA() {return this->vitaminA;};
      void setVitaminA(int vitaminA){this->vitaminA = vitaminA;}

      int getVitaminC() {return this->vitaminC;};
      void setVitaminC(int vitaminC){this->vitaminC = vitaminC;}

      int getCalcium() {return this->calcium;};
      void setCalcium(int calcium){this->calcium = calcium;}

      int getIron() {return this->iron;};
      void setIron(int iron){this->iron = iron;}

      int getSaturatedDV() {return this->saturatedFatDV;};
      void setSaturatedDV(int saturatedFatDV){this->saturatedFatDV = saturatedFatDV;}

      int getSaturatedMG() {return this->saturatedFatMG;};
      void setSaturatedMG(int saturatedFatMG){this->saturatedFatMG = saturatedFatMG;}

      int getCholesterDV() {return this->cholesterolDV;};
      void setCholesterDV(int cholesterolDV){this->cholesterolDV = cholesterolDV;}

      int getCholesterMG() {return this->cholesterolMG;};
      void setCholesterMG(int cholesterolMG){this->cholesterolMG = cholesterolMG;}

      int getFoodType() {return this->foodType;};
      void setFoodType(int foodType){this->foodType = foodType;}


      //getters e setters posição   
      int * getLeft(){return this->left;}
      void setLeft(int * left){this->left = left;}
      
      int * getRight(){return this->right;}
      void setRight(int * right){this->right = right;}
   };

#endif
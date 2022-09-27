#ifndef Alimentos.h
#define Alimentos.h

#include <iostream>
#include <string>

using namespace std;

class Alimentos
   {

   //TO-DO: CRIAR ATRIBUTO CONSTRUTOR

   private:

      int option;

      string calories, caloriesFromFat, totalFatG, totalfatDV, sodiumG, sodiumDV, potassiumG, potassiumDV, totalCarbG, totalCarbDV, dietaryFiberG, dietaryFiberDV, sugars, protein, vitaminA, vitaminC, calcium, iron, saturatedDV, saturatedMG, cholesterDV, cholesterMG, foodType;

      string getCalories() {return this->calories;};
      void setCalories(string calories){this->calories = calories;};

      string getCaloriesFromFat() {return this->caloriesFromFat;};
      void setCaloriesFromFat(string caloriesFromFat){this->caloriesFromFat = caloriesFromFat;};

      string getTotalFatg() {return this->totalFatG;};
      void setTotalFatG(string totalFatG){this->totalFatG = totalFatG;}

      string getTotalFatDV() {return this->totalFatDV;};
      void setTotalFatDV(string totalFatDV){this->totalFatDV = totalFatDV;}

      string getSodiumG() {return this->sodiumG;};
      void setSodiumG(string sodiumG){this->sodiumG = sodiumG;}

      string getSodiumDV() {return this->sodiumDV;};
      void setSodiumDV(string sodiumDV){this->sodiumDV = sodiumDV;}

      string getPotassiumG() {return this->potassiumG;};
      void setPotassiumG(string potassiumG){this->potassiumG = potassiumG;}

      string getPotassiumDV() {return this->potassiumDV;};
      void setPotassiumDV(string potassiumDV){this->potassiumDV = potassiumDV;}

      string getTotalCarbG() {return this->totalCarbG;};
      void setTotalCarbG(string totalCarbG){this->totalCarbG = totalCarbG;}

      string getTotalCarbDV() {return this->totalCarbDV;};
      void setTotalCarbDV(string totalCarbDV){this->totalCarbDV = totalCarbDV;}

      string getDietaryFiberG() {return this->dietaryFiberG;};
      void setDietaryFiberG(string dietaryFiberG){this->dietaryFiberG = dietaryFiberG;}

      string getDietaryFiberDV() {return this->dietaryFiberDV;};
      void setDietaryFiberDV(string dietaryFiberDV){this->dietaryFiberDV = dietaryFiberDV;}

      string getSugars() {return this->sugars;};
      void setSugars(string sugars){this->sugars = sugars;}

      string getProtein() {return this->protein;};
      void setProtein(string protein){this->protein = protein;}

      string getVitaminA() {return this->vitaminA;};
      void setVitaminA(string vitaminA){this->vitaminA = vitaminA;}

      string getVitaminC() {return this->vitaminC;};
      void setVitaminC(string vitaminC){this->vitaminC = vitaminC;}

      string getCalcium() {return this->calcium;};
      void setCalcium(string calcium){this->calcium = calcium;}

      string getIron() {return this->iron;};
      void setIron(string iron){this->iron = iron;}

      string getSaturatedDV() {return this->saturatedDV;};
      void setSaturatedDV(string saturatedDV){this->saturatedDV = saturatedDV;}

      string getSaturatedMG() {return this->saturatedMG;};
      void setSaturatedMG(string saturatedMG){this->saturatedMG = saturatedMG;}

      string getCholesterDV() {return this->cholesterDV;};
      void setCholesterDV(string cholesterDV){this->cholesterDV = cholesterDV;}

      string getCholesterMG() {return this->cholesterMG;};
      void setCholesterMG(string cholesterMG){this->cholesterMG = cholesterMG;}

      string getFoodType() {return this->foodType;};
      void setFoodType(string foodType){this->foodType = foodType;}

   };
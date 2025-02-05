#include "StarterCode.hpp"

/* Exercise 3A
 * Override the method appraise in Painting by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If it is not a replica and its artist fame score is greater than 8,
 *    the price will be raised by 66%.
 * 2. If it is not a replica and its artist fame score is between 5 and 8 (inclusive),
 *    the price will be raised by 37%.
 * 3. If it is not a replica and its artist fame score is lower than 5,
 *    the price will be raised by 15%.
 * 4. If it is a replica the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 * */
int Painting::appraise() {
    int price = Art::appraise();
     if(!this->replica){
        if(this->artist.getFameScore() > 8) return price * 1.66;
        else if(this->artist.getFameScore() <= 8 && 5 <= this->artist.getFameScore()) return price * 1.37;
        else return price + price * 0.15;
     }
     else return 1500;
}

/* Exercise 3B
 * Override the method appraise in Sculpture by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If its material is MARBLE and its artist fame score is greater or equal than 5,
 *    the price will be raised by 69%.
 * 2. If its material is METAL and its artist fame score is greater than 5,
 *    the price will be raised by 45%.
 * 3. If its material is NOT PLASTIC and its fame score is greater than 3,
 *    the price will be raised by 12%.
 * 4. Else the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 */
int Sculpture::appraise() {
    int price = Art::appraise();
     if(this->material == MARBLE && this->artist.getFameScore() >= 5) return price * 1.69;
     else if(this->material == METAL && this->artist.getFameScore() > 5) return price * 1.45;
     else if(this->material != PLASTIC && this->artist.getFameScore() > 3) return price * 1.12;
     else return 1500;
}
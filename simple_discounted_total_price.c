//
// Created by masad on 6/13/2023.
//

#include <stdio.h>

float calculateDiscount(float price, float discountRateInPercentage){
  return price * discountRateInPercentage / 100;
}

void printDiscount(float discount){
  printf("Discount: %-10.2f\n", discount);
}

int main(){
  
  float totalPrice = 0;
  
  printf("How much is the pre-discounted total price? ");
  scanf("%f", &totalPrice);
  
  fflush(stdin);
  
  if (totalPrice > 200000 && totalPrice <= 250000){
    printDiscount(calculateDiscount(totalPrice, 5));
  }
  else if (totalPrice > 250000 && totalPrice <= 300000){
    printDiscount(calculateDiscount(totalPrice, 10));
  }
  else if (totalPrice > 300000 && totalPrice <= 350000){
    printDiscount(calculateDiscount(totalPrice, 15));
  }
  else {
    printf("No discount!\n");
  }
  
  getchar();
  
  return 0;
}

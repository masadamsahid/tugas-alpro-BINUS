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

float calculateTotalItemPrices(const float *arrPriceItems, int length){
  
  float totalPrice = 0;
  
  for (int i = 0; i < length; i++) {
    totalPrice += arrPriceItems[i];
  }
  
  return totalPrice;
}

int main(){
  
  int n;
  
  printf("How many items? (1 to 10K items): ");
  scanf("%d", &n);
  fflush(stdin);
  
  if (n < 1 || n > 10000){
    printf("Invalid number of items!\n");
  } else {
    
    float arrItemPrice[n];
    
    for (int i = 0; i < n; i++) {
      printf("Price of item #%5d: ", i+1);
      scanf("%f", &arrItemPrice[i]);
      fflush(stdin);
    }
    
    printf("\n");
    
    printf("%10s | %14s\n", "Item #", "Price");
    printf("%10s-+-%16s\n", "---------", "----------------");
    for (int i = 0; i < n; i++) {
      printf("%10d | %14.2f\n", i+1, arrItemPrice[i]);
    }
    
    printf("%10s-+-%16s\n", "---------", "----------------");
    float totalPrice = calculateTotalItemPrices(arrItemPrice, n);
    
    printf("%10s | %14.2f\n", "Total", totalPrice);
    
    float discount = 0;
    
    if (totalPrice > 200000) {
      
      if (totalPrice > 200000 && totalPrice <= 250000){
        discount = calculateDiscount(totalPrice, 5);
      }
      else if (totalPrice > 250000 && totalPrice <= 300000){
        discount = calculateDiscount(totalPrice, 10);
      }
      else if (totalPrice > 300000 && totalPrice <= 350000){
        discount = calculateDiscount(totalPrice, 15);
      }
      else {
        discount = 0;
      }
      
    }
    
    printf("%10s | %14.2f\n", "Discount", discount);
    printf("%10s-+-%16s\n", "---------", "----------------");
    printf("%10s | %14.2f\n\n", "Bill", totalPrice - discount);
    
  }
  
  printf("Press any key to exit!");
  getchar();
  
  return 0;
}

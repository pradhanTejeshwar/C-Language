#include <stdio.h>

int find_maximum(int[], int);
int find_minimum(int[], int);

int main() {
    /*
    //If the user is already having a list of predictions, they can use this code
    int predictions[7] = {100,108,260,310,40,535,695};
    */
    int max_location, min_location, maximum, minimum;
    int c, stock_prices[100], size;
 
    printf("Input number of predictions on Stock Prices\n");
    scanf("%d", &size);
 
    printf("Enter %d predicetd prices of the Stock\n", size);
 
    for (c = 0; c < size; c++)
        scanf("%d", &stock_prices[c]);
    
    max_location = find_maximum(stock_prices, size);
    maximum = stock_prices[max_location];
    min_location = find_minimum(stock_prices, size);
    minimum = stock_prices[min_location];
    printf("Buy on - %d sell on - %d Profit = %d",min_location+1, max_location+1, (maximum-minimum));
    
    /*
    //If the user is already having a list of predictions, they can use this code
    max_location = find_maximum(predictions, 7);
    maximum = predictions[max_location];
    min_location = find_minimum(predictions, 7);
    minimum = predictions[min_location];
    printf("Buy on - %d sell on - %d Profit = %d",min_location+1, max_location+1, (maximum-minimum));
    */
    return 0;
}

int find_maximum(int a[], int n) {
  int c, max, index;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return index;
}

int find_minimum(int a[], int n) {
  int c, min, index;
 
  min = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }
 
  return index;
}
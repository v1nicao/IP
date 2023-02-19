#include <stdio.h>
 
void countingSort(int *array, int tamanho) {
  int output[tamanho], i;
  int max = array[0];
 
  for (i = 1; i < tamanho; i++) {
    if (array[i] > max) max = array[i];
  }
 
  int count[max];
 
  for (i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  
  for (i = 0; i < tamanho; i++) {
    count[array[i]]++;
  }
 
  for (i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  
  for (i = tamanho - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
 
  for (i = 0; i < tamanho; i++) {
    array[i] = output[i];
  }
}
 
void print(int *array, int tamanho_array) {
  int i;
 
  for (i = 0; i < tamanho_array; i++) {
    printf("%d ", array[i]);
  }
 printf("\n");
}
 
int main() {
 
  int num = 0, i;
 
  scanf("%d", &num);
  
  while(num != 0) {
      int array[num];
    
      for(i = 0; i < num; i++) {
        scanf("%d", &array[i]);
      }
      
      countingSort(array, num);
      print(array, num);
    
      scanf("%d", &num);
  }
  return 0;
  
}
  
  
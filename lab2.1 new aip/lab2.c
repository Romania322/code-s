/*
  Ованесян Даниил Арменович КТБО 1-8
  Лабораторная №2 вариант 4
  Найти сумму всех положительных элементов массива
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <conio.h> 

#define ARRAY_SIZE 100

int functionEnterArray(void); 

int main() 
{ 
  int sum = 0, size, chekSize; 
  printf("Enter nomber of the size:"); 
  chekSize = functionEnterArray(); 
  int array[ARRAY_SIZE]; 

  for (int i = 0; i < chekSize; i++) { 
    printf("Enter element:"); 
    array[i] = functionEnterArray(); 
  } 
  for (int i = 0; i < chekSize; i++) 
  { 
    if (array[i] > 0) {
      sum += array[i]; 
    }
  } 

  printf("%d", sum); 
  _getch(); 
  return 0; 
} 

int functionEnterArray(void) { 
  int number; 
  scanf("%d", &number); 
  
  if (getchar() != '\n') { 
    printf("Error number. Try again:"); 
    while (getchar() != '\n'); 
    number = functionEnterArray(); 
  } 
  
  return number; 
}

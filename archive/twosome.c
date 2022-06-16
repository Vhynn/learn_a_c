#include <stdio.h>

int* sum(int* arr, int length, int goal, int* equ);

int main()
{
  int* x;
  int array[5] = {1,2,3,4,5};

  int equ[2] = {-1,-1};

  x = sum(array, 5, 3, equ);
  printf("%d %d\n", x[0], x[1]);
  //sum should be 8!
}

int* sum(int* arr, int length, int goal, int* equ) {
  int a, b, c, i;
  a = b = c = 0;
  for (i = 1; i + 1 <= length; ++i) {
    b = arr[i-1];
    c = arr[i];
    a = b + c;
    equ[0] = i-1;
    equ[1] = i;
    if (a == goal)
    {
      return equ;
    }
  }
}
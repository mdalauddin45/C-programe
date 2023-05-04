// Pass by Value:
// In this method, the value of each of the actual arguments in the calling function is copied into corresponding formal arguments of the called function. In pass-by-value, the changes made to formal arguments in the called function have no effect on the values of actual arguments in the calling function.
// Example:
// #include<stdio.h>
// void swap(int x, int y) {
//  int t;
//  t = x;
//  x = y;
//  y = t;
// } 
// int main() {
//  int m = 10, n = 20;
//  printf("Before executing swap m=%d n=%d\n", m, n);
//  swap(m, n);
//  printf("After executing swap m=%d n=%d\n", m, n); 
//  return 0;
// }

// Pass by Reference:
// In this method, the addresses of actual arguments in the calling function are copied into formal arguments of the called function. This means that by using these addresses, we would have access to the actual arguments and hence we would be able to manipulate them. C does not support call by reference. But it can be simulated using pointers.
// Example:
// #include<stdio.h>
// void swap(int *x, int *y) {
//  int t;
//  t = *x; 
//  *x = *y; 
//  *y = t; 
// } 
// int main() {
//  int m = 10, n = 20;
//  printf("Before executing swap m = %d n = %d\n", m, n);
//  swap(&m, &n);
//  printf("After executing swap m = %d n = %d\n", m, n);
//  return 0;
// }
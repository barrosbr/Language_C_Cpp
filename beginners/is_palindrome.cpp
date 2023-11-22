/*

The program uses a recursive function to inform whether an array is a palindrome.
The program will return 1 if the array is a palindrome and 0 otherwise.

*/

#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int a[], int n){
    if (n <= 1) return 1;
   else {
      if (a[0] != a[n-1]) return 0;
      return is_palindrome( a + 1, n - 2); // a + 1 advances the pointer to the next element in the array a
   }
}

int main (){

    int is_palind, len;
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    
    len = sizeof(arr)/sizeof(arr[0]);
    is_palind = is_palindrome(arr, len);
    printf("%d\n", is_palind);
}
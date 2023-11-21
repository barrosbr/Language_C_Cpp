/*
Given an arr[] matrix, the program calculates the sum of two elements 
of that matrix whose value is closest to the target. The arr[] array 
is added to the noise array noise[], the result is stored in the result[] array.

*/
#include <stdio.h>
#include <stdlib.h>

#define N 8

static int target = 54;
static int noise[] = {1, -2, 3, -1, 2, -2, 0, 0};
static int arr[] = {10, 23, 24, 23, 30, 40, -999, -999};
static int result[] = {0, 0};
static int arr_noise[N];

void find_closest_to_target( int arr[], int n, int target, int result[], int noise[]){

    int i, j, n1=0, n2=0, difer=999;

    for(i=0; i < n; i++)
        arr_noise[i] = arr[i] + noise[i];

    for(i=0; i < n; i++)
        for(j=0; j < n; j++)
            if(i != j)
                if(abs((arr_noise[i] + arr_noise[j]) - target) < difer){
                    difer = abs((arr_noise[i] + arr_noise[j]) - target);
                    n1 = arr_noise[i];
                    n2 = arr_noise[j];
                }
    result[0] = n1;
    result[1] = n2;

}

int main(){
    
    int i;

    find_closest_to_target(arr, N, target, result, noise);
    
    for(i=0; i<2; i++)
        printf("%d ", result[i]);
    printf("\n");

}
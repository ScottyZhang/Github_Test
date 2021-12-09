#include <stdio.h>
#include "find_max.h"


int main(){

    int arr[5] = {1,8,7,6,3};
    int max = find_max(arr,5);
    printf("%d\n",max);

    return 0;
}
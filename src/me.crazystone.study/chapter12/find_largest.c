#include <stdio.h>
# define N 10

int find_largest(int a[],int n) {
    int i,max;
    max = a[0];
    for (i = 1; i < n ; i++) {
        printf("current number is %d\n",a[i]);
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int a[5] = {1,2,3,4,5};
    find_largest(a,7);
}


# include <stdio.h>
#define N 10

int main() {
    int a[N], sum, *p;
    sum = 0;
    for(int i = 0 ; i < N ;i++) {
        a[i] = i + 1;
    }
    for (p = a; p < a + N; p++) {
        sum += *p;
    }
    printf("sum is: %d \n" , sum);
}

void printArray(int* array) {
        int index = 1;
        int *p;
        for( p = array; p < &array[N]; p++) {
            int num = *p;
            ++index;
            printf("current number[%d] is %d",index,num);
        }
}


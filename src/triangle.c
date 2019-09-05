#include <stdio.h>

int main()
{
    int n = 0;
    printf("输入想要打印的倒三角的层数，按回车键确定\n");
    scanf("%d",&n);
    
    if(n <= 0) {
        printf("输入的数字必须大于0\n");
        return -1;
    }
    for(int i = n ; i > 0 ; i-- ) {
        if(i == 1) {
            int m = ( 2 * n - 1) >> 1;
            // printf("center number: %d" , m);
            for (int j = 0 ; j < m ; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        } else {
            int left = (n - i);
            int right = ( 2 * n - 1) - left - 1;
            for(int j = 0; j < ( 2 * n - 1); j++) {
                if(j == left || (j == right && right > left)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}


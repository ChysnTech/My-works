#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp;
    

    printf("请输入5个整数：\n");
    for (i = 0; i < 5; i++) {
        printf("第%d个：", i + 1);
        scanf("%d", &arr[i]);
    }
    
    //从小到大排列的
    for (i = 0; i < 4; i++) {          
        for (j = 0; j < 4 - i; j++) {  
            if (arr[j] > arr[j + 1]) { 
                // 交换位置
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // 输出结果
    printf("\n从小到大排列：\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
#include <stdio.h>

int main(){

    int a, b, c, temp;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int arr[3] = {a, b, c};
    printf("Input = %d, %d, %d\n", arr[0],arr[1],arr[2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Output = %d, %d, %d", arr[0],arr[1],arr[2]);
    return 0;
}
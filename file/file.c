#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum >= %d\n", sum);
}

// ./file (exucatable file) < (left sheift sign ) input.txt (input file path) > (right shift) output.txt (output saved file path)
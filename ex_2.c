#include <stdio.h>
#define NMAX 10

void input(int *a, int *n);
void output(int *tmp);
void squaring(int *a, int *n, int *tmp);

int main()
{
    int tmp;
    int n, data[NMAX];
    input(data, &n);
    squaring(data, &n, &tmp);

    return 0;
}

void input(int *a, int *n)
{
    scanf("%d", n);
    for(int *p = a; p - a < *n; p++)  // *p = data; p - data < n(введ. число); p++
    {                                 // указываем на 1 элемент созданного массива, и создаем новый массив размером указанным пользователем
        scanf("%d", p);
    }
}

void output(int *tmp)
{
    printf("%d ", *tmp);
}

void squaring(int *a, int *n, int *tmp)
{
     for(int *p = a; p - a < *n; p++)
    {
        *tmp = *p * *p;
        output(tmp);
    }
}
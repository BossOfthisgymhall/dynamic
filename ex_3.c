#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n, int max);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v);

int main()
{
    int max, min, mean;
    int n, data[NMAX];
    input(data, n);
    output(data, n);
    output_result(max(data, n, max),
                  min(data, n, min),
                  mean(data, n, mean),
                  variance(data, n));

    return 0;
}
int input(int *a, int *n);
{
    scanf("%d", n);
    for(int *p = a; p - a < *n; p++){
        scanf("%d ", p);
    }
}
int max(int *a, int n, int max){
        for(int i = 0; i < n; i++){
        if(max > a[i]){
            max = a[i];
        }
    }
    return max;
}
int min(int *a, int n){
        for(int i = 0; i < n; i++){
        if(min < a[i]){
            min = a[i];
        }
    }
    return min;
}
double mean(int *a, int n, int mean){
    for(int *p = a; p - a < n*; p++){
        mean = p + mean;
    }
    return mean / n;
}
double variance(int *a, int n){

}
void output_result(int max_v, int min_v, double mean_v, double variance_v){
    
}

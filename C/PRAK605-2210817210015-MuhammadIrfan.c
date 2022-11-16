#include <stdio.h>
int main(){
    int MA[10][10], MB[10][10], MAB[10][10];
    int i, j, k, n, jumlah = 0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &MA[i][j]);}}
    printf("Matriks B\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &MB[i][j]);}}
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < n; k++){
                jumlah = jumlah + MA[i][k] * MB[k][j];}
            MAB[i][j] = jumlah;
            jumlah = 0;}}
    printf("Matriks AXB\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", MAB[i][j]);}
        printf("\n");}
}
#include <stdio.h>
int main(){
    int baris, kolom, i, j, angka;
    scanf("%d %d", &baris, &kolom);
    int Angka[baris][kolom];
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            scanf("%d", &angka);
            Angka[i][j] = angka;}
    }
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            printf("%d ", Angka[i][j]);}
        printf("\n");}
}
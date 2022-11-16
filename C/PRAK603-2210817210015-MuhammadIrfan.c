#include <stdio.h>
int main(){
    int n1, n2, angka, x;
    scanf("%d %d", &n1, &n2);
    if(n1 != n2){
        printf("Jumlah tidak sama");}
    else{
        int baris1[n1];
        int baris2[n2];
        for(x = 0; x < n1; x++){
            scanf("%d", &baris1[x]);}
        for(x = 0; x < n2; x++){
            scanf("%d", &baris2[x]);}
        for(x = 0; x < n1; x++){
            angka = baris1[x] * baris2[x];
            printf("%d ", angka);}
    }
}
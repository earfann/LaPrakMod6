#include <stdio.h>
int main(){
    int ruangan, zetsu, x;
    scanf("%d", &ruangan);
    int jumlah[ruangan];
    for(x = 0; x < ruangan; x++){
        scanf("%d", &zetsu);
        jumlah[x] = zetsu;}
    for(x = 0; x < ruangan; x++){
        printf("%d ", jumlah[x] * (x + 1));}
}
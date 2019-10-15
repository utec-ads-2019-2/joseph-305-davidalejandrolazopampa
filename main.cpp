//
// Created by David Lazo on 14/10/2019.
//
#include <cstdio>
using namespace std;
int main() {
    int k;

    //Aqui podria ir algoritmo pero el array es mas optimo creo yo
    int array[13] = {2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901,1358657, 2504881 };

    while (scanf("%d", &k), k) {
        printf("%d\n",array[k-1]);
    }
    //No me funcionaba x el return 3 horas de mi vida por eso
    //return 0;
}
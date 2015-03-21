#include "info.h"
#include <stdio.h>
#include <stdlib.h>

int info_1() {

    FILE *f;
    char c;
    f=fopen("info.txt","rt");

    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }

    fclose(f);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int ht(int usage){
    int cat,c;
    printf("Enter Category\n 1 Industry\n 2 Railway\n 3 Govt Educational Institution\n 4 Private Educational Institution\n 5 temporary construction site\n 6 all other category\n");

    scanf("%d",&cat);
    if(cat==1||cat==3||cat==4){
        c=usage*6.35+350;
    }
    else if(cat==2){
        c =usage*6.35+300;
    }
    else if(cat==5){
        c=usage*11+350;
    }
    else if(cat==6){
        c=usage*8+350;
    }
    return c;

}

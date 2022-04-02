#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int concat(int rc, int sec,int dist, int no)
{

    char s1[11];
    char s2[11];
    char s3[11];
    char s4[11];



    sprintf(s1, "%d", rc);
    sprintf(s2, "%d", sec);
    sprintf(s3, "%d", dist);
    sprintf(s4, "%d", no);


    strcat(s3, s4);
    strcat(s2, s3);
    strcat(s1, s2);


    int c = atoi(s1);


    return c;
}

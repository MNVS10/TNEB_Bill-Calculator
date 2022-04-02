#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int lt(int usage){
    int c;
if(usage<=100){
    c=0;
}
else if(usage<=200){
    int c=(usage-100)*1.5+20;
}
else if(usage<=500){
    usage=usage-200;
    c=30+200+(usage*3);
}
else{
        usage=usage-500;
    c=50+350+(4.6*300)+(usage*6.6);
}
return c;
}

#include "inc.h"
int concat();
int lt();
int ht();
int main(){
    char name[20];
    printf("Please enter your name ");
    fgets(name, 20, stdin);
    int rc,sec,dist,no,tm,min,max,usage,cost;
    printf("Enter Region code ");
    scanf("%d",&rc);
    printf("Enter section code ");
    scanf("%d",&sec);
    printf("Enter distribution code ");
    scanf("%d",&dist);
    printf("Enter Number ");
    scanf("%d",&no);
    int cno;
    cno=concat(rc,sec,dist,no);
    printf("Please enter your previous meter reading ");
    scanf("%d",&min);
    printf("Please enter your current meter reading ");
    scanf("%d",&max);
    usage=max-min;
    printf("Please select your tarrif module\n 1 Low Tension\n 2 High tension\n 3 Agriculture\n");
    scanf("%d",&tm);
    if(tm==1){
         cost=lt(usage);
    }
    else if(tm==3){
        cost=0;
    }
    else if(tm==2){
        cost=ht(usage);
    }
    printf("Bill Details\n");
    printf("Name:%s",name);
    if(tm==1){
         printf("Consumer Number:%d\nConsumer type:Domestic User\nUsage:%d\nTotal Bill Amount=%d\nPlease pay the amount before due date\n",cno,usage,cost);
    }
    else if(tm==2){
        printf("Consumer Number:%d\nConsumer type:Commercial User\nUsage:%d\nTotal Bill Amount=%d\nPlease pay the amount before due date\n",cno,usage,cost);
    }
    else if(tm==3){
        printf("Consumer Number:%d\nConsumer type:Agricultural User\nUsage:%d\nTotal Bill Amount=%d\nPlease pay the amount before due date\n",cno,usage,cost);
    }
    //printf("Consumer Number:%d\nUsage:%d\nTotal Bill Amount=%d\nPlease pay the amount before due date\n",cno,usage,cost);
}

#include<stdio.h>
int main(){
    printf("mohalla bijli calculator\n");
    int bill;
    int homerate;
    homerate = 5;
    int storesrate;
    storesrate=9;
    int unit ;
    printf("enter the number of unit:\n");
    scanf("%d",&unit);
    int connection;
    printf("enter the connection type:");
    scanf("%d",&connection);

    if(connection=1){
      bill=unit*homerate;

    }
    if(connection=2){
        bill=unit*storesrate;
    }
    
    else{
    printf("invalid connection type");
    }
    
    printf("%d",&bill);
    return 0;
}
//Da se napishe funkciq, koqto poluchava string s walidno EGN. Funkciqta da vyrne vyzrastta na pritevatelq na tova EGN.
#include <stdio.h>
#include <math.h>
#define TY 2022
int atoi(char *y);
int HowMany(char *x);

int main(){
    char A[]={'0','2','4','5','2','2','4','4','5','8'};
    int number=atoi(A);
    int year=number/100000000;
    if(A[2]=='4' || A[2]=='5')
        year+=2000;
    else if(A[2]=='0' || A[2]=='1')
        year+=1900;
    printf("You were born in %d \nand you are %d years old.\n",year,TY-year);
    return 0;
}
int atoi(char *y){
    int n;
    n=HowMany(y);
    int new=0;
    for(n--;*y;y++,n--) 
        new+=pow(10, n)*((*y)-'0');
    return new;
}
int HowMany(char *x){
    int i;
    for(i=0;x[i];i++);
    return i;
}
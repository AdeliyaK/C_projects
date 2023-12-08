#include <stdio.h>
#include <limits.h>
#define FI 5
#define SI 7
int begin_v(int a, int b, int *v, int A[][7]);
int begin_h(int a, int b, int *h, int A[][7]);
int proverka(int h,int v, int A[][7],int (*p)[][7],int n, int r);

int main(){
    int A[FI][SI]={0,0,2,0,0,0,0,
                   0,0,1,0,0,0,0,
                   0,0,1,1,0,1,1,
                   0,0,0,0,0,0,1,
                   0,0,0,0,2,1,1};
    int v=INT_MAX, h=INT_MAX;
    if(A[0][0]!=2){
        if(h==INT_MAX)
            h=begin_v(FI-1, 0,&v,A);
        if(h==INT_MAX)
            v=begin_h(0,SI-1, &h, A);
        if(h==INT_MAX)
            h=begin_v(FI-1,SI-1,&v,A);
        if(h==INT_MAX)
            v=begin_h(FI-1,SI-1,&h,A);
        if(h==INT_MAX)
            printf("Error NO begin");
    }
    else {
        h=0;
        v=0;
    }
    printf("h=%d v=%d\n",h,v);
    int p[FI][SI];
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++)
            p[i][j]=0; 
    A[h][v]=1;
    int n=0;
    n=proverka(h,v,A,&p,n, 5);
    p[h][v]=2;
    if(!n){
        printf("No");
    }
    else {
        for(int i=0;i<FI;i++){
            for(int j=0;j<SI;j++)
                printf("%d",p[i][j]);
            printf("\n");
        }
    }
    printf("%d",n);
    return 0;
}

int proverka(int h,int v, int A[][SI],int (*p)[][SI],int n, int r){
    if(A[h][v]==2){
        printf("Yes\n");
        (*p)[h][v]=A[h][v];
        return 1;
    }
    if(v+1<SI && A[h][v+1] && !n && r!=3)
        n=proverka(h,v+1,A,p,n,1); // dqsno
    if(h+1<FI && A[h+1][v] && !n && r!=4)
        n=proverka(h+1,v,A,p,n,2);    // nadolu
    if(v-1>=0 && A[h][v-1] && !n && r!=1)
        n=proverka(h,v-1,A,p,n,3);    // nalqvo
    if(h-1>=0 && A[h-1][v] && !n && r!=2)
        n=proverka(h-1,v,A,p,n,4);    //nagore
    if(n){
        (*p)[h][v]=A[h][v];
        return 1;
    }
    return 0;
}

int begin_v(int a,int b,int *v, int A[][SI]){
    for(int i=0;i<a;i++)
        if(A[i][b]==2){
            *v=b;
            return i;
        }
    return INT_MAX;
}

int begin_h(int a, int b,int *h, int A[][SI]){
    for(int i=0;i<b;i++)
        if(A[a][i]==2){
            *h=a;
            return i;
        }
    return INT_MAX;
}
#ifndef HEAD_H

#define HEAD_H

int add(int, int);

int sub(int, int);

int mul (int, int);

double div(int, int);

#endif
#include "head.h"

int add(int a, int b){

        return a+b;
}
#include "head.h"
double div(int a, int b){
	return a / b;
}

#include "head.h"
int mul(int a, int b){
return a*b;
}
#include "head.h"

int sub(int a, int b){

	return a - b;

}
int main(void) {
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("add:%d\n",add(a,b));
    printf("sub:%d\n",sub(a,b));
    printf("mul :%d\n",mul(a,b));
    printf("div:%lf\n",div(a,b));
return 0;
}


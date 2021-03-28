//fixed point arithmetic in 17.14 format
#include<stdio.h>
#define F (1 << 14) //fixed point 1
#define INT_MAX ((1<<31)-1)
#define INT_MIN (-1(1<<31))
//x,y: fixed point numbers of 17.14 format
//n: (usual)integer

int int_fp(int n){
    return n*F;
}
//rount to zero
int fp_to_int(int x){
    return x/F;
}
//round to nearest integer
int fp_to_int_round(int x){
    if(x>=0){
        return (x+F/2)/F;
    }
    else{
        return (x-F/2)/F;
    }
}
int add_fp(int x, int y){
    return x+y;
}
int add_mixed(int x, int n){
    return x+n*F;
}
int sub_fp(int x, int y){
    return x-y;
}
int sub_mixed(int x, int n){
    return x-n*F;
}
int mult_fp(int x, int y){
    return ((int64_t) x)*y/F;
}
int mult_mixed(int x, int n){
    return x*n;
}
int div_fp(int x, int y){
    return ((int64_t) x) * F/y;
}
int div_mixed(int x, int n){
    return x/n;
}
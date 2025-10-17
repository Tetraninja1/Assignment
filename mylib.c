#include<stdio.h>

int reversedigits(int n){
    int a = 0;
    int rev = 0;
    while(n != 0){
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }return rev;
}
int order(int num){
    int t = 0;
    while(num != 0){ 
        t++;
        num = num / 10;
    }return t;
}
int isArmstrong(int num){
    int x = order(num);
    int y = num; int sum = 0;
    int r;
    while(y != 0){
        r = y % 10;
        int pow = 1;
        for(int i=1; i<=x;i++){
            pow *= r;
        }sum += pow;
        y = y /10;
    }return sum;
}
int isAdams(int num){
    int a = num;
    int square1 = a*a;
    int b = reverse(num);
    int square2 = b*b;

    int reverse_square1 = 0;
        while(square1>0){
            int rem = square1%10;
            reverse_square1 = reverse_square1*10 + rem;
            square1 /= 10;
        }
    int x;
        if(reverse_square1 == square2){
            x = 1;
        }
        else{
            x = 0;
        }
    return x;
} 
int prime(int num){
    int a=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            a = 1;
            break;
        }else {
            a=0;
        }
        return a;
    }
}
int isPrimePalindrome(int num){
    int n = num;
    int a = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    int palindrome = reversedigits(n);
    int t;
        if(a == 0 && palindrome == num){
            t = 1;
        }
        else{
            t = 0;
        }
    return t;
}
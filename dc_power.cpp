//input x, y niye x^y output usng D&C
                ʚɞ ʚɞ ɞ🐣 ʚ  ʚɞ ʚɞ

#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int power(int x,int y){
    if(y ==0)
      return 1;

    int p=power(x, y/2);
    if(y%2==0) return p*p;//example: 50 er half 25+25 but 25 er half 12+12 +(1)= p*P*x 

    else{

    return p*p*x;
    }
}

int main(){
    int x,y;
    cin>>x;
    cin>>y;

    printf("The final number is= ");

    printf("%d", power(x,y));

    return 0;


}

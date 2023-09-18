#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// ************************ CHALLENGE  1 ************************
void bonjour(){
    printf("YouCode \n");
}
// ************************ CHALLENGE 2 ************************
int somme(int i,int j){
    return i + j;
}
// ************************ CHALLENGE 3 ************************
int pgdc(int a,int b){
    for(int i = a;i > 0;i--){
        if (a%i == 0 && b%i == 0)
        {
            return i;
        }
    }
}

// challenge 4
int Max_2(int i,int j){
    if (i>j)
    {
        return i;
    }
    else
    {
        return j;
    }
}

int Max_4(int i,int j,int k,int l){
    return Max_2(Max_2(i,j),Max_2(k,l));
}

// ************************ CHALLENGE 5 ************************
void permuter(int a,int b){
    int s = a;
    a = b;
    b = s;
    printf("a : %d \n b : %d",a,b);
}

// ************************ CHALLENGE 6 ************************
void sollution(float a,float b,float c){
    float d = pow(b,2) - 4 * a * c;
    if (d == 0){

        float x = -b / (2*a);
        if (x < 0){
            x *= -1;
        }
        printf("l equation a deux  sollutions \n\t x1 : %f \n\t x2 : %f",sqrt(x),-sqrt(x));
    }
    else if (d > 0){
        float x1 = ((-b) - (sqrt(d)))/(2*a);
        float x2 = ((-b) + (sqrt(d)))/(2*a);
        if (x1 < 0 ){
            x1 *= -1;
        }
        if (x2 < 0 ){
            x2 *= -1;
        }

        printf("l equation a 4  sollutions \n \t x1 : %f \n \t x2 : %f \n \t x3 : %f\n \t x4 : %f",sqrt(x1),sqrt(x2),-sqrt(x1),-sqrt(x2));
    }
    else{
        printf("l equation n'a pas de sollution dans R");
    }
}

// ************************ CHALLENGE 7 ************************

bool premier(int a){
    for (int i = 2; i < a/2; i++)
    {
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
// ************************ CHALLENGE 8 ************************





int main(){
    bonjour();
    somme(2,3);
    printf ("la somme est : %d \n",somme(2,3));
    printf ("le pgdc est : %d \n",pgdc(561,357));
    printf ("le max est : %d \n",Max_4(561,357,1003,25));
    int a = 4, b = 5;
    permuter(a,b);
    sollution(4,4,1);
    printf ("\n la valeur est premier ??: %d \n",premier(13));
    
}


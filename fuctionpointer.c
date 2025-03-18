
#include<stdio.h>

float sum(float a,float b) {return a+b;}
float sub(float a,float b) {return a-b;}



int main()
{
      float (*func[])(float,float)={sum,sub};
     printf("%f",func[0](1.5,1.5));



}

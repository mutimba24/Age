#include <stdio.h>

int main()
{
    float score;
    printf("Enter your score:");
    scanf("%f",&score);
    if(score>=70 && score <=100)
    {
      printf("%.2f is A",score)
    }
    else if(>=60 && score <70)
    {
      printf("%.2f is B",score);
    }
    else if(>=50&& score <60)
    {
    printf("%.2f is C",score);
    }
    else if(>=40&& score <50)
    {
      printf("%.2f is D,score");
    }
    else if(score>=0 && score <40)
    {
      printf("%.2f if F",score);
    }
  
    }
    return 0;
}

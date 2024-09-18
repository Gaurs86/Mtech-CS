#include<stdio.h>
#include<math.h>
int main()
{

    char direc[100];
  //  direc[0] = '\0';
    int i=0;
    char ch;

    scanf("%s",direc);

    // if(direc[0]!='E' || direc[0]!='W' ||direc[0]!='N'||direc[0]!='S')
    //     return 0;


    int X=0;
    int Y=0;
//    int i=0;
    while(direc[i]!='\0')
    {
        if(direc[i]=='N')
            Y++;
        else if(direc[i]=='S')
            Y--;
        else if(direc[i]=='W')
            X--;
        else if(direc[i]=='E')
            X++;
        i++;
    }

    float dist=0.0;

    dist=sqrt((X^2)+(Y^2));

    printf("%f",dist);

    return 0;
}

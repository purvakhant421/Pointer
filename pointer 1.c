#include<stdio.h>
int  main( )
{
float  side, area=0 ;
float  *ps, *pa ;
printf(" Enter side of square : ") ;
scanf("%f ",& side) ;

ps = & side ;
pa = & area ;

area = (*ps) * (*ps) ;
printf("\n Area of square is : %f ",*pa) ;
return ( 0 );
}
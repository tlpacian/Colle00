void out( int x, int y, char a, char b)
{
   int a;
   a=0;
   while(a <= b)
   
{      if(a == 1)
      {
        ft_putchar('o');
      }
     
      else if(a == b)
      {
       ft_putchar('-');
         
      }

}

int rush0X(int y, int x)
{
    int top=1;
    int bottom=1;
    int l_corner = >1;
    int r_corner = <1;
 
 while(y>=1)
 {
    // while(x>=1)
    // {
         if( y>=1)
         {
         out(y,'o','-','o');
         }
       // x--;
    // }
     y--;
 }
 
}

//if(y == 0)

 /*if( l_corner==1 ||y== l_corner)
  //r_corner = y;
  
 {
ft_putchar('o');
 }

while(l_corner >= 1 && r_corner <= x)
{
 if(x == top || x == bottom) //&& (x != l_corner &&  x != r_corner))
 {
ft_putchar('-');
 }
 l_corner++;
}

//while(top<1 && top>y) && (bottom <1 && bottom >y)
//{
//if((y == right side || y == left side)
//{
 // ft_putchar(|);
//}
//
//rush(3,5)
//while(x > x[0] && x <x[5]
// fprint
}

}*/

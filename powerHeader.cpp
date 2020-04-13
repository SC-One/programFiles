double myPow(double x, int y)
{
    if(y==0) return 1.0;
       if(y>0) return x*(myPow(x,y-1));
       if(y<0) return 1/(myPow(x,-y));
}

class Box
{
    int l,b,h;
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h =z;
    }
    Box(Box &b)
    {
        l = b.l;
        b= b.b;
        h = b.h;
    }
    int getLength()
    {
        return l;
    }
    // Return box's length
    int getBreadth ()
    {
        return b;
    }// Return box's breadth
    int getHeight ()
    {
        return h;
    }//Return box's height
    long long CalculateVolume()
    {
        return (l*b*h);
    }// Return the volume of the box

};

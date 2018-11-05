#include <iostream>

using namespace std;
int f (int a)
{
    if (a>0)
    {
        return a+1;
    }
    return a + 0;
}
 int main()
    {
        cout << f(12)<< endl;
        return 0;
    }

int f1 (int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b ;

}
 int main()
    {
        cout << f1(123,238)<< endl;
        return 0;
    }
int f2 (int a, int b)
{
    if (a!=b)
    {
        if (a>b)
        {
            return a=b;
        }
        if (b>a)

            return b=a;

    }
    if (a=b)
    {
        return a=0;
    }
    return b=0;
}
 int main()
    {
        cout << f2(123,238)<< endl;
        return 0;
    }
int f3 (int a,int c,int b)

{
    if (a>b)
    {
        if (c>b)
        {
            return a +c;

        }

        return a+b;

    }



    if (c>a)
    {
        return b+c;
    }


    if (c>a)
    {
        return b+c;
    }

    return b + a;
}
 int main()
    {
        cout << f3(123,238,3478)<< endl;
        return 0;
    }
int f4(int a,int b,int c)
{
    int g = a*(b+c);
    int d= (a+c)*b;
    int i= (a+b)*c;
    if ((g<d)&&(g<i))

    {
        return a;
    }
    if ((d<g)&&(d<i))
    {
        return b;
    }
    if ((i<d)&&(i<g))
    {
        return c;
    }
    }
    int main()
    {
        cout << f4(123,238,3478)<< endl;
        return 0;
    }


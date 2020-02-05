double Function1(float x) //fungsi polinom orde satu f(x) = x. x merupakan batas atas integral (batas bawah 0)
{
    return x;
}

double RiemannSum1 (float x) // Deret Riemann untuk fungsi polinom orde satu f(x)=cx. Perkalian terhadap c dilakukan di luar fungsi
{
    double delta = 0.0000001, sum = 0, n, i;
    n = x/delta;
    for (i = 1; i <= n; i++)
    {
        sum = sum + Function1((delta/2)+delta*i)*delta;
    }
    return sum;
}

double RiemannSum0 (float x) // Deret Riemann untuk fungsi polinom orde 0 f(x) = c*1. x merupakan batas atas integral, batas bawahn 0.
                             // Perkalian terhadap c dilakukan di luat fungsi
{
    double delta = 0.0000001, sum = 0, n, i;
    n = x/delta;
    for ( i = 1; i <= n; i++)
    {
        sum = sum + 1*delta;
    }
    return sum;
}
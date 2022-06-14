//Iterative Function
int fib (int n)
{
    int k1, k2, k3;
    k1 = k2 = k3 = 1;
    for (int j = 3; j <= n; j++)
	{
           k3 = k1 + k2;
           k1 = k2;
           k2 = k3;
                    }
    return k3;
}
//Recursive Function
int fib(int n)
{
    if (n == 1 || n == 2) 
	  return 1;
    else 
	  return (fib(n - 1) + fib(n - 2));
}

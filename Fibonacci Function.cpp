int
fib (int n)
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

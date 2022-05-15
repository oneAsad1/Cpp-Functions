//Recursive Function
int factorial(int n)
{
    if (n > 1)
			return n * factorial(n - 1);
		else
			return 1;
};

//Iterative Function
int fact(int n)
{
  n = 1;
  for (int i = 1; i <= num; i++)
		    n = n * i;
       
       return n;
}

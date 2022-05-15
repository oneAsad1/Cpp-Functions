int isPalindrome(int num2)
{
     for(int i=0; num2!=0;)
    {
        reverse*=10;
        last=num2%10;
        reverse+=last;
        num2/=10;
    }
    return reverse;
}

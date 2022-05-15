int reverseDigit(int number)
{
    for(;number!=0;)
    {
    reverseNumber*=10;
    lastdigit=number%10;
    reverseNumber+=lastdigit;
    number/=10;
    }
    return reverseNumber;
}

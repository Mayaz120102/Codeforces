#include<stdio.h>
int maximum(int n, int a[]){
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int minimum(int n, int a[]){
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
       if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}
int isPrime(int n)
 {
    if(n<=1){
        return 0;
    }
    if(n==2){
    return 1;
 } 
  for (int i = 2; i*i <= n; i++)
  {
    if(n%i ==0){
        return 0;
    }
  }
return 1;
}

int ispalindrome(int n){
    int org =n; //store the original number
    int rev = 0; // store the reverse number
    while (n>0)
    {
        int dig = n%10; // get the last diggit
        rev = rev*10 + dig;
        n/=10; //remove the last dig
    }
    if(org ==  rev){
        return 1; //its a palindrome
    }   
    return 0;
}
//to count the number of divisors
int countdivisors(int n){
    int divisorcount =0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0){
            divisorcount++;
        }
    }
    return divisorcount;
    
}

//find the max divisor function
int maxdivisormnumber(int a[101], int n){
    int maxdivisor = 0;
    int n_Md =0;

    for (int i = 0; i < n; i++)
    {
        int dc = countdivisors(a[i]);

        if(dc>maxdivisor){
            maxdivisor = dc;
            n_Md = a[i];
        }
        else if(dc == maxdivisor){
            if(a[i]>n_Md){
                n_Md = a[i];
            }
        }
    }
    return n_Md;
}

int main()
{
    int n;
    scanf("%d" ,&n);
    int a[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&a[i]);
    }
    //the five functions 

   int maximumvalue = maximum(n,a);
   int minimumvalue = minimum(n,a);
   int primecount =0;
    for (int i = 0; i < n; i++){
        if(isPrime(a[i])){
            primecount++;
        }
    }
   int palindromecount =0;
    for (int i = 0; i < n; i++)
    {
      if(ispalindrome(a[i])){
        palindromecount++;
      }
    }
    
    int result = maxdivisormnumber(a,n);

   printf("The maximum number : %d\n",maximumvalue);
   printf("The minimum number : %d\n",minimumvalue);
   printf("The number of prime numbers : %d\n",primecount);
   printf("The number of palindrome numbers : %d\n",palindromecount);
   printf("The number that has the maximum number of divisors : %d\n",result);

   return 0;
}
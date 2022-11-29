 
 Q(12). another Solution
 
 /* write a program to take even numbers from user and 
print the sum of them after each entry if the user enters
2 odd number the program print "bye" and stopped. */

int main(void)
{
    int num,sum=0,No_Is_odd=0; // flag could written .... No_Is_odd
    while(1)
    {
        scanf("%d",&num);
        if (num%2==0)
        {
            sum=sum+num;
            No_Is_odd=0;
            printf("sum=%d\n",sum);
        }
        else
        {
            // flag to indicate for the user enter 2 odd number
            No_Is_odd++;
            if (No_Is_odd>=2)
            {
                   printf("bye");
                   break;
            }
        }

    }


}













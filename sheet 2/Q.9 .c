
https://www.youtube.com/watch?v=hWhMAoBhi7M

/** Q.9 sheet_2 (Design patterns) */

int main()
{
	int i,j,row=4,col=5;                      
    for(i=0;i<row;i++)                        
    {                                         
        for(j=0;j<col;j++)                    
        {                                   //  * * * * *
            printf("* ");             		//  * * * * *
        }                                   //  * * * * *
        printf("\n");                       //  * * * * * 
    }
	return 0;
}

int main()
{
	int i,j,row=4,col=5;                      
    for(i=0;i<row;i++)                        
    {                                         
        for(j=0;j<col;j++)                    
        {                                   //  0 0 0 0 0
            printf("%d ",i);             	//  1 1 1 1 1
        }                                   //  2 2 2 2 2
        printf("\n");                       //  3 3 3 3 3 
    }
	return 0;
}

int main()
{
	int i,j,row=4,col=5;                      
    for(i=0;i<row;i++)                        
    {                                         
        for(j=0;j<col;j++)                    
        {                                   //  0 1 2 3 4
            printf("%d ",j);             	//  0 1 2 3 4
        }                                   //  0 1 2 3 4
        printf("\n");                       //  0 1 2 3 4
    }
	return 0;
}

int main()
{
int i,j,row=4,col=5;                      
    for(i=1;i<row;i++)                        
    {                                         
        for(j=1;j<col;j++)                    
        {                                   // A B C D
            printf("%c ",j+'A'-1);          // A B C D 
        }                                   // A B C D
        printf("\n");                       // A B C D
    }
	return 0;
}


int main()
{
	int i,j;
    for(i=0;i<=5;i++)  //hatlf 6 lfat
    {                                       // *
        for(j=0;j<=i;j++)                   // * *
        {                                   // * * *
            printf("* ");                   // * * * *
        }                                   // * * * * *
        printf("\n");                       // * * * * * *
    }
	return 0;
}

int main()
{
	int i,j;
    for(i=5;i>=0;i--) //t3del hena bs
    {                                       // * * * * * *
        for(j=0;j<=i;j++)                   // * * * * *
        {                                   // * * * *
            printf("* ");                   // * * * 
        }                                   // * * 
        printf("\n");                       // * 
    }
	return 0;
}


int main()
{
 int i,j;
    for(i=1; i<=5; i++) //t3del hena bs
    {                                           // *****
        for(j=1; j<=5; j++)                     // *   *
        {                                       // *   *
            if(i==1 || i==5 || j==1 || j==5)    // *   *
                printf("*");                    // *****
            else
                printf(" ");                    
        }                                       
        printf("\n");                           
    }
	return 0;
}

int main()
{

    int i,j;
    for(i=1; i<=5; i++) //t3del hena bs
    {                                           // * * * * *
        for(j=1; j<=5; j++)                     // *       *
        {                                       // *  	   *
            if(i==1 || i==5 || j==1 || j==5)    // *       *
                printf("* ");//zwadet space     // * * * * *
            else
                printf("  ");//zwadet space 
        }
        printf("\n");
    }
	return 0;
}

/** Pyramids pattern  **/
int main()
{

    int i,j,k;
    for(i=1; i<=5; i++) //t3del hena 
    {
        for(k=5;k>=i;k--) //t3del tany hena 
            printf(" ");                        //     *
        for(j=1; j<=i; j++)                     //    * *
        {                                       //   * * *
            printf("* ");                       //  * * * *
                                                // * * * * *
        }
        printf("\n");
    }
	return 0;
}

/** Pyramids pattern (ma2lob) **/
int main()
{
    int i,j;
	int k;
    for(i=5; i>=1; i--) //t3del hena 
    {
        for(k=i;k<=5;k++) //t3del tany hena
            printf(" ");                        // * * * * *   
        for(j=1; j<=i; j++)                     //  * * * *   
        {                                       //   * * *
            printf("* ");                       //    * *
                                                //     *
        }                                                   
        printf("\n");
    }
    }
	return 0;
}

/********************************************/
/******* Diamond pattern *******/
void diamond_pattern(void)
{
		int i,j,k;
    for(i=1; i<=3; i++) //t3del hena bs
    {
        for(k=3;k>=i;k--)
            printf(" ");                        //     *
        for(j=1; j<=i; j++)                     //    * *
        {                                       //   * * *
            printf("* ");                       //  * * * *
                                                //   * * *
        }                                       //    * * 
        printf("\n");                           //     *  
                                                                     
    }
    printf("* * * *");
    printf("\n");
    
    for(i=3;i>=1;i--)
    {
        for(k=i;k<=3;k++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
 
int main()
{
	diamond_pattern();
	return 0;
}

/********************************************/

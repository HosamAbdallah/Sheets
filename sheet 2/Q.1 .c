


void circle(unsigned int rad)
{
    printf("enter your radius:");
    scanf("%d",&rad);
    float area=rad*rad*3.14;
    float circumference=2*3.14*rad;
    printf("circumfe=%f ============= area=%f\n",circumference,area);
}


int main()
{
	unsigned int rad;
    circle(rad);
	return 0;
}
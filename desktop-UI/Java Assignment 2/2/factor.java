public class factor
{
    long factorial(int x)
    {
	if(x==1)return 1;
        long a=x;
        return a*factorial(x-1);
    }
    public static void main(String args[])
    {
	int q=Integer.parseInt(args[0]);
        factor obj=new factor();
        long ans=obj.factorial(q);
        System.out.println("Factorial of " + q + " is equal to " + ans ); 



    }
}
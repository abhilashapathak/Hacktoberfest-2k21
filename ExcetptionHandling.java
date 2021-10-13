package assignment_05_java;

class UserVerySmallNumException extends Exception
{
    double a,b;
    public UserVerySmallNumException(double a,double b)
    {
        this.a=a;
        this.b=b;
    }
    
    @Override
    public String toString()
    {
        return ("The division of a = "+ a +" and b =  "+ b +" is very small i.e. less than 0.00001 ");
    }
}
public class A5Q2
{
	public static void main(String[] args)
	{
	       try
	       {
	           double a = 0.001, b = 10000;

	           if ((a / b) < 0.00001)
	           {
	               throw new UserVerySmallNumException(a, b);
	           }
	       }
	       catch (UserVerySmallNumException e)
	       {
	           System.out.println(e);
	       }
     }
}


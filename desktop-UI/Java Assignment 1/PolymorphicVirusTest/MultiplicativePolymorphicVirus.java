import java.lang.*;
/**
 * To define class MultiplicativePolymorphicVirus, a child of class PolymorphicVirus and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
*/
public class MultiplicativePolymorphicVirus extends PolymorphicVirus
{
  private int a1,a2;
  /**
   * To initialise the data members of newly created object of class MultiplicativePolymorphicVirus with user input
   * @param x1 User input for inherited data member number1
   * @param x2 User input for inherited data member number2
   */
  public MultiplicativePolymorphicVirus(int x1,int x2)
  {
     super(x1,x2);



  }
  /**
   * To print sum of number1 and number2 as product of 2 random numbers
   * @return s3 The sum written as product of 2 random numbers
   */
  public String execute()
  {
    int sum=n1()+n2();double t,q;boolean flag=true;
    while(flag)
    {


     t=Math.random();
      q=t*sum;
      a1=(int)q;
      if(a1==0)
       continue;
      if(sum%a1==0)
       flag=false;
     }




     a2=sum/a1;


    String s1=Integer.toString(a1);
    String s2=Integer.toString(a2);
    String s3=s1+"*"+s2;
    return s3;





  }
} 

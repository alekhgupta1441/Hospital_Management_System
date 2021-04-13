import java.lang.*;
/**
 * To define class SubtractivePolymorphicVirus, a child of class PolymorphicVirus and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
*/
public class SubtractivePolymorphicVirus extends PolymorphicVirus
{
  private int a1,a2;
  /**
   * To initialise the data members of newly created object of class SubtractivePolymorphicVirus with user input
   * @param x1 User input for inherited data member number1
   * @param x2 User input for inherited data member number2
   */
  public SubtractivePolymorphicVirus(int x1,int x2)
  {
     super(x1,x2);


  }
  /**
   * To print sum of number1 and number2 as difference of 2 random numbers
   * @return s3 The sum written as difference of 2 random numbers
   */
  public String execute()
  {
    int sum=n1()+n2();
     double t=Math.random();
     double q=t*sum;
     a1=(int)q;
     a2=sum+a1;
     String s1=Integer.toString(a1);
    String s2=Integer.toString(a2);
    String s3=s2+"-"+s1;
    return s3;





  }
}

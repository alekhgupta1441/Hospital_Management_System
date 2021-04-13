import java.lang.*;
/**
 * To define class PolymorphicVirus and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class PolymorphicVirus
{
   private int number1,number2;
   /**
    * To initialise the data members of newly created object of PolymorphicVirus with user input
    * @param x1 User input for data member number1
    * @param x2 User input for data member number2
    */
   public PolymorphicVirus(int x1,int x2)
   {
       number1=x1;
       number2=x2;



   }
   /**
    *To print the values stored in number1 and number2 together as a string
    * @return s3 The sum written as sum of number1 and number2
    */
   public String execute()
   {
      String s1=Integer.toString(number1);
      String s2=Integer.toString(number2);
      String s3=s1+","+s2;
      return s3;

   }
   /**
    * To access data member number1
    * @return number1 Value stored in data member number1
    */
   public int n1()
   {
      return number1;

   }
   /**
    * To access data member number2
    * @return number2 Value stored in data member number2
    */
   public int n2()
   {
        return number2;
    }
}

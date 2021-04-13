import java.lang.*;
/**
 * To accept two numbers as input from user, find their sum and write that sum as sum,product,difference of two random numbers 5 times each
 * @author S NISHOK KUMAR
 * @version 1.0
 */ 
public class PolymorphicVirusTest
{
  /**
   * To create an object each of class PolymorphicVirus,AdditivePolymorphicVirus,SubtractivePolymorphicVirus and MultiplicativePolymorphicVirus
   * @param args User input number1 and number2 as strings
   */
  public static void main(String args[])
  {
    int x1=Integer.parseInt(args[0]);
    int x2=Integer.parseInt(args[1]);
    PolymorphicVirus[] viruses=new PolymorphicVirus[4];
    viruses[0]=new PolymorphicVirus(x1,x2);
    viruses[1]=new AdditivePolymorphicVirus(x1,x2);
    viruses[2]=new SubtractivePolymorphicVirus(x1,x2);
    viruses[3]=new MultiplicativePolymorphicVirus(x1,x2);
    for(PolymorphicVirus virus : viruses )
    {
       for(int i=1;i<=5;i++)
       {
          System.out.println(virus.execute());





       }


    }





   }

}

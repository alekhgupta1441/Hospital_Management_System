import java.lang.*;
/**
 * To define class OnsiteManager, a child of class Manager and its associated data members and functions
 */
public class OnsiteManager extends Manager
{

  private int nrofMonthsAtOnsite;
  private double omSalary;
  /**
   * To initialise the data members of newly created object of OnsiteManager with user input
   * @param nam User input for inherited data member name
   * @param n User input for inherited data member nrofSubordinates
   * @param o User input for data member nrofMonthsAtOnsite
   */
  public OnsiteManager(String nam,int n,int o)
  {
    super(nam,n);
    super.salary();
    nrofMonthsAtOnsite=o;
  
  
  }
  /** 
   * To calculate the salary of Onsite manager
   */
  public void salary()
  {
     
      omSalary=Math.log(1+nrofMonthsAtOnsite)*super.getSalary()+super.getSalary();
   


  }
  /**
   * To access the data member omSalary
   * @return omSalary The value stored in data member omSalary
   */
  public double getSalary()
  { 
   return omSalary;

  }
  /**
   * To print the details of object of class OnsiteManager
   */
  public void print()
  {
      super.print();
      System.out.println("Number of months onsite: " + nrofMonthsAtOnsite );


   }
}

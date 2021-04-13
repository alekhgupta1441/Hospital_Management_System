import java.lang.*;
/**
 * To define an abstract class Employee and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public abstract class Employee
{
  private String name;
  static int ID=1001;
  private int id;
  private final double employeeSalary=30000;
  /**
   * To initialise the data member name of newly created child of class Employee with user input
   * @param nam User input for data member name
   */
  public Employee(String nam)  
  {
     name=nam;
     id=ID++;
   }
   /**
    * To perform salary calculations for child class objects of class Employee 
    */
   public abstract void salary();
   /**
    * To provide access to data member employeeSalart
    * @return employeeSalary The value stored in data member employeeSalary
    */
   public double getSalary()
   {
      return employeeSalary;

    }
   /**
    * To print the details of object of class Employee
    */
   public void print()
   {
       System.out.println("Name: " + name );
       System.out.println("ID: " + id );

    }
}

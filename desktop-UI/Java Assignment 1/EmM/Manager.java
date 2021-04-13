import java.lang.*;
/**
 * To define class Manager, a child of class Employee and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class Manager extends Employee
{
  private int nrofSubordinates;private double managerSalary;
  /**
   * To initialise newly created object of class Manager with user input
   * @param nam User input for inherited data member name
   * @param n User input for data member nrofSubordinates
   */
  public Manager(String nam,int n)
  {
    super(nam);
    nrofSubordinates=n;
  }
  /**
   * To calculate the salary of manager
   */
  public void salary()
  {
    managerSalary=Math.log(1+nrofSubordinates)*super.getSalary();
  }
  /**
   * To access the data member managerSalary
   * @return managerSalary The value stored in data member managerSalary
   */
  public double getSalary()
  {
    return managerSalary;
  }
  /**
   * To print the details of object of class Manager
   */
  public void print()
  {
    super.print();
    System.out.println("No of subordinates: " + nrofSubordinates );

  }

}

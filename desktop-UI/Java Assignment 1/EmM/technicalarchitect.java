import java.lang.*;
/**
 * To define class technicalarchitect, a child of class Manager and its associated data members and functions
 */
public class technicalarchitect extends Manager
{
   private double sal;
   /**
    * To initialise the data members of newly created object of technicalarchitect with user input
    * @param nam User input for inherited data member name
    * @param n User input for inherited data member nrofSubordinates
    */
   public technicalarchitect(String nam,int n)
   {
     super(nam,n);
     super.salary();

    }
    /** 
     * To calculate the salary of technical architect
     */
    public void salary()
    {
       sal=1.5*super.getSalary();
    
    }
    /**
     * To access the data member sal
     * @return sal The value stored in data member sal
     */
    public double getSalary()
    {

      return sal;

    }
    /**
     * To print the details of object of class technicalarchitect
     */
    public void print()
   {
       super.print();

    }

}

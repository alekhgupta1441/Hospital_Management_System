import java.lang.*;
/**
 * To create an array of employees and store two manager objects,two onsite manager objects and two technical architect objects in it and to find total expenses of company
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class EmM
{
  /**
   * To create array of objects and two objects each of Manager,OnsiteManager and technicalarchitect and initialise them with some value and to display their details and sum up the total expenses incurred
   */ 
  public static void main(String args[])
  {
     
      Employee[] em=new Employee[6];
      double total=0;
      em[0]=new Manager("Kashyap",5);
      em[1]=new Manager("Rishabh",4);
      em[2]=new OnsiteManager("Sundar",8,13);
      em[3]=new OnsiteManager("Vivek",7,11);
      em[4]=new technicalarchitect("Adi",9);
      em[5]=new technicalarchitect("Manoj",13);
      for(Employee e : em )
       {
         e.salary();
         e.print();
         System.out.println("Salary:" + e.getSalary() );         
         total+=e.getSalary();
       }
      System.out.println("Total expenses:"+ total);










  }
}

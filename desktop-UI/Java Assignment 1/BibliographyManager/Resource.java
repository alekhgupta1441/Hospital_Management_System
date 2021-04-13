/**
 * Define resource class and associated data members
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public abstract class Resource
{
  private String title;
  /**
   * To store a string in the data member title
   * @param string The input string to be stored in title 
   */
  public void setTitle(String string)
  {
     title=string;
  }
  /**
   * To provide access to data member title
   * @return title The data member title which needs to be accessed
   */
  public String getTitle()
  {
    return this.title;


  }
  /**
   * To print details of any child object of Resource class
   */
  public abstract void print();
}

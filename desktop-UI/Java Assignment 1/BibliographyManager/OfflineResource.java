/**
 * To define class OfflineResource, a child of Resource class and its associated data members and methods
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public abstract class OfflineResource extends Resource
{
  
  private String publisher;
  private int year;
  /**
   * To initialise data member publisher with a value from user
   * @param s Input string
   */
  public void setPub(String s)
  {
    publisher=s;
  
  }
  /**
   * To initialise data member year with a value from user
   * @param s Input integer year
   */
  public void setyear(int s)
  {
     year=s;
  
  
  }
  /**
   * To provide access to data member publisher
   * @return publisher The value stored in data member publisher

   */
  public String getPublisher()
  {
    return this.publisher;
  
  
  }
  /**
   * To provide access to data member year
   * @return year The value stored in data member year
   */
  public int getYear()
  {
    return this.year;



  }



}

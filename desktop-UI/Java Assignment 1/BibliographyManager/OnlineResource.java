/**
 * To define class OnlineResource, a child of Resource class and associated data members and methods
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class OnlineResource extends Resource
{

  private String url;
  /**
   * To initialise data members of newly created object of OnlineResource with values passed as arguments
   * @param title The title of online resource
     @param url The url of online resource
   */
  public OnlineResource(String title,String url)
  {
    this.setTitle(title);
    this.url=url;
  }
  /**
   * To print details of object of OnlineResource class
   */
  public void print()
  {
   System.out.println(" The title is " + getTitle() );
   System.out.println(" The url is " + url ); 
  
  
  
  }

}

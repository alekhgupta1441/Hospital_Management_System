/**
 * To define class Journal, a child of OfflineResource class and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class Journal extends OfflineResource
{
  
  private String name;
  private int volume,issue,pageStart,pageEnd;
  /**
   * To initialise the newly created object of class Journal with user input values
   * @param title User input for inherited data member title
   * @param publisher User input for inherited data member publisher
   * @param year User input for inherited data member year
   * @param a User input for data member name
   * @param b User input for data member volume
   * @param c User input for data member issue
   * @param d User input for data member pageStart
   * @param e User input for data member pageEnd
   */
  public Journal(String title,String publisher,int year,String a,int b,int c,int d,int e)
  {
    this.setTitle(title);
    this.setPub(publisher);
    this.setyear(year);
    name=a;
    volume=b;
    issue=c;
    pageStart=d;
    pageEnd=e;
  }
  /**
   * To print the details of the object of class Journal
   */
  public void print()
  {
    System.out.println(" The title is " + getTitle() );
    System.out.println(" The publisher is " + getPublisher() );
    System.out.println(" The year of publication is " + getYear() );
    System.out.println(" Name " + name);
    System.out.println(" Volume " + volume );
    System.out.println(" Issue " + issue );
    System.out.println(" Pagestart " + pageStart );
    System.out.println(" Pageend " + pageEnd );
  }
}

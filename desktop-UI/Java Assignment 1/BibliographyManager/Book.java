/**
 * To define class Book, a child of class OfflineResource and its associated data members and functions
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class Book extends OfflineResource
{

  private String author,isbn;
  private int pages;
  /** 
   * To initialise data members of newly created object of Book with user values
   * @param title User input for inherited data member title
   * @param publisher User input for inherited data member publisher
   * @param year User input for inherited data member year
   * @param a User input for data member author
   * @param b User input for data member isbn
   * @param c User input for data member pages
   */
  public Book(String title,String publisher,int year,String a,String b,int c)
  {
    this.setTitle(title);
    this.setPub(publisher);
    this.setyear(year);
    author=a;
    isbn=b;
    pages=c;
  }
  /**
   * To print the details of the object of class Book
   */
  public void print()
  {
    System.out.println(" The title is " + getTitle() );
    System.out.println(" The publisher is " + getPublisher() );
    System.out.println(" The year of publication is " + getYear() );
    System.out.println(" Author: " + author );
    System.out.println(" ISBN: " + isbn);
    System.out.println(" Number of pages: " + pages );
  }
}

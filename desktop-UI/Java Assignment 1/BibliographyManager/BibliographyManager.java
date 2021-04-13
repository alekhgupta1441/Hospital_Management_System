/**
 * To use the defined class hierarchy for Resource and its children and create and display objects of classes OnlineResource,Book and Journal
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class BibliographyManager
{
 /**
  * To create one object each of class OnlineResource,Book and Journal and display their details
  */
 public static void main( String args[])
 {
   System.out.println("Creating and displaying online resource object");
   OnlineResource obj1=new OnlineResource("XYZ","www.cserocks.com");
   obj1.print();
   System.out.println("Creating and displaying book object");
   Book obj2= new Book("ABCD","Penguin",2007,"A tale of 2 cities","WXB100232",172);
   obj2.print();
   System.out.println("Creating and displaying journal object");
   Journal obj3= new Journal("QRST","Mathwiz",1999,"Cryptanalysis of AES-JAMBU cipher",3,5,1,45);
   obj3.print();









 }
}

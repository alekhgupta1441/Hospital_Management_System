/**
 * Accepting input from user and performing text processing operations on it
 * @author S NISHOK KUMAR
 * @version 1.0
 */
public class TextprocessorTest
{
   /**
     * Accepts input from user and calls methods of TextProcessor class to perform required operations
     * @param args The input sentence on which operations have to be done
    */
   public static void main(String args[])
 {
  
   TextProcessor obj= new TextProcessor();
   String[] ans=obj.getWords(args[0]);
   int a=obj.getWordCount(args[0]);
   int[] b=new int[a];
   b=obj.getWordLengths(args[0]);
   System.out.println("The words of the string are");
   for( String k : ans )
    System.out.println(k);
   System.out.println("Number of words in sentence : " + a );
   int r=0;
   for( int d : b )
   {
    System.out.println("Length of word " + ans[r] + " is equal to " + d);
    r++; 
  
    }









  }

}

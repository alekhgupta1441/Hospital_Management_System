/**
 * Simple textprocessing operations
 * @author S NISHOK KUMAR
 * @version 1.0
*/
public class TextProcessor
{
 /**
  * Separates the sentence into separate words and stores them in an array
  * @param string The input sentence which sould be separated into words
  * @return ans The output array containing separated words
 */
 public String[] getWords(String string)
 {
    String[] ans=string.split(" ");
    return ans;
 
 
 }
 /**
  * Counts the number of words in a sentence
  * @param string The input sentence whose word count has to be found
  * @return coun The number of words 
  */
  public int getWordCount(String string)
 {
   String[] temp=getWords(string);
   int coun=0;
   for( String k : temp )
    coun++;
   return coun;
}
 /**
  * Calculates the length of each word of input sentence and stores them in an array
  * @param string The input sentence on which operation should be done
  * @return ans The output array containing length of each word of sentence 
  */
  public int[] getWordLengths(String string)
{
   String[] temp=getWords(string);
   int[] ans= new int[getWordCount(string)];int i=0;
   for( String k : temp )
    {
       ans[i]=k.length();
       i++;


    }
    return ans;
}

}

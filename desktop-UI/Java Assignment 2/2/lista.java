import java.util.ArrayList;
import java.util.Collections;
public class lista 
{
        public static void main(String[] args) 
        {
		ArrayList<Integer> a=new ArrayList<Integer>(10);
		int i;
                for(i=0;i<10;i++)
                {
		    a.add((i+1)*(i+1));
		}
		System.out.println("All squares from 1 to 10");
                for(int x : a)
                {
			
                     System.out.print(x+" ");
		}
		System.out.println("\nSize of the list is equal to " + a.size());
		a.clear();//Comment this statement if you want to check false
		System.out.println("Status of list (true if empty/false if not)" + a.isEmpty());
	}

}

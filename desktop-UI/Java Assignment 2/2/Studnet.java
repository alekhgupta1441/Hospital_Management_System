import java.util.Arrays;
class Student implements Comparable<Student>
{ 
    String firstName;
    String lastName;
    public Student(String fname,String lname)
    {
        firstName=fname;
        lastName=lname;

    }
    public int compareTo( Student obj1)
    {
        String s4=obj1.firstName+" "+obj1.lastName;
        String s3=this.firstName+" "+this.lastName;
        int ans=s3.compareTo(s4);
        if(ans<0)
	    return -1;
        else if(ans>0)
	    return 1;
        else return 0;

    }
}  
public class Studnet
{   
 public static void main(String args[])
    {
	Student[] s=new Student[5];
        s[0]=new Student("Ayush","Bansal");
        s[1]=new Student("Aayush","Sharma");
        s[2]=new Student("Yashvardh","Singh");
        s[3]=new Student("Yashvardhan","Dixit");
        s[4]=new Student("Siddharth","Singh");
        Arrays.sort(s);
        for( Student sa : s )
	    System.out.println(sa.firstName+" "+sa.lastName);
        
       
        
       







  
    }
}
class Person
{
	String name;
	int age;
	public Person(String name,int age)
        {
		this.name = name;
		this.age = age;
	}
	public void display()
        {
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
	}
}
class Student extends Person
{
    String rollNo,branch;
	public Student(String nam,int age,String roll, String b)
        {
		super(nam, age);
		rollNo=roll;
		branch=b;
	}
	public void display(){
		System.out.println("Name of student: " + name);
		System.out.println("Age of student : " + age);
		System.out.println("Roll No: " + rollNo);
		System.out.println("Branch: " + branch);
	}	
}
class Employee extends Person
{
    String ecNo,doj;
	public Employee(String nam, int age, String ecNo, String doj)
        {
		super(nam,age);
		this.ecNo = ecNo;
		this.doj = doj;
	}
	public void display(){
		System.out.println("Name of employee : " + name);
		System.out.println("Age of employee : " + age);
		System.out.println("EcNo.: " + ecNo);
		System.out.println("Date of Joining: " + doj);
	}
}
class Staff extends Employee
{
	String designation;
	public Staff(String nam, int age, String ecNo, String doj,String designation)
        {
		super(nam,age,ecNo,doj);
		this.designation = designation;//clerical or technical
	}
	
	public void display(){
		System.out.println("Name of staff : " + name);
		System.out.println("Age of staff : " + age);
		System.out.println("EcNo: " + ecNo);
		System.out.println("Date of Joining: " + doj);
		System.out.println("Designation of staff: " + designation);
	}
}
class Faculty extends Employee
{
	String designation;
	public Faculty(String nam, int age, String ecNo, String doj,String desig)
        {
		super(nam,age,ecNo,doj);
		designation = desig;
	}
	public void display()
        {
		System.out.println("Name of faculty : "+name);
		System.out.println("Age of faculty : "+age);
		System.out.println("EcNo: "+ecNo);
		System.out.println("Date of Joining: "+doj);
		System.out.println("Designation: "+designation);
	}
}
public class MainDemoClass
{
	public static void main(String[] args)
        {
		Person p = new Person("Stud",20);
		Student s = new Student("Harikrishna",21,"15CS30022","Computer Science");
		Employee e = new Employee("KamalHassan",38,"38291","9/11/2001");
		Staff ss = new Staff("Rajesh",45,"453098","11/12/2011","Clerical");
		Faculty f = new Faculty("Adil",55,"479387","23/4/2000","Professor");
		System.out.println("Person");
                p.display();
		System.out.println("Student");
                s.display();
                System.out.println("Employee");
		e.display();
                System.out.println("Staff");
		ss.display();
                System.out.println("Faculty");
		f.display();
	}	
}


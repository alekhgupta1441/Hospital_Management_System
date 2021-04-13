interface A
{
	void doSomething();
}
interface B extends A
{
	void doSomethingMore();
}
class C implements B
{
	public void doSomething() 
        {
		System.out.println("doSomething() implemented");
	}
	public void doSomethingMore() 
        {
		System.out.println("doSomethingMore() implemented");
	}
}
public class question3 
{
	public static void main(String args[])
        {
		C obj =new C();
		obj.doSomething();
		obj.doSomethingMore();
	}
}

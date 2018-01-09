import java.io.*;
class Count
{
	public static void main (String[] args) 
	{
	int count=0, num=555;
	while(num!=0)
	{
		num/=10;
		++count;
		
	}
	System.out.println("count is" +count);
	}
}

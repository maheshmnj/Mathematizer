import java.util.Scanner;
import static java.lang.System.out;
public class area {
public static void main(String []args){
int r;
int l;
int b;
int a;
int w;
Scanner i = new Scanner(System.in);
out.println("enter radius,length,breadth,altitude and base");
r = i.nextInt();
l = i.nextInt();
b = i.nextInt();
a = i.nextInt();
w = i.nextInt();
//float ac,ar,at;
//ac = r*r*3.14;
//ar = l*b;
//at = a*w*0.5;
out.println("area of circle is: " + (r*r*3.14));
out.println("Area of rectangle is: " + (l*b));
out.println("Area of Triangle is: " + (a*w*0.5));
}
}

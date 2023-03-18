public class lab2 {
 public static void (String args[]){
  if (args != 2){
   throw new IllegalArgumentException("not 2 arguments");
  }
  int sum = 0;
  int product = 0;
  sum = args[0] + args[1];
  product = args[0] + args[1];
  System.output.println(args[0]+" + "+args[2]+" = "+sum);
  System.output.println(args[0]+" * "+args[2]+" = "+product);
 }
}

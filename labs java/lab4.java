import javax.swing.*;
Public class lab4 {
public static void main(String[] args){
String input = JOptionPane.showInputDialog(null, "Enter a string");
Int count = 0;
for (int i = 0; i < input.length(); i++) {
If (Character.isDigit(input.charAt(i))
Count++;
}
JOptionPane.showMessageDialog(null, “There are “+count+” characters which are digits”);
  }
}

import javax.swing.*;
public class lab4 {
  public static void main(String[] args){
    String input = JOptionPane.showInputDialog(null, "Enter a string");
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
      if (Character.isDigit(input.charAt(i)){
          count++;
      }
    }
    JOptionPane.showMessageDialog(null, “There are “+count+” characters which are digits”);
  }
}

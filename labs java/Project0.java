package projects;
import javax.swing.*;

/* Name: Nadia Islam

 * This program asks a user for a sentence and checks how many lower case e's and upper case E's there are. If the user entered STOP the program would stop. This was done using methods such as charAt and equalIgnoreCase methods. 
 */
public class Project0 {

	public static void main(String[] args) {
		String a;
		while (true) { // this while loop is used because if a condition isn't met in this case we need to break out of the for loop and terminate the program. If all the conditions are met the while loop should keep running all given code.
			a = JOptionPane.showInputDialog(null, "Please enter a sentence."); // showInputDialog is used for printing out something so the user can read and give needed input for code to run completely.
				
			
			if (a.equalsIgnoreCase("STOP")) { // this is here if users do not want to input anything and want to quit the program they can type stop and the program will stop running.
				break;
			}
			
		int upper = 0;
		int lower = 0; 
		
		for (int i = 0; i < a.length(); i++) { // using a for loop because we want i to iterate at every place of a to check if there is and upper or lower case e'.
			if (a.charAt(i) == 'E') { // If statements are used for if what were looking for is found we want to add 1 to how many times lower or upper case e's show up.
				upper++;
			}
			if (a.charAt(i) == 'e') {
				lower++;
			}
		}
		
		JOptionPane.showMessageDialog(null, "Number of lowercase e's: " +  lower + "\n" + "Number of uppercase e's: " + upper); // prints 
		}
	}
}

import javax.swing.JOptionPane;

public class GUI {

    public static void main(String[] args) {

        String name=JOptionPane.showInputDialog("Enter your name below");
        JOptionPane.showMessageDialog(null, "Hello "+name+"!");

        int age=Integer.parseInt(JOptionPane.showInputDialog("Enter your age below"));
        JOptionPane.showMessageDialog(null, "Hello "+name+"! "+"You are "+age+" years old.");

    }
    
}

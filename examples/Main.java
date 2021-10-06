import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;


class Sub implements ActionListener{
	
	JFrame jf=new JFrame();
	JButton submit=new JButton("Submit");
	JTextField name=new JTextField();
	JLabel l=new JLabel("Enter Your Name");
	
	
	Sub(){
		
		l.setBounds(150,70,100,120);
		name.setBounds(154,150,90,25);
		submit.setBounds(154,200,90,30);
		submit.addActionListener(this);
		jf.add(l);
		jf.add(name);
		jf.add(submit);
		jf.setDefaultCloseOperation(jf.EXIT_ON_CLOSE);
		jf.setSize(420,420);
		jf.setLayout(null);
		jf.setVisible(true);
	}
	
	

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		String namegiven=name.getText();
		jf.dispose();
		Wish wish=new Wish(namegiven);
	}
	
}

class Wish{
	JFrame j=new JFrame();
	JLabel label=new JLabel("Happy Birthday");
	JLabel label1=new JLabel("To");
	JLabel l2=new JLabel();
	Wish(String namegiven){
		label.setBounds(110,50,200,100);
		label.setForeground(Color.RED);
		label.setFont(new Font(null,Font.BOLD,25));
		label1.setBounds(180,100,60,100);
		label1.setFont(new Font(null,Font.BOLD,25));
		label1.setForeground(Color.MAGENTA);
		l2.setBounds(120,150,200,100);
		l2.setFont(new Font(null,Font.BOLD,25));
		l2.setText(namegiven);
		l2.setForeground(Color.BLUE);
		j.add(l2);
		j.add(label1);
		j.add(label);
		j.setDefaultCloseOperation(j.EXIT_ON_CLOSE);
		j.setSize(420,420);
		j.setLayout(null);
		j.setVisible(true);
	}
}

public class Main {
	public static void main(String args[]) {
		
		Sub s=new Sub();
	}
}

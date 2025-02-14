package unit2;

import javax.swing.*;

public class Program1_5 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Swings Componets");
        JPanel panel = new JPanel();
        
        JButton button = new JButton("Submit");
        panel.add(button);
        
        JTextField field = new JTextField(20);
        panel.add(field);
        
        JTextArea area = new JTextArea();
        panel.add(area);
       
        ButtonGroup group = new ButtonGroup();
        JRadioButton radio = new JRadioButton("Option 1");
        JRadioButton radio1 = new JRadioButton("Option 2");
        JRadioButton radio2 = new JRadioButton("Option 3");
        group.add(radio);
        group.add(radio1);
        group.add(radio2);
        panel.add(radio);
        panel.add(radio1);
        panel.add(radio2);
        
        JCheckBox checkbox = new JCheckBox("Option");
        JCheckBox checkbox1 = new JCheckBox("Option1");
        JCheckBox checkbox2 = new JCheckBox("Option2");
        panel.add(checkbox);
        panel.add(checkbox1);
        panel.add(checkbox2);
        
        JComboBox drop = new JComboBox();
        drop.addItem("Option");
        drop.addItem("Option1");
        drop.addItem("Option2");
        panel.add(drop);
        
        DefaultListModel listModel = new DefaultListModel();
        listModel.addElement("Option 1");
        listModel.addElement("Option 2");
        
        JList list = new JList(listModel);
        panel.add(list);
        
        frame.setSize(1000,1000);
        frame.setVisible(true);
    }
    
}


package assignment2;

import javax.swing.ImageIcon;

public class Program7 extends javax.swing.JFrame {
    public Program7() {
        initComponents();
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        box = new javax.swing.JComboBox<>();
        label = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        box.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Apple", "Mango" }));
        box.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                boxItemStateChanged(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(box, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(label))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(box, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(label)
                .addContainerGap(265, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void boxItemStateChanged(java.awt.event.ItemEvent evt) {//GEN-FIRST:event_boxItemStateChanged
        String fruit = box.getSelectedItem().toString();
        switch (fruit) {
            case "Apple":
                label.setIcon(new ImageIcon("/Volumes/Data/Github/BSc-IT-Study-Journey/Semester-4/Java/Unit-2/Unit2/src/unit2/Apple.jpg"));
                break;
            case "Mango":
                label.setIcon(new ImageIcon("/Volumes/Data/Github/BSc-IT-Study-Journey/Semester-4/Java/Unit-2/Unit2/src/unit2/Mango.jpg"));
                break;
        }
    }//GEN-LAST:event_boxItemStateChanged

   
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Program7().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JComboBox<String> box;
    private javax.swing.JLabel label;
    // End of variables declaration//GEN-END:variables
}

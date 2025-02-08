package assignment2;

import java.io.*;
import javax.swing.JFileChooser;
import javax.swing.JOptionPane;

public class Program9 extends javax.swing.JFrame {
    public Program9() {
        initComponents();
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        content = new javax.swing.JTextArea();
        menubar = new javax.swing.JMenuBar();
        fileMenu = new javax.swing.JMenu();
        FileMenuNewOption = new javax.swing.JMenuItem();
        FileMenuOpenOption = new javax.swing.JMenuItem();
        FileMenuSaveOption = new javax.swing.JMenuItem();
        editMenu = new javax.swing.JMenu();
        EditMenuCutOption = new javax.swing.JMenuItem();
        EditMenuCopyOption = new javax.swing.JMenuItem();
        EditMenuPasteOption = new javax.swing.JMenuItem();
        jMenuItem1 = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Notepad");

        content.setColumns(20);
        content.setRows(5);
        jScrollPane1.setViewportView(content);

        menubar.setToolTipText("");

        fileMenu.setText("File");

        FileMenuNewOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_N, java.awt.event.InputEvent.META_DOWN_MASK));
        FileMenuNewOption.setText("New");
        FileMenuNewOption.setToolTipText("Crete New File");
        fileMenu.add(FileMenuNewOption);

        FileMenuOpenOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_O, java.awt.event.InputEvent.META_DOWN_MASK));
        FileMenuOpenOption.setText("Open");
        FileMenuOpenOption.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                FileMenuOpenOptionActionPerformed(evt);
            }
        });
        fileMenu.add(FileMenuOpenOption);

        FileMenuSaveOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_S, java.awt.event.InputEvent.META_DOWN_MASK));
        FileMenuSaveOption.setText("Save");
        FileMenuSaveOption.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                FileMenuSaveOptionActionPerformed(evt);
            }
        });
        fileMenu.add(FileMenuSaveOption);

        menubar.add(fileMenu);

        editMenu.setText("Edit");

        EditMenuCutOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_X, java.awt.event.InputEvent.META_DOWN_MASK));
        EditMenuCutOption.setText("Cut");
        EditMenuCutOption.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EditMenuCutOptionActionPerformed(evt);
            }
        });
        editMenu.add(EditMenuCutOption);

        EditMenuCopyOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_C, java.awt.event.InputEvent.META_DOWN_MASK));
        EditMenuCopyOption.setText("Copy");
        EditMenuCopyOption.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EditMenuCopyOptionActionPerformed(evt);
            }
        });
        editMenu.add(EditMenuCopyOption);

        EditMenuPasteOption.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_V, java.awt.event.InputEvent.META_DOWN_MASK));
        EditMenuPasteOption.setText("Paste");
        EditMenuPasteOption.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EditMenuPasteOptionActionPerformed(evt);
            }
        });
        editMenu.add(EditMenuPasteOption);

        jMenuItem1.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_A, java.awt.event.InputEvent.META_DOWN_MASK));
        jMenuItem1.setText("Select All");
        jMenuItem1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem1ActionPerformed(evt);
            }
        });
        editMenu.add(jMenuItem1);

        menubar.add(editMenu);

        setJMenuBar(menubar);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 1084, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 609, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void EditMenuCopyOptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EditMenuCopyOptionActionPerformed
        content.copy();
    }//GEN-LAST:event_EditMenuCopyOptionActionPerformed

    private void EditMenuPasteOptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EditMenuPasteOptionActionPerformed
        content.paste();
    }//GEN-LAST:event_EditMenuPasteOptionActionPerformed

    private void EditMenuCutOptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EditMenuCutOptionActionPerformed
        content.cut();
    }//GEN-LAST:event_EditMenuCutOptionActionPerformed

    private void FileMenuSaveOptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_FileMenuSaveOptionActionPerformed
        JFileChooser filechooser = new JFileChooser();
        int result = filechooser.showSaveDialog(null);

        if (result == JFileChooser.APPROVE_OPTION) {
            String filePath = filechooser.getSelectedFile().getAbsolutePath();
            FileWriter fw = null;
            try {
                fw = new FileWriter(filePath);
                fw.write(content.getText());
            } catch (Exception e) {
                JOptionPane.showMessageDialog(rootPane, "Error While Saving File : " + e);
            } finally {
                if (fw != null) {
                    try {
                        fw.close();
                        JOptionPane.showMessageDialog(rootPane, "File Saved Successfully");
                    } catch (Exception e) {
                        JOptionPane.showMessageDialog(rootPane, "Error While Closing File : " + e);
                    }
                }
            }
        }
    }//GEN-LAST:event_FileMenuSaveOptionActionPerformed

    private void jMenuItem1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem1ActionPerformed
        content.selectAll();
    }//GEN-LAST:event_jMenuItem1ActionPerformed

    private void FileMenuOpenOptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_FileMenuOpenOptionActionPerformed
        JFileChooser filechooser = new JFileChooser();
        int result = filechooser.showOpenDialog(null);
        
        if (result == JFileChooser.APPROVE_OPTION) {
            String filePath = filechooser.getSelectedFile().getAbsolutePath();
            FileReader fr = null;
            try {
                fr = new FileReader(filePath);
                int i;
                String inFileContent = "";
                while ((i = fr.read()) != -1) {
                    inFileContent += (char)i;
                }
                content.setText(inFileContent);
            } catch (Exception e) {
                JOptionPane.showMessageDialog(rootPane, "Error While Reading File : " + e);
            } finally {
                if (fr != null) {
                    try {
                        fr.close();
                    } catch (Exception e) {
                        JOptionPane.showMessageDialog(rootPane, "Error While Opening File : " + e);
                    }
                }
            }
        }
    }//GEN-LAST:event_FileMenuOpenOptionActionPerformed

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Program9().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuItem EditMenuCopyOption;
    private javax.swing.JMenuItem EditMenuCutOption;
    private javax.swing.JMenuItem EditMenuPasteOption;
    private javax.swing.JMenuItem FileMenuNewOption;
    private javax.swing.JMenuItem FileMenuOpenOption;
    private javax.swing.JMenuItem FileMenuSaveOption;
    private javax.swing.JTextArea content;
    private javax.swing.JMenu editMenu;
    private javax.swing.JMenu fileMenu;
    private javax.swing.JMenuItem jMenuItem1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JMenuBar menubar;
    // End of variables declaration//GEN-END:variables
}

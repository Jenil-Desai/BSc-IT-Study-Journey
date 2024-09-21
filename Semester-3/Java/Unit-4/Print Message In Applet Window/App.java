import java.applet.*;
import java.awt.*;

/*<applet code="App" width=100 height=100></applet> */

public class App extends Applet {
    public  void Paint(Graphics g) {
        setBackground(Color.pink);
        setForeground(Color.blue);
        g.drawString("Hello World",50,40);
    }
}
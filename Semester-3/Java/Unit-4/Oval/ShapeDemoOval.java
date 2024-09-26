import java.applet.*;
import java.awt.*;

//<applet code="ShapeDemoOval" width=400 height=400></applet>

public class ShapeDemoOval extends Applet {
	public void paint(Graphics g) {
		g.drawOval(50,50,100,100);
		
		g.setColor(Color.pink);
		g.fillOval(50,160,100,100);
	}
}
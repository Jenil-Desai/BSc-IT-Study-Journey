import java.applet.*;
import java.awt.*;

//<applet code="ShapeDemoLineArc" width=400 height=400></applet>

public class ShapeDemoLineArc extends Applet {
	public void paint(Graphics g) {
		g.drawLine(40,60,170,180);
		g.drawLine(180,60,250,60); //Horizontal Line
		
		g.setColor(Color.pink);
		// g.drawArc(160,80,90,45,0,180);
		g.fillArc(160,80,90,45,0,180);
	}
}
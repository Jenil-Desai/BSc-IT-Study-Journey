import java.applet.*;
import java.awt.*;

//<applet code="ShapeDemoRect" width=400 height=400></applet>

public class ShapeDemoRect extends Applet {
	public void paint(Graphics g) {
		g.drawRect(60,70,50,90);
		
		g.setColor(Color.orange);
		g.fillRect(160,170,150,90);
	}
}
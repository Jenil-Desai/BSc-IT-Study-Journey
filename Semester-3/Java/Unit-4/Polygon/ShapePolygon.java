import java.applet.*;
import java.awt.*;

//<applet code="ShapePolygon" width=400 height=400></applet>

public class ShapePolygon extends Applet {
	public void paint(Graphics g) {
		int x[] = {90,60,130};
		int y[] = {30,90,90};
		
		g.drawPolygon(x,y,x.length);
	}
}
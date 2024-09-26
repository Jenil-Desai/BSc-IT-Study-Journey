import java.applet.*;
import java.awt.*;

//<applet code="ColorClass" width=400 height=400></applet>

public class ColorClass extends Applet {
	public void paint(Graphics g) {
		Color c1 = new Color(111,222,225);
		Font f1 = new Font("Arial Black",Font.BOLD,36);
		g.setColor(c1);
		g.setFont(f1);
		g.drawString("Hello World",50,50);
	}
}
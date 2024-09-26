import java.applet.*;
import java.awt.*;

//<applet code="FontClass" width=400 height=400></applet>

public class FontClass extends Applet {
	public void paint(Graphics g) {
		Font f1 = new Font("Arial Black",Font.BOLD,36);
		g.setFont(f1);
		g.setColor(Color.pink);
		g.drawString("Hello World",50,50);
	}
}
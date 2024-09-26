import java.applet.*;
import java.awt.*;

//<applet code="AppletLifeCycle" width=400 height=400></applet>

public class AppletLifeCycle extends Applet {
	public void init() {
		String s = " ";
		
		public void init() {
			s = s + "Start Called";
		}
		
		public void paint(Graphics g) {
			Font f1 = new Font("Arial Black",Font.BOLD,30);
			g.setFont(f1);
			g.drawString(s,80,90);
		}
		
		public void stop() {
			s = s + "Stop Called";
		}
		
		public void destroy() {
			s = s + "Destroy Called"
		}
	}
}
import java.io.IOException;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import static java.lang.System.out;

import java.sql.*;

@WebServlet(urlPatterns = {"/program9"})
public class program9 extends HttpServlet {
    protected void processRequest(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        
        String id = request.getParameter("id");
        String name = request.getParameter("name");
        String address = request.getParameter("address");
        String city = request.getParameter("city");
        String state = request.getParameter("state");
        String mobile = request.getParameter("mobile");
        String gender = request.getParameter("gender");
        String memberSince = request.getParameter("memberSince");
        
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "INSERT INTO unit3program7(id,name,address,city,state,mobile,gender,memberSince) VALUES(?,?,?,?,?,?,?,?)";
            PreparedStatement pr = con.prepareStatement(qry);
            
            pr.setString(1, id);
            pr.setString(2, name);
            pr.setString(3, address);
            pr.setString(4, city);
            pr.setString(5, state);
            pr.setString(6, mobile);
            pr.setString(7, gender);
            pr.setString(8, memberSince);
            
            int res = pr.executeUpdate();
            out.println(res + " Record Inserted.");
            
        } catch (Exception e) {
            out.println("Error While Inserting Record : " + e);
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}

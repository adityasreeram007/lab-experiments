import java.io.*;
import java.net.*;
class down{
    public static void main(String[] args) throws IOException
    {
        URL url=new URL("http://www.msec.edu.in/");
        BufferedReader bd=new BufferedReader(new InputStreamReader(url.openStream()));
        BufferedWriter bw=new BufferedWriter(new FileWriter("page.html"));
        String a;
        while((a=bd.readLine())!=null)
        {
            bw.write(a);
        }
        bw.close();
        System.out.println("Download Sucessful");
        }
}
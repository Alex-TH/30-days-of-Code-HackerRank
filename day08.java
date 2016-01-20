//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
   public static void main(String []argh)
   {
      Scanner in = new Scanner(System.in);
      Map agenda = new HashMap();
      int n=in.nextInt();
      in.nextLine();
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
         in.nextLine();
         agenda.put(name, phone);
      }
      while(in.hasNext())
      {
         String s=in.nextLine();
         if(agenda.containsKey(s)) {
             System.out.println(s + "=" + agenda.get(s));
         }
         else {
             System.out.println("Not found");
         }
      }
   }
}


import java.util.*;

public class MaxAreaHisto 
{
    public static int maxArea(int[] arr,int n)
  
  {
       
 Stack<Integer> ss=new Stack<Integer>();

 int area=0,i=0;
    
 int top;
       
 int artop;
        

       
 while(i<n)
       
 {
            
    if(ss.empty()||arr[ss.peek()]<=arr[i])
            
     ss.push(i++);

           
     else
           
 {
               
    top=ss.peek();
                
    ss.pop();
                
    artop=arr[top]*(ss.empty()?i:i-ss.peek()-1);
 

     if(area<artop)
     
       area=artop;
         
   }
       
 }
        
while(ss.empty()==false)
      
  {
            
      top=ss.peek();
            
       ss.pop();
              
artop=arr[top]*(ss.empty()?i:i-ss.peek()-1);
 
 
       if(area<artop)
        
        area=artop;
            

        }
        
return area;
   
 }
    
public static void main(String args[]) 
{
     Scanner sc=new Scanner(System.in);
  
   {
         int n=sc.nextInt();
        
 int[] arr=new int[n];
        
 for(int i=0;i<n;i++)
        
 {
             arr[i]=sc.nextInt();
        
 }
     
  
  System.out.println("Maximum area of histogram is "+maxArea(arr,n));
  
  }

}

}
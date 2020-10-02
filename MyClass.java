import java.util.*; 

import java.lang.*;
 
import java.io.*; 

public class MyClass {
 
   public static int count(int[] arr,int low,int high)
 
   {
        if(high<low)
       
            return 0;
  
      
        
            if(high==low)
       
            return low;
 
       
        
           int mid=low+(high-low)/2;
        
       
          if (mid < high && arr[mid+1] < arr[mid]) 
          
           return (mid + 1);
       
     
           
          if (mid > low && arr[mid] < arr[mid - 1]) 
           
            return mid; 
  
          
          
          if (arr[high] > arr[mid]) 
            
            return count(arr, low, mid - 1); 

  
        
            return count(arr, mid + 1, high); 
    
}
  
  public static void main(String args[])
 {
      Scanner sc=new Scanner(System.in);
 
     int n=sc.nextInt();
     
 int[] arr=new int[n];
      
for(int i=0;i<n;i++)
     
 {
          arr[i]=sc.nextInt();
  
    }
     
 System.out.println(count(arr,0,n-1));
   
 }

}
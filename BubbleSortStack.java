import java.util.*;
  
public class BubbleSortStack 
{ 
    
    static void bubbleSortStack(int arr[], int n) 
    { 
        Stack<Integer> s1 = new Stack<>(); 
          
    
        for (int num : arr) 
            s1.push(num);        
          
        Stack<Integer> s2 = new Stack<>(); 
          
        for (int i = 0; i < n; i++)  
        { 
    
            if (i % 2 == 0) 
            { 
                while (!s1.isEmpty()) 
                { 
                    int t = s1.pop(); 
                      
                    if (s2.isEmpty()) 
                        s2.push(t);                     
                    else 
                    { 
                        if (s2.peek() > t) 
                        { 
                            // swapping 
                            int temp = s2.pop(); 
                            s2.push(t); 
                            s2.push(temp); 
                        } 
                        else
                        { 
                            s2.push(t); 
                        } 
                    } 
                } 
                  
             
                arr[n-1-i] = s2.pop(); 
            }             
            else
            { 
                while(!s2.isEmpty()) 
                { 
                    int t = s2.pop(); 
                      
                    if (s1.isEmpty()) 
                        s1.push(t); 
                      
                    else 
                    { 
                        if (s1.peek() > t) 
                        { 
            
                            int temp = s1.pop(); 
                              
                            s1.push(t); 
                            s1.push(temp); 
                        } 
                        else
                            s1.push(t); 
                    } 
                } 
                  
             
                arr[n-1-i] = s1.pop(); 
            } 
        }         
        System.out.println(Arrays.toString(arr)); 
    } 
      
    public static void main(String[] args)  
    {  Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        bubbleSortStack(arr, n); 
    } 
} 
import java.io.*;
import java.util.*;

public class Main {

  public static void targetSumPair(int[] arr, int target){
   
       Arrays.sort(arr);
       int i=0;
       int j=arr.length-1;
       while(i<j){
           if(arr[i]+arr[j]<target){
              i++; 
           }
         else  if(arr[i]+arr[j]>target){
             j--;
               
           }
           else{
               System.out.println(arr[i]+", "+arr[j]);
               i++;
               j--;
           }
          
       }
       
    
    

  }
  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for(int i = 0 ;i < n; i++){
      arr[i] = scn.nextInt();
    }
    int target = scn.nextInt();
    targetSumPair(arr,target);
  }

}

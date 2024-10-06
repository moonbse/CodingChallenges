package SlidingWindow;

import java.util.HashSet;
import java.util.Set;

public class sol1186 {
    
    public int countGoodSubstrings(String s) {
        
        int k = 3;
        int i = 0, j = 0; 
        int n = s.length();

        Set<Character> ss = new HashSet<>();

        int count = 0;
        

        while(j < n){
            
            if(j-i+1 < k){
               if(ss.contains(s.charAt(j))){
                 while(s.charAt(i) != s.charAt(j)){
                    i++;
                 }
                 i++;
               }
               ss.add(s.charAt(j));
               j++;
            }else{
                if(ss.contains(s.charAt(j))){
                 while(s.charAt(i) != s.charAt(j)){
                    ss.remove(s.charAt(i));
                    i++;

                 }
                 ss.remove(s.charAt(i));
                 i++;
               }
               ss.add(s.charAt(j));

               if(ss.size() == 3){
                   count++;
                   ss.remove(s.charAt(i));
                   i++;
                   j++;
               }else{
                   j++;
               }
                

            }
        }
        return count;
        
    }
}

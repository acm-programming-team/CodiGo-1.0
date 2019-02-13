import java.util.*;
class HelpSimrantoherFindRaj
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        
        int n=in.nextInt();  // n is number of students // input taken from the user
        
        int maxmarks=0,uniqueid=-1;   
        
        for(int i=1;i<=n;i++)
        {
            int english=in.nextInt();
            int german=in.nextInt();
            int math=in.nextInt();
            int history=in.nextInt(); // input taken from user //four subjects marks
            
            int totalmarks=english+german+math+history; //total the marks obtained
           
            if(totalmarks>=maxmarks)   // compare total marks obtained by current student(i) with the maximum marks 
            { 
                maxmarks=totalmarks;  // if condition is true then just set the value of total marks to maximum 
                uniqueid=i;    //to update the uniqueId of the student with maximum marks
            }
        }
        
        System.out.println(uniqueid);
    }
}
        
                
import java.util.*;
class hbd
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your age");
        int n=sc.nextInt();
        String s="HAPPY BIRTHDAY";
        for(int x=0;x<14;x++)
        {
            char ch=s.charAt(x);
            if(ch==' ')
            {
                System.out.println();
            continue;}
            for(int y=0;y<n;y++)
            {
                System.out.print(ch);
            }
            System.out.println();
        }
    }
}
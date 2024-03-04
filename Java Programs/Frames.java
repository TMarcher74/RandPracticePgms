class Frame{
    int fnumber;
    int data;
}

public class FrameSort{
    public static void main(String []args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of packets: ");
        int n = sc.nextInt();
        System.out.println("Enter the frame details: ");
        Frame frames[]= new Frame[n];
        for(int i=0; i<n; i++){
            frames[i]=new Frame();
            
        }

    }
}
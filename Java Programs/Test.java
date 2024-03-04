import java.util.*;

class Book{
    int ID;
    String title;
    double cost;
    int qty;
    double totalcost;

    public void read(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter the ID: ");
        ID = sc.nextInt();
        System.out.println("\nEnter the title: ");
        title = sc.nextLine();
        System.out.println("\nEnter the cost: ");
        cost = sc.nextDouble();
        System.out.println("\nEnter the quantity: ");
        qty = sc.nextInt();
        totalcost = qty * cost;
        sc.close();
    }

    public void write(){
        System.out.println(ID + "\t" + title + "\t" + qty + "\t" + cost +"\t"+ totalcost);
    }
}

class Test{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of books: ");
        int n= sc.nextInt();

        Book[] b= new Book[n];
        
        for(int i=0; i< n; i++){
            b[i]=new Book();
            b[i].read();
        }

        System.out.println("ID" + "\t" + "Title" + "\t" + "qty" + "\t" + "cost" +"\t"+ "totalcost");
        for(int i=0; i< n; i++){
            b[i].write();
        }
        sc.close();
    }
}
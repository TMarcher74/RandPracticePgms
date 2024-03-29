import java.util.Scanner;
import java.util.Arrays;
public class BellFord{
	static int N;
	static int graph[][];
	public static void bellmanford(int src){
		int dist[] = new int[N];
		Arrays.fill(dist,Integer.MAX_VALUE);
		dist[src]=0;
		for(int i=0;i<N;i++){
			for(int u =0;u<N;u++){
				for(int v=0;v<N;v++){
					if((dist[u]<Integer.MAX_VALUE) && (graph[u][v]!=0) && (dist[u]+graph[u][v]<dist[v])){
						dist[v]=dist[u]+graph[u][v];
					}
				}
			}		
		}
		for(int u =0;u<N;u++){
			for(int v=0;v<N;v++){
				if((dist[u]<Integer.MAX_VALUE) && (graph[u][v]!=0) && (dist[u]+graph[u][v]<dist[v])){
					System.out.println("Graph has Negative Cycle");
					System.exit(0);
				}
			}
		}
		System.out.println("Vertex\tDistance");
		for(int i=0;i<N;i++){
			if(i!=src){
				System.out.println((i+1)+"\t"+dist[i]);
			}
		}
	
	}
	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter The Number Of Vertices : ");
		N = sc.nextInt();
		graph = new int[N][N];
		System.out.println("Enter The Weight Matrix : ");
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				graph[i][j] = sc.nextInt();
		System.out.print("Enter The Source Vertex : ");
		int src = sc.nextInt();
		bellmanford(src-1);
	}
}
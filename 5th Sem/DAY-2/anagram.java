import java.util.Scanner;
import java.util.Arrays;
class anagram{
	static void println(Object line){
		System.out.println(line);
	}
	static void print(Object line){
		System.out.print(line);
	}
	static int isAnagram(String x[],String y[]){
		if(x.length == y.length){
			for(int i =0;i< x.length;i++){
				if(x[i].equals(y[i])){continue;}
				else{
					return 0;
				}
			}
			return 1;
		}
		else{
			return 0;
		}
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		String mom = sc.next();
		String dad = sc.next();
		String x[] = mom.split("");
		Arrays.sort(x);
		String y[] = dad.split("");
		Arrays.sort(y);
		if(isAnagram(x,y) == 1){
			println("Right");
		}
		else{
			println("Shhhh");
		}
		sc.close();
	}
}

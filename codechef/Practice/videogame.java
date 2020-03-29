import java.util.Scanner;

class Crane{
	private int pos;
	private int max_pos;
	private Boolean loaded;
	 Crane(int N){
		pos=0;
		max_pos=N-1;
		loaded=false;
	}
	void moveLeft(){
		if(pos==0)
			return;
		pos--;
	}
	void moveRight(){
		if(pos==max_pos)
			return;
		pos++;
	}
	void pickUp(Stacks s){
		if(loaded)
			return;
		loaded=s.pickUpBox(pos);
	}
	void drop(Stacks s){
		if(!loaded)
			return;
		loaded=s.DropBox(pos);
	}
}

class Stacks{
	int[] s;
	int H,top;
	Stacks(int N, int H){
		s = new int[N];
		this.H=H;
		top=0;
	}
	void add(int crates){
		s[top]=crates;
		top++;
	}
	Boolean pickUpBox(int i){
		if(s[i]==0){
			return false;
		}
		s[i]--;
		return true;
	}
	Boolean DropBox(int i){
		if(s[i]==H){
			return true;
		}
		s[i]++;
		return false;
	}
	void Display(){
		for(int i=0;i<top;i++)
			System.out.print(s[i]+" ");
	}
}

public class videogame{

	public static void main(String args[]){

		Scanner s = new Scanner(System.in);
		int N = s.nextInt(), H = s.nextInt();
		Stacks mystack = new Stacks(N,H);
		Crane mycrane = new Crane(N);

		for(int i=0;i<N;i++){
			mystack.add(s.nextInt());
		}

		int num;
		while((num=s.nextInt())!=0){
			if(num==1)
				mycrane.moveLeft();
			else if(num==2)
				mycrane.moveRight();
			else if(num==3){
				mycrane.pickUp(mystack);
			}
			else if(num==4)
				mycrane.drop(mystack);
		}

		mystack.Display();

	}
}
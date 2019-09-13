
public class Bankaccount{
private long id;
private double balance;

public Bankaccount (long i, double b)
{
	this.id = i;
	this.balance = b;
}

public void deposit (double amount)
{
	balance += amount;
}
public void withdraw (double amount)
{
	if (amount > balance)
	{
		System.out.println("Error!!! :(");
		
	}
	else 
	{
		balance -= amount;
	}
}
public long getid()
{
	return id;
}
public double getbalance()
{
	return balance;
}

}

public static void main(String[] args){
    Bankaccount account = new Bankaccount(00101,1000);
    account.deposit(500);
    account.withdraw(50);

    System.out.println("Bankaccount " + account.getid());
    System.out.println("Has a balance of " + account.getbalance());
 }

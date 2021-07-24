public class Account {
    int number;//class state variable
    float balance;//class state variable
    int numTransaction = 0;
    float[] transAmount;
    char[] transType;
    static int numOfAccount = 0;
    
    public static void main(String args[]) {
       Account account = new Account();//Account is calss account is a instance 
       //account.transType = new char[100];
       //account.transAmount = new float[100];
       
       Account.numOfAccount =  Account.numOfAccount + 1;
       account.initialize(1234);
       account.deposit(100);
       account.withdraw(50);
       account.deposit(500);
       account.withdraw(50);
       account.printHistroy(account.transType,account.transAmount);


       Account account1 = new Account();
       Account.numOfAccount =  Account.numOfAccount + 1;
       account1.initialize(1235);
       account1.deposit(1000);
       account1.withdraw(500);
       account1.deposit(5000);
       account1.withdraw(50);
       account.printHistroy(account1.transType,account1.transAmount);

       Account.printNumAccount();
      
    }
    static  void printNumAccount() {
        System.out.println("num of account ="+Account.numOfAccount);
    }
    void initialize (int num) {
       transType = new char[100];
       transAmount = new float[100];
       numTransaction = 0;
       number = num;

    }

    void withdraw(float amount) {
        if (balance >amount) {
            System.out.println("withdrawing amount "+amount);
            transAmount[numTransaction] = amount;
            transType[numTransaction] = 'W';
            balance = balance - amount;
            numTransaction++; 

        } else {
            System.out.println("Balance low! cannot withdraw amount "+amount);
        }
    }

    void deposit(float amount) {
       System.out.println("depositing amount"+amount);
       transAmount[numTransaction] = amount;
       transType[numTransaction] = 'D';
       balance = balance + amount; 
        numTransaction++;  
    }
    void printHistroy(char transType[], float transAmount[]) { 
        System.out.println("======================================================");
        System.out.println("  account Transaction number :"+number);
        System.out.println("======================================================");
        System.out.println("\tSl.No \t\t Description \t Deposit\t Withdraw\t Balance");
        float bal = 0.0f;
        for (int i=0 ; i<numTransaction ; i++) {
            if ( transType[i] == 'D') {
                bal = bal + transAmount[i];
                System.out.println("\t"+ i + "\t\t deposit \t" +transAmount[i] + " \t\t" +bal);
              
            } else {
                bal=bal + transAmount[i];
                System.out.println("\t"+ i + "\t\t Withdrawl \t \t \t "+ +transAmount[i] + " \t\t" +bal);
              
            }

        }
        System.out.println("==========================================================");
        

    }

}

public class IntegerObject {
    int num ;
    
    

    public static void main (String args[]) {
        IntegerObject i1 = new  IntegerObject();
        i1.setNum(20);
        i1.powers(5);
        i1.isNegative();
        i1.isPossitive();
        i1.factorial();
        i1.isEven();
        i1.isOdd();
        i1.isPrime();
        i1.isSumOfDigit();
        i1.isNatural();
        i1.isArmstrong();
        i1.isStrong();
        i1.reverse();
        i1.isSumOfEven();
        i1.isSumOfOdd();
        i1.add(5);
        i1.mul(3);
        i1.div(2);
        i1.sub(2);

        System.out.println("====================================");

        IntegerObject i2 = new IntegerObject(8);
        //i2.setNum(140);
        i2.powers(1);
        i2.isNegative();
        i2.isPossitive();
        i2.factorial();
  
    }
    IntegerObject(int n) {
        num = n;
    }
    IntegerObject() {
       
    }
    void setNum(int a) {
        num = a;
    }
    

    void add(int a){
        System.out.println("addition of a num is :"+(a+num));
    }

    void sub(int a){
        System.out.println("addition of a num is :"+(num-a));
    }
    void mul(int a){
        System.out.println("addition of a num is :"+(num*a));
    }
    void div(int a){
        System.out.println("addition of a num is :"+(num/a));
    }
    /*void sizeofint() {
        System.out.println("size of integer is "+sizeof(Intger));

    }*/
    void powers (int power) {
        int powerOfNum = 1;
        for (int i=0 ;i< power ;i++) {
            powerOfNum *= num;
        }
        System.out.println("power of a number ="+powerOfNum);


    }
    void isNegative() {
        if ( num < 0) {
            System.out.println("given num is negative");
        } else {
            System.out.println("given num is not negative");

        }


    }

    void isPossitive() {
        if ( num > 0) {
            System.out.println("given num is possitive");
        } else {
            System.out.println("given num is not  possitive");

        }
        
    }

    void isEven() {
        if ( num % 2 == 0) {
            System.out.println("given num is Even");
        }
        
    }

    void isOdd() {
        if ( num % 2 != 0) {
            System.out.println("given num is Odd");
        }
        
    }

    void isPrime() {
        int flag = 0;
        for ( int i=2 ;i < num/2 ;i++) {
            if ( num %2 == 0  ) {
                flag = 1;
                break;
            }
        }
        if ( flag == 0) {
            System.out.println("given num is prime");
        } else {
            System.out.println("given num is not prime");
        }
    }

    void isArmstrong() {
        int temp = num;
        int temp1 = num;
        int numOfDigit = 0;
        int n;
        int armS = 0;
        while ( temp > 0 ) {
            numOfDigit++;
            temp /= 10;
        }
        
        while ( temp1 > 0 ) {
            n = temp1 % 10;
            temp1 /= 10;
            int mul = 1;
            for (int i =0 ; i<numOfDigit ;i++) {
                mul *= n;
            }
            armS += mul;
        }
        if ( armS == num) {
            System.out.println("given num is atrmstrong Number");
        } else {
            System.out.println("given num is not atrmstrong Number");

        }
    }

    void factorial () {
        int fact = 1;
        for ( int i=1 ; i<num ;i++) {
            fact *= i;
        }
        System.out.println("Factorial of a number is "+fact);
    }

    void isStrong() {
        int temp1 = num; 
        int n;
        int strongNum = 0;
        while ( temp1 > 0 ) {
            n = temp1 % 10;
            temp1 /= 10;
            int mul = 1;
            for (int i =1 ; i<n ;i++) {
                mul *= i;
            }
            strongNum += mul;
        }
        if ( strongNum == num) {
            System.out.println("give num is strong num");
        } else {
            System.out.println("give num is not  strong num");

        }

    }

    void isNatural() {
        if( num > 0 ) {
            System.out.println("give num is Natural num");
        } else {
            System.out.println("give num is not natural num");
        }

    }

    void isSumOfDigit() {
        int temp1 = num;
        int sumOfDigit = 0;
        int n;
        while ( temp1 > 0 ) {
            n = temp1 % 10;
            sumOfDigit += n;
            temp1 /= 10;
        }
        System.out.println("sum of the digit is "+sumOfDigit);
    }

    void reverse() {
        int temp = num;
        int digit;
        int reverseOfNum = 0;
        while (temp != 0) {
            digit = temp % 10; 
            reverseOfNum = reverseOfNum * 10 + digit;
            temp /= 10;

        }
        System.out.println("Reverse of a num is "+reverseOfNum);


    }

    void isSumOfEven() {
        int temp1 = num;
        int sumOfEvenDigit = 0;
        int n;
        while ( temp1 > 0 ) {
            n = temp1 % 10;
            if( n % 2 == 0){
                sumOfEvenDigit += n;
            }
           
            temp1 /= 10;
        }
        System.out.println("sum of the Even digit is "+sumOfEvenDigit);

    }

    void isSumOfOdd() {
        int temp1 = num;
        int sumOfOddDigit = 0;
        int n;
        while ( temp1 > 0 ) {
            n = temp1 % 10;
            if( n % 2 != 0){
                sumOfOddDigit += n;
            }
           
            temp1 /= 10;
        }
        System.out.println("sum of the Even digit is "+sumOfOddDigit);

    }

    void getNDigit() {

    }
}

    

    

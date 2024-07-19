public class allPrimeSum1 {
    public static void main(String[] args) {
        int number = 13;
        int sum = 0;

        if (number <= 1) {
            System.out.println("Number is required greater than 1 to sum of all prime numbers");
        }

        else {
            for (int i = 2; i <= number; i++) {
                boolean isPrime = true;
                for (int j = 2; j <= Math.sqrt(i); j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;

                    }
                }
                if (isPrime) {
                    sum += i;
                }
            }
            System.out.println("The sum of all prime numbers upto " + number + " is " + sum);
        }
    }

}

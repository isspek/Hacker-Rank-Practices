import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input=new Scanner(System.in);
        BigInteger firstBi = input.nextBigInteger();
        BigInteger secondBi = input.nextBigInteger();
        System.out.println(firstBi.add(secondBi));
        System.out.println(firstBi.multiply(secondBi));
    }
}
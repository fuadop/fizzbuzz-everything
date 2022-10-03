package fizzbuzzeverything;

public class Main {
    static final StringBuilder output = new StringBuilder();

    public static void main(String[] args) {
        for (int i = 1; i <= 100000; i++) {
            Main.output.setLength(0);

            if (i % 3 == 0) output.append("Fizz");
            if (i % 5 == 0) output.append("Buzz");

            if (output.isEmpty()) output.append(i);

            System.out.println(output);
        }
    }
}
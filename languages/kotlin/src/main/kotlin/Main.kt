const val ITERATIONS = 100000

fun main() {
    var output: String

    for (i in 1..ITERATIONS) {
        output = ""

        if (i % 3 == 0) output += "Fizz"
        if (i % 5 == 0) output += "Buzz"
        if (output.isEmpty()) output += i
        println(output)
    }
}

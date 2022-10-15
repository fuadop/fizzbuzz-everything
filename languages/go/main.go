package main

import "fmt"

func main() {
	for i := 0; i <= 100000; i++ {
		output := ""

		if i%3 == 0 {
			output += "Fizz"
		}
		if i%5 == 0 {
			output += "Buzz"
		}
		if output == "" {
			output = fmt.Sprint(i)
		}

		fmt.Println(output)
	}
}

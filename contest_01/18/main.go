package main

import (
	"fmt"
)

func convertToTitle(n int) string {
	result := ""
	for n > 0 {
		n-- 
		remainder := n % 26
		result = string('A'+remainder) + result
		n /= 26
	}
	return result
}

func main() {
	var n int
	fmt.Scan(&n)

	if n < 1 || n > (1<<31)-1 {
		return
	}

	columnName := convertToTitle(n)
	fmt.Printf(columnName)
}

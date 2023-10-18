package main

import (
	"fmt"
	"sort"
	"strconv"
)

func isPermutationPossible(num1, num2 int64) bool {
	str1 := strconv.FormatInt(num1, 10)
	str2 := strconv.FormatInt(num2, 10)
	str1Sorted := sortString(str1)
	str2Sorted := sortString(str2)
	if str1Sorted == str2Sorted {
		return true
	} else {
		return false
	}
}

func sortString(s string) string {
	slice := []rune(s)

	sort.Slice(slice, func(i, j int) bool {
		return slice[i] < slice[j]
	})

	return string(slice)
}

func main() {
	var num1, num2 int64
	fmt.Scan(&num1, &num2)

	if isPermutationPossible(num1, num2) {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}

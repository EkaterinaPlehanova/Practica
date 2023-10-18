package main

import (
	"fmt"
	"strings"
)

func main() {

	wordCount := make(map[string]int)

	var input string
	for {
		fmt.Scan(&input)
		if input == "end" {
			break
		}
		wordCount[input]++
	}

	var result []string
	for word, count := range wordCount {
		if count > 1 {
			result = append(result, word)
		}
	}


	sortStrings(result)

	fmt.Println(strings.Join(result, " "))
}

func sortStrings(arr []string) {
	for i := 0; i < len(arr)-1; i++ {
		for j := i + 1; j < len(arr); j++ {
			if arr[i] > arr[j] {
				arr[i], arr[j] = arr[j], arr[i]
			}
		}
	}
}

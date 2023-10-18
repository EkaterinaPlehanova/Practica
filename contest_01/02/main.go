package main

import (
	"fmt"
	"math"
)

func main() {
	var a float64 = 0.5 * 365
	var b float64 = a / 32
	var c float64 = a / 20
	fmt.Println(a, math.Ceil(b), math.Ceil(c))
}

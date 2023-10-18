package main

import (
"fmt"
"math"
)

func main() {
    var a int
    fmt.Scanln(&a)
    arr := make([]float64, a)
    for i := 0; i < len(arr); i++ {
        fmt.Scan(&arr[i])
    }

    for i := 0; i < a; i++ {
    if i == 0 || i == (len(arr)-1) {
        fmt.Print(arr[i], ".0 ")
        } else {
        j := (arr[i-1] + arr[i] + arr[i+1]) / 3
         if j == math.Trunc(j) {
            fmt.Print(j, ".0 ")
        } else {
        fmt.Print(j, " ")
        }
        }   
    }
}

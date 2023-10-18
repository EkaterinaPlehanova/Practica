package main

import "fmt"

func main() {
    var a int64
    banknotes := [5]int64{5000, 1000, 500, 200, 100}
    counter := [5]int64{0, 0, 0, 0, 0}
    fmt.Scanln(&a)
    i := 0
    for a != 0 {
        if a >= banknotes[i] {
            a -= banknotes[i]
            counter[i] += 1
        } else {
            i += 1
        }
    }
    for i := range counter {
        fmt.Print(counter[i], " ")
    }
}

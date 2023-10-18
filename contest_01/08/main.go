package main
import  "fmt"

func main() {
    
var numbers [3]int
for i := 0; i < len(numbers); i++ {


fmt.Scan(&numbers[i])
}
max := numbers[0]
   for _, element := range numbers {
      if element > max {
         max = element
      }
   }

   fmt.Println(max)
}

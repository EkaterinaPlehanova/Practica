package main
 
import "fmt"
 
func main() {
   var swim, wings, longNeck string;
    fmt.Scanln(&swim,&wings,&longNeck); 
    if swim =="Нет"{
        if wings =="Нет"{
           if longNeck =="Нет"{ 
         fmt.Println("Кот")}
        }
    }
    if swim =="Нет"{
        if wings =="Нет"{
           if longNeck =="Да"{ 
         fmt.Println("Жираф")}
        }
    } 
    if swim =="Нет"{
        if wings =="Да"{
           if longNeck =="Нет"{ 
         fmt.Println("Курица")}
        }
    }  
    if swim =="Нет"{
        if wings =="Да"{
           if longNeck =="Да"{ 
         fmt.Println("Страус")}
        }
    }
    if swim =="Да"{
        if wings =="Нет"{
           if longNeck =="Нет"{ 
         fmt.Println("Дельфин")}
        }
    }
    if swim =="Да"{
        if wings =="Нет"{
           if longNeck =="Да"{ 
         fmt.Println("Плезиозавры")}
        }
    }
    if swim =="Да"{
        if wings =="Да"{
           if longNeck =="Нет"{ 
         fmt.Println("Пингвин")}
        }
    }
    if swim =="Да"{
        if wings =="Да"{
           if longNeck =="Да"{ 
         fmt.Println("Утка")}
        }
    }
}

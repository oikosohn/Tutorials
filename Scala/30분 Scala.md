# 변수와 계산

변수 계산

```
object LearnScala {
    def main(args: Array[String]): Unit = {
         // 1(Int 리터럴)과 같은 원시 타입은 객체이다, 스칼라의 원시 타입은 컴파일 이후에는 성능을 위해 자바 원시 타입을 사용할 수 있는 경우 자바 원시 타입을 사용한다.
        println( 1 + 2 )
        println( (1).+(2) ) // method 호출
    }
}
```

변수와 상수

```
object LearnScala {
    def main(args: Array[String]): Unit = {
        var x = 1 + 2
        x = 3 * 4
        println( x )
        
        val y = 1 + 2
        // y = 3 * 4 // 이 줄은 상수에 값을 대입해서 에러가 나기 때문에 지워야 합니다.
        println( y )
        
        // 한 번에 여러개의 변수를 선언하면서 값을 대입할 수도 있습니다.
        var a, b, c = 5
        println( a ) // 5
        println( b ) // 5
        println( c ) // 5
    }
}
```

변수 출력하기

```
object LearnScala {
    def main(args: Array[String]): Unit = {
        var x = 10
        var y = 1
        
        // ① println
        println("① " + x + " is bigger than " + y)  
        
        // ② 문자열 앞에 s를 쓰면 $를 쓰고 변수이름을 바로 쓸 수 있습니다.
        println(s"② $x is bigger than $y")
        
        // ③ 수식을 입력하고 싶으면 ${ }사이에 식을 넣으면 됩니다.
        println(s"③ $x + $y = ${ x + y }") // 10 + 1 = 11
        
        // ④ printf도 사용 가능합니다.
        //java.lang.*은 자동으로 import됩니다.
        //java.lang.Math도 포함입니다.
        printf("④ Pi is %f",Math.PI)
    }
}
```

# 편리한 스칼라


# 메소드와 함수


# 튜플


# 제어문


# Collection


# 클래스
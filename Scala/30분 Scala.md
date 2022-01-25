# 변수와 계산

## 변수 계산
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
         // 1(Int 리터럴)과 같은 원시 타입은 객체이다, 스칼라의 원시 타입은 컴파일 이후에는 성능을 위해 자바 원시 타입을 사용할 수 있는 경우 자바 원시 타입을 사용한다.
        println( 1 + 2 )
        println( (1).+(2) ) // method 호출
    }
}
```

## 변수와 상수
```scala
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

## 변수 출력하기
```scala
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

## Range와 List
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        // ① to를 이용하면 1부터 10을 포함하는 Range를 생성합니다.
        val range1 = 1 to 10
        println(s"① 1 to 10 →\n\t $range1")
        
        // ② until을 이용하면 마지막 숫자를 포함하지 않는 Range를 생성합니다.    
        val range2 = 1 until 10
        println(s"② 1 until 10 →\n\t $range2")
        
        // ③ by를 이용하면 숫자를 건너 띄는 Range를 생성합니다.
        val range3 = 1 until 10 by 3
        println(s"③ 1 until 10 by 3 →\n\t $range3")
        
        // ④ toList를 통해 List로 변환합니다.
        println(s"④ range1.toList →\n\t ${range1.toList}")
        
        println(s"④ range3.toList →\n\t ${range3.toList}")
        
        // ⑤ filter: 조건에 맞는것만 모으기(4 이상인것만 모으기)
        val moreThan4 = range1.filter(_ > 4)  
        println(s"⑤ range1.filter(_ > 4) →\n\t $moreThan4")
        
        // ⑥ map - 각 아이템의 값을 변경하기
        val doubleIt = range1.map(_ * 2)  
        println(s"⑥ range1.map(_ * 2) →\n\t $doubleIt")
    }
}
```

## 숫자 다루기
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        val num = -5  
        val numAbs = num.abs // 절대값
        val max5or7 = numAbs.max(7) // 5(numAbs)와 7 사이의 최대값  
        val min5or7 = numAbs.min(7) // 5(numAbs)와 7 사이의 최소값
        println(numAbs) // 5  
        println(max5or7) // 7   
        println(min5or7) // 5  
    }
}
```

## 문자열 다루기
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        // ① 뒤집기
        val reverse = "Scala".reverse 
        println(s"① $reverse")
        
        // ② 첫글자를 대문자로
        val cap = "scala".capitalize
        println(s"② $cap")
        
        // ③ 7번 반복
        val multi = "Scala! " * 7
        println(s"③ $multi") 
        
        // ④ 정수로 변환
        val int = "123".toInt
        println(s"④ $int")
    }
}
```

# 메소드와 함수

## 메소드 정의
```scala
object LearnScala {
    // ① 일반적인 메소드
    def add(x:Int, y:Int):Int = {
        return x + y        
    }
    
    // ② return을 생략한 메소드
    def addWithoutReturn(x:Int, y:Int) = { // x + y는 int이므로 return타입은 Int로 결정됩니다.
        x + y // return을 적어주지 않아도 마지막 값이 return값입니다.
    }
    
    // ③ 메소드가 한 줄일 경우 중괄호{}를 생략해도 됩니다.
    def addWithoutBlock(x:Int, y:Int) = x + y
    
    def main(args: Array[String]): Unit = {
        println(s"① ${add(1,2)}")
        println(s"② ${addWithoutReturn(1,2)}")
        println(s"③ ${addWithoutBlock(1,2)}")          
    }
}
```

## 익명함수1
```scala
object LearnScala {
    
    // 매개변수로 받은 익명함수에 1과 2를 넣어서 실행하는 메소드
    def doWithOneAndTwo(f: (Int, Int) => Int) = {  
        f(1, 2) //return은 생략되었지만, f(1, 2)의 결과가 return
    }
    
    def main(args: Array[String]): Unit = {
        // ① 명시적으로 타입을 선언하는 익명함수
        val call1 = doWithOneAndTwo((x: Int, y: Int) => x + y)
        
        // ② 코드4번째 줄에서 익명함수의 매개변수 타입(Int, Int)을 이미 정했기 때문에 생략
        val call2 = doWithOneAndTwo((x, y) => x + y)  
        
        // ③ 이렇게 요약할 수도 있음
        val call3 = doWithOneAndTwo(_ + _) // 매개변수의 순서대로 _에 대입됨
        
        println(call1, call2, call3)
    }
}
```

## 익명함수2
```scala
object LearnScala {    
    // ① 메소드를 정의하는 방식
    def add1(x:Int, y:Int) = x + y 
    
    // ② 익명함수
    val add2 = (x:Int, y:Int) => x + y 
    
    // ③ 익명함수를 정의하는 다른 방식
    val add3:(Int,Int)=>Int = _ + _ 
    
    // ④ 익명함수를 정의하는 또다른 방식(잘 사용 안함)
    val add4 = (_ + _):(Int,Int)=>Int 
    
    def main(args: Array[String]): Unit = {
        // 모두 두 숫자를 더해주는 역할을 하므로 같은 결과를 출력
        println(s"① ${add1(42,13)}")  
        println(s"② ${add2(42,13)}")  
        println(s"③ ${add3(42,13)}")  
        println(s"④ ${add4(42,13)}")  
    }
}
```


# 튜플

## 튜플
- Tuple1부터 Tuple22까지 사용할 수 있고 그 이상을 쓰려면 컬렉션과 같은 다른 자료구조를 사용
- 튜플의 값에 접근하려면 .\_1, .\_2와 같은 메소드를 사용
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        val t1 = new Tuple3(1, "hello", true)
        val t2 = (1, "hello", true)
        
        println(t2)
        
        var numbers = (1,2,3,4)
        val sum = numbers._1 + numbers._2 + numbers._3 + numbers._4
        println(sum)
    }
}
```

여러개의 값 리턴
```
object LearnScala {
    def swap(x:String, y:String) = (y, x)  
    
    def main(args: Array[String]): Unit = {
        val (a,b) = swap("hello","world")
        println(a, b)
    }
}
```

변수에 값 넣기
- 튜플을 이용해서 한 번에 여러 개의 변수에 값 삽입
```
object LearnScala {
    def main(args: Array[String]): Unit = {
        
        var (x, y, z, c, python, java) = (1, 2, 3, true, false, "no!")  
        println(x, y, z, c, python, java)  
        
    }
}
```

# 제어문

반복문
```
object LearnScala {
    def main(args: Array[String]): Unit = {
        // ① while문
        var i, sum = 0  
        while ( i < 10) {  
            sum += i  
            i+=1 
        }  
        println(s"① $sum")
        
        // ② for문
        sum = 0  
        for ( i <- 0 until 10) {  
            sum += i  
        }  
        println(s"② $sum")  
        
        //③ 가장 스칼라스럽게 합을 구하는 방법
        sum = (0 until 10).sum  
        println(s"③ $sum")
    }
}
```

중첩된 for문
```
object LearnScala {
    def main(args: Array[String]): Unit = {
        for( a<- 1 to 3){
            for( b <- 10 to 12){
                println(a,b)
            }
        }
        println("중첩된 for문 대신 아래와 같이 쓸 수 있습니다.")
        for( a <- 1 to 3; b <- 10 to 12){
            println(a,b)
        }
    }
}
```

if문
```
object LearnScala {
    def main(args: Array[String]): Unit = {
        if (true)   
            println("한 줄은 {괄호}를 생략할 수 있습니다.")  
        
        if (1 + 1 == 2) {  
            println("여러 줄은")  
            println("{괄호}가 필요합니다.")  
        } else {  
            println("컴퓨터가 미쳤나봐요.")  
        }
        
        val likeEggs = false  
        // 삼항 연산자대신 이렇게 쓸 수 있습니다.
        val breakfast =  
          if (likeEggs) "계란후라이"  
          else "사과"  
        
        println(s"아침으로 ${breakfast}를 먹어요")  
    }
}
```


# Collection

## Array
- 스칼라의 배열은 자바의 배열에 대응
    - 자바 int[] == 스칼라 Array[Int]
- 스칼라의 배열은 mutable
- 배열 출력에 메소드 사용
```
object LearnScala {
    // 배열의 내용을 출력하는 메소드
    def printArray[K](array:Array[K]) = println(array.mkString("Array(" , ", " , ")")) 
    def main(args: Array[String]): Unit = {
        
        // ① Array[Int]  
        val array1 = Array(1, 2, 3)
        print("① ")
        printArray(array1)
        
        // ② Array[Any]
        val array2 = Array("a", 2, true)
        print("② ")
        printArray(array2)
        
        // ③ 배열의 값을 읽고 쓰기
        val itemAtIndex0 = array1(0)        
        array1(0) = 4
        print("③ ")
        printArray(array1)
        
        // ④ 배열을 붙일때는 ++연산자를 이용
        // 앞에 붙일때는 +:, 뒤에 붙일때는 :+ 연산자
        val concatenated = "앞에 붙이기" +: (array1 ++ array2) :+ "뒤에 붙이기"
        print("④ array1과 array2를 더하면: ")
        printArray(concatenated)
        
        // 값으로 index찾기
        println(array2.mkString(","), array2.indexOf("a"))
        
        // ⑤ 다른 값만 가져오기
        val diffArray = Array(1,2,3,4).diff(Array(2,3))
        print("⑤ Array(1,2,3,4).diff(Array(2,3))의 결과: ")
        printArray(diffArray)
        
        
        val personArray = Array(("솔라",1), ("문별",2), ("휘인",3))        
        // ⑥ Find 메소드를 이용해서 findByName이라는 메소드 생성
        // Find는 조건에 맞는 값을 찾으면 검색을 중단
        // getOrElse는 일치하는 값이 없을 경우 넘겨줄 기본 값
        // getOrElse가 없을때 일치하는 값이 없으면 None
        def findByName(name:String) = personArray.find(_._1 == name).getOrElse(("화사",4))
        val findSolar = findByName("솔라")  // 값("솔라",1)을 찾아서 넘겨줌
        val findSun = findByName("태양")  // 값이 없으므로 getOrElse에 있는 값("화사",4)이 들어감
        println(findSolar)
        println(findSun)
    }
}
```

## List
- 스칼라의 기본 List는 scala.collection.immutable.List => 값 변경 불가
- 리스트의 값 추가, 삭제는 새로운 리스트를 만들어내는 방식으로 동작
- 기본 List는 Linked list로 구현
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        // List[Any](기본 리스트를 사용하므로 Immutable) 
        val list = List("a", 1, true)
        
        // ① 값을 읽어올 수는 있지만
        val firstItem = list(0)
        // 아래줄과 같이 값을 변경할 수는 없음
        // list(0) = "b"
        println(s"① $firstItem")
        
        // ② 앞에 붙이기는 :: 또는 +: 연산자
        // 리스트 두개를 붙이기는 ++ 또는 :::연산자
        // 뒤에 붙이기는 :+연산자(immutable list에서 효율적인 방법이 아님)
        val concatenated = 0 :: list ++ list :+ 1000
        println(s"② $concatenated")
        
        // ③ Diff
        val diffList = List(1,2,3,4) diff List(2,3)
        println(s"③ $diffList")
        
        //④ 배열의 Find와 같은 방식으로 동작
        val personList = List(("솔라",1), ("문별",2), ("휘인",3))
        def findByName(name:String) = personList.find(_._1 == name).getOrElse(("화사",4))
        val findSolar = findByName("솔라")  //값("솔라",1)을 찾아서 넘겨줌
        val findSun = findByName("태양")  //값이 없으므로 getOrElse에 있는 값("화사",4)이 들어감
        
        println(s"④ ${findSolar}, ${findSun}")
    }
}
```

## Set
- 스칼라에서 기본 Set은 Predef.Set
- Set은 크기가 4일 때까지는 크기에 따라 별도 클래스
    - Set1, Set2, Set3, Set4
- 성요소가 4개보다 많아지면 HashSet으로 구현
- Set은 집합에 대응하는 개념(중복X), 순서가 보장되지 않음
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        // ① 내용을 수정할 수 없는 Set
        val set1 = Set("one", 1) 
        val set2 = Set(1,2,2,2,3,3,3) // 중복이 제거되고 Set(1, 2, 3)이 됨
        println(s"① $set2")
        
        // ② 값이 있는지 체크하는 방법은 괄호 안에 값을 넣어서 사용
        val oneExists = set2(1)  
        val fourExists = set2(4)  
        println(s"② oneExists: ${oneExists}, fourExists: ${fourExists}")
        
        // ③ set을 더하면 중복된 내용은 제거된 새로운 Set이 생성
        val concatenated = set1 ++ set2  
        println(s"③ $concatenated")
        
        // ④ Diff
        val diffSet = Set(1,2,3,4) diff Set(2,3)  
        println(s"④ ${diffSet}")
        
        
        /* ⑤ set.find 메소드를 이용해서 findByName이라는 메소드 생성
         * find는 조건에 맞는 값을 찾으면 검색을 중단
         * getOrElse는 일치하는 값이 없을 경우 넘겨줄 기본 값
         * getOrElse가 없을때 일치하는 값이 없으면 None
         */
        val personSet = Set(("솔라",1), ("문별",2), ("    휘인",3))  
        def findByName(name:String) = personSet.find(_._1 == name).getOrElse(("화사",4))  
        val findSolar = findByName("솔라")  // 값("솔라",1)을 찾아서 넘겨줌
        val findSun = findByName("태양")  //값이 없으므로 getOrElse에 있는 값("화사",4)이 들어감
        
        println(s"⑤ ${findSolar._2}, ${findSun._2}")
    }
}
```

## Map
- 스칼라에서 기본 Map은 Predef.Map(scala.collection.immutable.Map)
- 구성요소가 4개일 때까지는 Map1, Map2, Map3, Map4
- 구성요소 더 많아지면 HashMap
- 키는 중복할 수 없으며 Set와 마찬가지로 순서가 보장되지 않음
```scala
object LearnScala {
    def main(args: Array[String]): Unit = {
        // ① Map[String, Int] 타입의 맵 
        val map1 = Map("one" -> 1, "two" -> 2, "three" -> 3)   
        // Map[Any, Any] 타입의 맵
        val map2 = Map(1 -> "one", "2" -> 2.0, "three" -> false)   
        println(s"① $map1")
        
        // ② 중복된 키가 있으면 마지막 값을 사용
        println(s"② ${Map('a' -> 1, 'a' -> 2)}")
        
        // ③ key를 가지고 값을 읽어오기
        val one = map1("one")  
        println(s"③ ${one}")
        
        /* ④ 키가 없으면 NoSuchElementException이 발생
         * 예를들어 이런 경우> val fourExists = map1("four")   
         * get메소드를 이용해서 얻어오는 객체의 isDefine값으로 Key가 있는지 확인 가능*/
        val fourExistsOption = map1.get("four")  
        println(s"④ ${fourExistsOption.isDefined}")
        
        // ⑤ ++연산자로 두개의 Map을 더할 수 있으며, 중복된 키("three")의 값은 마지막 값으로 결정
        val concatenated = map1 ++ map2
        println(s"⑤ ${concatenated}")   
        
        // ⑥ find (List, Set과 같은 형태)
        val personMap = Map(("솔라",1), ("문별",2), ("휘인",3))  
        def findByName(name:String) = personMap.getOrElse(name, 4)  
        val findSolar = findByName("솔라")  // 값 1을 찾아서 넘겨줌
        val findSun = findByName("태양")  // 값이 없으므로 4를 넘겨줌
        println(s"⑥ ${findSolar}, ${findSun}")
    }
}
```

## Array/List/Set/Map의 타입
- 최종 타입은 공통으로 상속받는 타입 중 최상위 타입으로 결정
```scala
object LearnScala {
    class Animal()
    class Dog() extends Animal()
    
    def main(args: Array[String]): Unit = {
        // Animal과 Dog이 공통으로 상속받는 최상위 타입은 Animal이므로 아래 코드는 정상 실행
        val array:Array[Animal] = Array(new Animal(), new Dog())
        // val wrongArray:Array[Dog] = Array(new Animal(), new Dog()) 올바르지 않은 타입
        
        // List도 같은 원리로 동작(Animal이 List의 element의 타입)
        val list:List[Animal] = List(new Animal(), new Dog())
        
        // Set도 같은 원리로 동작(Animal이 Set의 element의 타입)
        val set:Set[Animal] = Set(new Animal(), new Dog())
        
        // Map도 같은 원리로 동작
        val map:Map[String, Animal] = Map("Animal" -> new Animal(), "Dog" -> new Dog())        
    }
}
```

## 변경할 수 있는(Mutable) Collection
- 스칼라는 변경할 수 없는(immutable) Collection을 사용하는 것을 권장하여 기본 Collection이 immutable
    - 필요한 경우 mutable하게 사용 가능
- ArrayBuffer는 자바에서 배열로 구현되는 java.util.ArrayList와 유사
- ListBuffer는 List처럼 Linked List로 구현
- mutable Collection을 사용할 때는 앞에 mutable 붙임
    - mutable.ArrayBuffer, mutable.ListBuffer, mutable.Set, mutable.Map
```scala
import scala.collection.mutable  

object LearnScala {
    def main(args: Array[String]): Unit = {        
        // ① 배열로 구현되는 ArrayBuffer
        val arrayBuffer = mutable.ArrayBuffer(1, 2, 3)   
        arrayBuffer += 4
        arrayBuffer -= 1  
        arrayBuffer ++= List(5, 6, 7)
        println(s"① $arrayBuffer")
        
        // ② Linked list로 구현되는 ListBuffer
        val listBuffer = mutable.ListBuffer("a", "b", "c")  
        println(s"② $listBuffer")
        
        // ③ Mutable Set
        val hashSet = mutable.Set(0.1, 0.2, 0.3)  
        hashSet ++= mutable.Set(5)
        println(s"③ $hashSet")
        
        // ④ Mutable Map
        val hashMap = mutable.Map("one" -> 1, "two" -> 2)  
        hashMap ++= Map("five" -> 5, "six" -> 6)
        println(s"④ $hashMap")
    }
}

// 출력
// ① ArrayBuffer(2, 3, 4, 5, 6, 7)
// ② ListBuffer(a, b, c)
// ③ HashSet(0.3, 0.1, 0.2, 5.0)
// ④ HashMap(six -> 6, two -> 2, five // -> 5, one -> 1)
```

## 변경할 수 없는(immutable)collection에서 var와 val사용
- 변경할 수 없는(immutable) Collection이 var로 선언된 경우에 Collection에 +=연산자나 -+연산자를 사용할 수 있음
    - 새로운 Collection이 만들어져서 var로 선언된 변수에 저장
- 변경할 수 있는(mutable) Collection의 경우에는 +=나 -=연산자가 collection의 메소드로 동작
```scala
import scala.collection.mutable  

object LearnScala {
    def main(args: Array[String]): Unit = {        
        // ① 변경할 수 없는 Collection이 var로 선언된 경우
        var immutableSet = Set(1, 2, 3)   
        immutableSet += 4   
        // 위의 코드는 새로운 Set을 만들어서 immutableSet에 저장하는 아래 코드와 같음
        immutableSet = immutableSet + 4  
        println(s"① $immutableSet")
        
        // ② 변경할 수 있는 Collection이라면 추가하는 Method를 호출하는것과 같음
        val mutableSet = mutable.Set(1, 2, 3)    
        mutableSet += 4   
        // 위의 코드는 mutableSet 자체의 메소드(+=이라는 메소드)를 호출하는 아래 코드와 같음
        mutableSet.+=(4)  
        println(s"② $mutableSet")  
    }
}
```


# 클래스

## 클래스
- 클래스 선언부가 기본 생성자 역할을 함
```scala
// ① 단순한 클래스
class Person1(fname:String, lname:String)

// ② 메소드를 가지는 클래스
class Person2(fname:String, lname:String){  
    def greet = s"${lname}${fname}님 안녕하세요!" // public한 method
}

// ③ public한 val(read only) 필드
class Person3(fname:String, lname:String){  
    val fullName = s"${lname}${fname}" // public한 val(read only) 필드
    def greet = s"${fullName}님 안녕하세요!" // public한 method
}

/* ④ 
 * val로 선언된 fname는 getter가 자동으로 생성되고
 * var로 선언된 lname은 getter와 setter가 자동으로 생성 */
class Person4(val fname:String, var lname:String)


```
- 매개변수를 val로 선언하면 해당 이름을 가지는 변수(private)와 public getter메소드를 생성
- var로 생성자의 매개변수를 선언하면 해당 이름을 가지는 변수(private)와 public getter, setter메소드를 생성
- 스칼라에서는 명시적으로 정의되지 않으면 모두 public으로 간주
- private 변수의 이름과 getter, setter가 모두 같은 이름을 가지는 경우를 직접 코드로 구현할 수는 없음
    - getter와 setter를 사용하기 위해서는 private 변수의 이름은 다르게 지정 => 메소드명과 구분하기 위해 \_를 변수명 앞에 붙이기도 함

```scala
object LearnScala {
    def main(args: Array[String]): Unit = {        
        // ① 단순한 클래스
        val p1 = new Person1("중기", "송")
        //p1.fname과 p1.lname의 값을 외부에서 가져올 수 없습니다. 
        // 기본 생성자에 매개변수를 넣으면 fname과 lname이라는 이름을 가지는 private 변수가 생성        
        
        // ② 메소드를 가지는 클래스
        val p2 = new Person2("혜교", "송")
        // 이 경우에도 p2.fname과 p2.lname의 값을 외부에서 가져올 수는 없습니다.
        // 정의된 greet 메소드를 출력합니다.
        println(s"② ${p2.greet}")          
        
        // ③ public한 read only(val) fullname을 가지는 클래스
        val p3 = new Person3("구", "진")
        println(s"③ ${p3.fullName}님께 인사합니다. ${p3.greet}")        
        
        // ④ val fname과 var lname을 가지는 클래스
        val p4 = new Person4("지원", "Kim") {  
            override def toString = s"$lname$fname"
        }  
        // val로 선언된 p4.fname과 var로 선언된 p4.lname을 외부에서 읽을 수 있음
        println(s"④ ${p4.lname}${p4.fname}") 
        
        // ⑤ Person4클래스를 이용해서 객체를 생성하지만, 해당 객체의 toString메소드만 오버라이드
        val p5 = new Person4("시진", "유") {  
            override def toString = s"$lname$fname"
        }  
        println(s"⑤ $p5") // 오버라이드된 toString형태로 출력
    }
}
```


## getter와 setter
- 자바와 달리 스칼라는 변수(val, var)와 메소드(def)는 같은 이름을 사용할 수 없음
    - 자바에서는 `int name;` 이라는 필드와 `int name(){ return 0; }` 이라는 메소드가 한 클래스에 있을 수 있으나 스칼라는 그럴 수 없음
```scala
// 자바 스타일 클래스
class JPerson() {  
    var _name: String = null  
    def this(_name:String) = {  
        this()  
            this._name = _name  
    }  
    
    // 스칼라 스타일의 getter, setter   
    def name_=(_name:String) = this._name = _name  
    def name = this._name  
    
    // 자바 스타일의 getter, setter   
    def getName() = name  
    def setName(name:String) = this.name = name  
}
```
- 필드 이름은 _name으로, setter는 name_으로, getter는 name으로 정의
- 자바 스타일의 getter와 setter가 필요하면 @BeanProperty를 활용 혹은 메소드를 가진 클래스 생성해 사용

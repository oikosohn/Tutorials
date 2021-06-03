# Javascript
## Javascript 제어문
### 13. 프로그램, 프로그래밍, 프로그래머
HTML : 컴퓨터 언어 => 시간 순서에 따라 작동하지 않는다.

Javascript : 컴퓨터 언어 + 컴퓨터 프로그래밍 언어 => 시간 순서대로 작동한다.

- 프로그램 == 순서
- 프로그래밍 == 순서를 만드는 행위


### 14. 조건문 예고

조건문이란?
- 프로그램이 조건에 따라서 다른 기능들이 다른 순서에 따라서 실행되도록 만들어주는 것

토글 : 현재 상태가 night라면 day 모드로, 현재 상태가 day라면 night모드로 바꿔주는 기능을 가지도록 만들면, 버튼을 두 개 만들 필요 없이 하나로 구현할 수 있게 될 겁니다. 


### 15. 비교연산자와 블리언

비교 연산자  
- ===
- <,> : html에서는 &lt;(===<) / &gt;(===>) 라고 씀

```js
<!DOCTYPE html>
<html>
  <head>
    <style>
    </style>
  </head>
  <body>
    <script>document.write(1==1);</script> 
    <script>document.write(1==2);</script> 
    <script>document.write(1<2);</script> 
  </body>
</html>
```
위의 코드 실행 결과
```
true false true
```


### 16. 조건문

```js
<!DOCTYPE html>
<html>
  <head>
    <style>
    </style>
  </head>
  <body>
    <h2>IF-true</h2>
    <script>
    document.write('1<br>')
    if(true){
    	document.write('2<br>')
    }
    else {
    	document.write('3<br>')
    }
    </script> 
    <h2>IF-false</h2>
    <script>
    document.write('1<br>')
    if(false){
    	document.write('2<br>')
    }
    else {
    	document.write('3<br>')
    }
    </script> 
  </body>
</html>
```

### 17. 조건문의 활용

```js
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='
  if(document.querySelector("#night_day").value === "night") {
    document.querySelector("#target").style.backgroundColor = "black";
    document.querySelector("#target").style.color = "white";
    document.querySelector("#night_day").value = "day"
  } 
  else { 
    document.querySelector("#target").style.backgroundColor = "white";
    document.querySelector("#target").style.color = "black";
    document.querySelector("#night_day").value = "night"
  }
  '>
    동해물과 백두산이 마르고 닳도록
</body>
```

### 18. 리팩토링(중복의 제거)

리팩토링 정의 : 리팩토링이란 비효율적인 코드를 효율적으로 만들어서 가독성을 높이고 유지보수가 쉽도록 만드는 것이다. 
  - 코드의 기능은 그대로 동작하되 코드 중복 줄여 가독성 높이고 유지보수 싶게 한다.
  

```js
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='
  var target = document.querySelector("body");
  if(this.value === "night") {
    target.style.backgroundColor = "black";
    target.style.color = "white";
    this.value = "day";
  } 
  else { 
    target.style.backgroundColor = "white";
    target.style.color = "black";
    this.value = "night";
  }
  '>
    동해물과 백두산이 마르고 닳도록
</body>
```

```js
document.querySelector("#night_day") === this // 자기 자신을 가리키고 있는 코드 => this로 대체
var target = document.querySelector("body"); // target에 공통적으로 들어가는 내용(중복되는 내용) 대입해 전체 코드에서 중복 제거
```

- 생각해보기
```js
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='
  var body = document.querySelector("body");
  var h1 = document.querySelector("h1");
  if(this.value === "night") {
    body.style.backgroundColor = "black";
    h1.style.color = "white";
    this.value = "day";
  }
  else {
    body.style.backgroundColor = "white";
    h1.style.color = "black";
    this.value = "night";
  }
  '>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
</body>
```

### 19. 반복문 예고

```js
var links = document.querySelectorAll('a');
var i = 0;
while (i<links.length) {
  links[i].style.color = 'powerblue';
  i=i+1;
}
```
모든 a 태그를 가져와서 a 태그 개수만큼 a태그의 스타일 컬러를 파우더 블루로 변경


### 20. 배열

```js
<body id='target'>
  <h1>
   배열 문법
  </h1>
  <script>
  	var coworkers = ['egoing','leezche'];
  </script>
  <h2>
    get
  </h2>
  <script>
  	document.write(coworkers[0]);
    document.write(coworkers[1]);
    document.write(coworkers.length);
  </script>
  <h2>
    add
  </h2>
  <script>
  	coworkers.push('duru')
		coworkers.push('taeho')
  </script>  
  <h2>
    count
  </h2>
  <script>
  	coworkers.splice(0,1); // 배열의 첫번째 요소 삭제
    document.write(coworkers.length);
  	document.write(coworkers[0]);
    document.write(coworkers[1]);
    document.write(coworkers[2]);
  </script>
</body>
```

### 21. 반복문

```js
<body>
  <ul>
    <script>
    var i = 0;
      while(i<3){
      document.write('<li>1</li>');
      document.write('<li>2</li>');
      document.write('<li>3</li>');
      i = i + 1;
      }
    </script>
  </ul>
</body>
```

`생각해보기`

```js
var i = 0;
while (i < 3) {
   i = i + 2;
}
document.write(i);
// 츨력 값 : 4
```


### 22. 배열과 반복문

```js
<body>
  <ul>
    <script>
    var coworkers=['kim','lee','park','oh','choi'];
    var i = 0;
    while(i<coworkers.length){
    	document.write('<li><a href="http://naver.com/">'+coworkers[i]+'</li>');
      i = i + 1;
    }
    </script>
  </ul>
</body>
```

#### 23. 배열과 반복문의 활용

```css
document.querySelector('a');
```
a 태그 하나만 가져온다.


```css
document.querySelectorAll('a');
```
노드 리스트 출력


```css
var alist = document.querySelectorAll('a');
console.log(alist[0]);
```
console 에 첫번째 a 태그의 속성과 값들 출력됨


```js
var alist = document.querySelectorAll('a');
var i = 0;
while(i<alist.length) {
console.log(alist[i]);
	alist[i].style.color='powderblue';
	i = i+1;
}
```
반복문을 실행할 때마다 a태그들의 속성과 값들 출력된다.

`실습 코드`
```js
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='
  var body = document.querySelector("body");
  var h1 = document.querySelector("h1");
  if(this.value === "night") {
    body.style.backgroundColor = "black";
    h1.style.color = "white";
    this.value = "day";
    
    var alist = document.querySelectorAll("a");
    var i = 0;
    while(i<alist.length) {
      alist[i].style.color="blue";
      i = i+1;
    }
  }
  else {
    body.style.backgroundColor = "white";
    h1.style.color = "black";
    this.value = "night";
    
    var alist = document.querySelectorAll("a");
    var i = 0;
    while(i<alist.length) {
      alist[i].style.color="powderblue";
      i = i+1;
    }
  }
  '>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```


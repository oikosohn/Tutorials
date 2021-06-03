# Javascript
## 웹과 Javascript
### 1. 수업소개
HTML : 정적
JS : 동적
Javascript를 사용하면 사용자와 웹 사이에 동적인 상호작용이 가능해진다.

### 2. 수업의 목적
'크롬>검사>Element' : 여기서 element는 태그를 의미

### 3. HTML과 JS의 만남 : script 태그
```js
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
  </head>
  <body>
    <h1>Javascript</h1>
    <script>
      document.write(1+1);
    </script>
    <h1>html</h1>
    1+1
  </body>
</html>
```
`<script> ... </scrpit>` : ...에 자바스크립트 코드가 들어간다.

### 4. HTML과 JS의 만남 : 이벤트
```js
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
  </head>
  <body>
    <input type="button" value="Hi" onclick="alert('hi')">
  <input type="text" onchange="alert('changed')">
  <input type="text" onkeydown="alert('key down')">
  </body>
</html>
```
onclick 속성의 값은 자바스크립트 코드이다.
event 정의 : 웹 브라우저에서 일어나는 유용한 사건
event의 종류 : onclick, onchange 이외에도 10~20가지 이벤트 존재 
  - 키보드 르는 이벤트 : javascript keydown event 구글검색
  
 
### 5. HTML과 JS의 만남 : 콘솔

- 문자열 길이 반환
```JS
alert('콘솔에 작성한 따옴표 사이 내용이 문자가 된다.'.length)
```

- 페이스북 페이지  
https://ko-kr.facebook.com/notes/%EC%83%9D%ED%99%9C%EC%BD%94%EB%94%A9/%EC%83%9D%ED%99%9C%EC%BD%94%EB%94%A9-%ED%8E%98%EC%9D%B4%EC%8A%A4%EB%B6%81-%EA%B7%B8%EB%A3%B9-%EC%BB%A4%EB%AE%A4%EB%8B%88%ED%8B%B0-%EC%A0%95%EC%B1%85-rfc/1797775593596302/

```js
var 당첨자수 = 2;
var 댓글선택자 = '._3b-9>div>.UFIComment .UFICommentActorName';
function shuffle(a) {
    for (let i = a.length; i; i--) {
        let j = Math.floor(Math.random() * i);
        [a[i - 1], a[j]] = [a[j], a[i - 1]];
    }
}
var list = [];
document.querySelectorAll(댓글선택자).forEach(function(e){
    list.push(e.innerText);
});
list = list.filter((v,i,a) => a.indexOf(v)===i);
shuffle(list)
console.log(list.slice(0,당첨자수));
```
출처 : https://opentutorials.org/course/2897/17593


### 6.데이터타입(문자열과숫자)

자바스크립트의 자료형 : Boolean, Null, Undefined, Number, String, Symbol (ECMAScript 6 에 추가됨), 별도로 Object 도 있음

```js
'Hello world'.length
'Hello world'.toUpperCase()
'Hello world'.indexOf('o')
'       hello       '.trim()
```

```js
// 
'1'+'1'
```
'11'

### 7.변수와 대입연산자

변수에는 `var`를 달자

```js
var x = 1
// x : 변수
// = : 대입 연산자
```
```js
var name = 'egoing';
alert('Hello'+name+'world'+name);
var name = 'leezche';
alert('Hello'+name+'world'+name);
```

### 8.웹브라우저 제어

```js
<body> -> <body style="background-color: black; color: white;">
```

### 9. CSS기초(style 속성)

```js
<h2 style='background-clor:coral; color:powerblue'>JavaScript</h2>
```

### 10. CSS기초(style 태그)

```js
<head>
  <style>
    .js { font-weiht: bold; 
          colr: red;
    }
  </style>
</head>
...
<div class='js'>
  줄 바뀌는 태그
</div>

<span style='font-weight:bold;'>
  줄 바뀌는 태그
</span>
```

### 11. CSS기초(선택자)

- class : grouping하는 것이기에 중복이 가능하다. id보다 포괄적이다.
- id : 식별자, 고유한 값 가져야 한다.

class 위에 id를 얹어서 구현하는 것이 효율적이다.

- 선택자 우선순위 : id > class > 태그(요소)
```js
<style>
  span {
    color: blue;
  }
  .hello {
    font-size: 12px;
    color: red;
  }
  #bye {
    font-size: 13px;
  }
</style>
```
```js
<span id="bye" class="hello">Javascript</span>
```
color: red, font-size:13px 스타일이 적용된다.


### 12. 제어할 태그 선택하기

querySelector 함수 : 선택자를 이용해서 원하는 태그를 선택할 수 있다.
```js
<body id='target'>
  <input type='button' value='night' onclick='
  document.querySelector("#target").style.backgroundColor = "black";
  document.querySelector("#target").style.color = "white";
  '>
  <input type='button' value='day' onmouseover='
  document.querySelector("#target").style.backgroundColor = "white";
  document.querySelector("#target").style.color = "black";
  '>
    동해물과 백두산이 마르고 닳
</body>
```

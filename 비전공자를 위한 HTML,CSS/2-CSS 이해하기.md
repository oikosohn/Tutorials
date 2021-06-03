# CSS

# 4. CSS 이해하기

## 1) CSS 소개

CSS(Cascading Style Sheets) : HTML(마크업 언어)을 꾸며주는 언어
  - html : 문서의 정보와 구조 설계를 하는 마크업 언어
  - css : html을 보기 좋게 디자인하는 표현용 

http://www.csszengarden.com


## 2) CSS 문법과 적용

### CSS 구문

```css
h1 {color: yellow; font-size: 2em;}
```
권장하지 않지만 마지막 선언에 ; 안 붙여도 된다.

- 선택자(selector) - "h1"
- 속성(property) - "color"
- 값(value) - "yellow"
- 선언(declaration) - "color: yellow", "font-size: 2em"
- 선언부(declaration block) - "{ color: yellow; font-size:2em; }"
- 규칙(rule set) - "h1 { color: yellow; font-size:2em; }"

html의 속성은 attribute, css의 속성은 property
css는 여러개의 규칙으로 이루어졌다.

```css
h1
{ color: yellow; font-size:2em; }

h1 {
    color: yellow;
    font-size:2em;
}
```

### CSS 주석

```css
/* 내용 */
```


### 2) CSS 문법과 적용

1. Inline
```html
<p style='color: red;'> Hello, CSS</p>
```
Inline은 해당 요소에 직접 스타일 속성을 이용해서 규칙들을 선언하는 방법입니다.

해당 요소에 직접 입력하기 때문에 선택자는 필요하지 않게 되고, 선언부에 내용만 스타일 속성의 값으로 넣어주면 됩니다.

Inline 스타일 방식이라고 부릅니다.

Inline 스타일 방식은 코드의 재활용이 되지 않기 때문에 자주 사용하지 않습니다.



2. Internal

```html
<html>
  <head>
    <style>
      p { color: red;}
    </style>
  </head>
  <body>
    <p> Hello, CSS</p>
    <p> Hello, CSS~~~</p>
  </body>
</html>
```

많은 페이지가 있는 경우에는 모든 페이지에 저마다의 규칙을 선언해줘야 합니다.

페이지가 많고 스타일 규칙 내용이 많아지면 결코 쉬운 일은 아닙니다.

3. External

```css
p {
  color: red;
}
```
External은 외부 스타일 시트 파일을 이용한 방법입니다.

외부 스타일 시트는 스타일 규칙들을 별도의 외부 파일을 만들어 넣는 방식입니다.

외부 파일은 확장자가 .css가 되며 css 파일이라고 부릅니다.

```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
    <link href="./style.css" rel="stylesheet" />
  </head>
  <body>
    <p> Hello, CSS</p>
  </body>
</html>
```
`<head>` 내부에 `<link>`를 선언한 후 href 속성을 이용해 CSS 파일의 경로를 적습니다.

rel 속성은 연결되는 파일이 문서와 어떤 관계인지를 명시하는 속성으로, CSS 파일은 'stylesheet' 라고 적어야 합니다.

외부 스타일 시트 방식으로 스타일을 선언하면 많은 페이지가 있더라도 이 한 줄로 모든 페이지에 같은 스타일을 적용할 수 있습니다.

또한, 수정이 필요할 때도 CSS 파일을 수정하면 연결된 `모든 페이지에 반영`할 수 있습니다.

외부 스타일 시트 방식은 `파일 관리가 편하면서도 용량이 작기 때문에 주로 사용되는 방법`입니다.


4. Import

- 스타일 내에서 다른 스타일 시트 파일 불러오기
- 성능이 좋지 않아 잘 쓰이지 않음

```css
@import url("css/style.css");
```
`<style> 내부 상단`이나 `외부 스타일 시트 파일 상단`에 선언하는데 `성능상 좋지 않아서 거의 쓰이지 않습니다.`


## 3) 선택자 1

- 요소 선택자(태그) : 선택자 중 가장 기본. 태그 선택자라고도 한다. 요소 선택자는 선택자 부분에 태그 이름이 들어간다.
```css
h1 { color: yellow; }
h2 { color: yellow; }
h3 { color: yellow; }
h4 { color: yellow; }
h5 { color: yellow; }
h6 { color: yellow; }
```

- 그룹화 : 선택자를 쉼표로 그룹화할 수 있다.

```css
/* 선택자 */
h1,h2,h3,h4,h5,h6 { color: yellow; }

/* 전체 선택자 : 문서 내 모든 요소 스타일 적용, 성능에 좋지 않아 사용자제할 것*/
* { color: yellow; }

/* 선언 */
h1 { color;yellow; font-size: 2em; background-color:grey; }

/* 선택자 & 선언 */
h1,h2,h3,h4,h5,h6 { color;yellow; font-size: 2em; background-color:grey; }
```

## 4) 선택자 2

- class 선택자 : `요소에 구애받지 않고 스타일 규칙을 적용`할 수 있는 `가장 일반적인 방법`이다.

`예시코드`
```css
.foo { font-size: 30px; }
```
```html
<p class='foo'> ... </p>
```

`실습코드`
```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <link href="./style.css" rel="stylesheet" />
    <style media='screen'>
      .html { color: purple; }
      .css { text-decoration: underline; }
    </style>
  </head>
  <body>
    <dl>
      <dt class='html'>HTML</dt>
      <dd><span class="html">HTML</span>은 문서의 구조를 나타냅니다.</dd>
      <dt class='css''>CSS</dt>
      <dd><span class="css">CSS</span>은 문서의 표현를 나타냅니다.</dd>      
    </dl>
  </body>
</html>
```

- 다중 클래스 : class 속성은 꼭 하나의 값만 가질 수 있는 것은 아니다. 공백으로 구분하여 여러 개의 class 값을 넣을 수 있다.

`예시코드`
```css
.foo { font-size: 30px; }
.bar { color: blue; }
```
```html
<p class="foo bar"> ... </p>
```

`실습코드`
```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
    <link href="./style.css" rel="stylesheet" />
    <style media='screen'>
      .html { color: purple; }
      .css { text-decoration: underline; }
    </style>
  </head>
  <body>
    <dl>
      <dt class='html'>HTML</dt>
      <dd><span class="html">HTML</span>은 문서의 구조를 나타냅니다.</dd>
      <dt class='css''>CSS</dt>
      <dd><span class="css">CSS</span>은 문서의 표현를 나타냅니다.</dd>      
      <dt class='html css''>JS</dt>
      <dd><span class="html css">JS</span>은 문서의 동작을 나타냅니다.</dd> 
    </dl>
  </body>
</html>
```

- ID 선택자 : class 선택자와 매우 유사하나 아래와 같은 차이가 있다.
  - \# 기호 사용
  - 태그의 id 속성을 참조한다.
  - id는 문서 안에서 유일한 요소에 사용한다. 유니크 해야한다.
  - 구체성의 값이 다르다
  
`예시코드`
```css
#bar { background-color: yellow; }
```
```html
<p id='bar> ... </p>
```

`실습코드`
```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
    <link href="./style.css" rel="stylesheet" />
    <style media='screen'>
      .html { color: purple; }
      .css { text-decoration: underline; }
      #id-selector { font-size: 38px; }
    </style>
  </head>
  <body>
    <dl>
      <dt class='html'>HTML</dt>
      <dd><span class="html">HTML</span>은 문서의 구조를 나타냅니다.</dd>
      <dt class='css''>CSS</dt>
      <dd><span class="css">CSS</span>은 문서의 표현를 나타냅니다.</dd>      
      <dt class='html css''>JS</dt>
      <dd><span class="html css">JS</span>은 문서의 동작을 나타냅니다.</dd>
      <p id='id-selector'>id 선택자는 해쉬 기호를 사용합니다. </p>
    </dl>
  </body>
</html>
```

## 5) 선택자 3

- 선택자의 조합

```css
/* 요소와 class의 조합 : p 태그이면서 class 이름이 bar일 때 적용*/
p.bar { ... } 

/* 다중 class : class='foo bar' 일 때 */
.foo.bar { ... }

/* id와 class의 조합 : id는 foo이면서 class는 bar일 때 */
#foo.bar { ... }
```

```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>repl.it</title>
    <link href="./style.css" rel="stylesheet" />
    <style media='screen'>
      .html { color: purple; }
      .css { text-decoration: underline; }
      #id-selector { font-size: 38px; }
      .html.css { border: 1px solid; }
    </style>
  </head>
  <body>
    <dl>
      <dt class='html'>HTML</dt>
      <dd><span class="html">HTML</span>은 문서의 구조를 나타냅니다.</dd>
      <dt class='css''>CSS</dt>
      <dd><span class="css">CSS</span>은 문서의 표현를 나타냅니다.</dd>      
      <dt class='html css''>JS</dt>
      <dd><span class="html css">JS</span>은 문서의 동작을 나타냅니다.</dd>
      <p id='id-selector'>id 선택자는 해쉬 기호를 사용합니다. </p>
    </dl>
  </body>
</html>
```

- 속성 선택자
  - 단순 속성으로 선택
  ```css
  p[class] { color: silver; }
  p[class][id] { text-decoration: underline; }
  ```
  요소[속성이름] 있을 때 스타일 적용
  요소[속성이름][아이디] 있을 때 스타일 적용

  ```css
  <p class="foo">Hello</p>
  <p class="bar">CSS</p>
  <p class="baz" id="title">HTML</p>
  ```
  `<p class="baz" id="title">HTML</p>` : 1) 글씨색 은색, 2) 언더바 스타일 적용


  - 정확한 속성값으로 선택
  ```css
  p[class="foo"] { color: silver; }
  p[id="title"] { text-decoration: underline; }
  ```
  ```css
  <p class="foo">Hello</p>
  <p class="bar">CSS</p>
  <p class="foo" id="title">HTML</p>
  ```
  `<p class="foo" id="title">HTML</p>` : 1) 글씨색 은색, 2) 언더바 스타일 적용

  - 부분 속성값으로 선택
    - [class~="bar"] : class 속성의 값이 `공백으로 구분한 "bar" 단어가 포함`되는 요소 선택 == `단독`으로 bar가 있을 때
  
    - [class^="bar"] : class 속성의 값이 "bar"로 `시작`하는 요소 선택
  
    - [class$="bar"] : class 속성의 값이 "bar"로 `끝`나는 요소 선택
  
    - [class*="bar"] : class 속성의 값이 "bar" 문자가 `포함`되는 요소 선택
  
  ```css
  p[class~="color"] { font-style: italic; }
  p[class^="color"] { font-style: italic; }
  p[class$="color"] { font-style: italic; }
  p[class*="color"] { font-style: italic; }
  ```
  ```css
  <p class="color hot">red</p>
  <p class="cool color">blue</p>
  <p class="colorful nature">rainbow</p>
  ```

## 6) 문서 구조 관련 선택자

- 부모-자식 관계 이해하기
  - html : 최상단 요소, 자식요소로 head와 body를 가진다.
  - 조상과 자손은 부모와 자식을 포함한다.
  - 형제 요소 : 같은 항렬, 같은 수준의 요소
  - 인접 요소 : 형제 요소 중 바로 뒤에 이어나온 요소

- 문서 구조를 이용한 선택자
  - 자손 선택자
  ```css
  div span { color: red; }
  ```
  
  - 자식 선택자
  ```css
  div>span { color: red; }
  ```
  
  - 인접 형제 선택자 : div 다음에 오는 span에 스타일 적용
  ```css
  div+span { color: red; }
  ```
  
  - 조합해서 사용
  ```css
  body>div table + ul { ... }
  // body의 자식인 div의 자손인 table의 인접 형제 ul에 스타일 적용
  ```
  
  - `실습코드`
  ```html
  <body>
    <div>
        <h1><span>HTML</span>: Hyper Text Markup Language</h1>
        <span>CSS는 문서를 꾸며줍니다.</span>
    </div>
    <span>JAVASCRIPT는 문서를 동적으로 제어할 수 있습니다.</span>
    <p>HTML과 CSS와 JAVASCRIPT를 이용해서 멋진 웹 사이트를 제작할 수 있습니다.</p>
  </body>
  ```
  
## 7) 가상 선택자 1

### 가상 선택자(pseudo selector)
- 문서에 존재하지 않는 요소에 스타일 부여 가능
- 특정 요소의 상태를 미리 추정해서 가상의 클래스로 스타일 적용 가능
- 그 종류로는 가상 클래스와 가상 요소가 있다

### 가상 클래스 : 미리 정의해놓은 상황에 적용이 되도록 약속되어있는 보이지 않는 클래스
- 브라우저 스스로가 특정한 상황이 되면 자동적으로 클래스를 적용시켜준다.
- 가상 클래스 사용하면 CSS만으로 스타일 변경 가능
- 참고 : https://developer.mozilla.org/ko/docs/Web/CSS/Pseudo-classes

### 문서 구조와 관련된 가상 클래스
- :fisrt-child : 첫 번째 자식 요소 선택
- :last-child : 마지막 자식 요소 선택

```HTML
<head>
  <style>
  li:first-child {
    color: red;
  }
  li:last-child {
    color: blue;
  }
</style>
</head>
<body id='target'>
  <ul>
    <li>HTML</li> <!-- li class='first-child' -->
    <li>CSS</li>
    <li>JS</li> <!-- li class='last-child' -->
  </ul>
</body>
```

### 링크 관련된 가상 클래스
- :link : 하이퍼링크이면서 아직 방문하지 않은 앵커
- :visited : 이미 방문한 하이퍼링크를 의미

```HTML
<head>
  <style>
  a:link { color: blue; }
  a:visited { color: grey; }
</style>
</head>
<body id='target'>
  <a href='http://naver.com'>네이버</a> <!-- class='visited' -->
  <a href='http://google.com'>구글</a>
</body>
```

### 사용자 동작 관련 가상 클래스
- :focus : 현재 입력 포커스를 갖고 있는 요소에 적용, 탭 키 누르거나 길게 누를 때
- :hover : 마우스 포인터가 위치해 있는 요소에 적용, 포인터 위치에 닿을 때
- :active : 사용자 입력에 의해 활성화된 요소에 적용, 길게 누르거나 좌,우 클릭할 때
```HTML
<head>
  <style>
  a:focus { background-color: yellow; }
  a:hover { font-weight: bold; }
  a:active { color: red; }
</style>
</head>
<body id='target'>
  <a href='http://naver.com'>네이버</a>
  <a href='http://google.com'>구글</a>
</body>
```

## 8) 가상 선택자 2

가상 요소 : 미리 정해놓은 위치에 삽입이 되도록 약속되어잇는 보이지 않는 요소
- :before : 가장 에 요소를 삽입, 내용이 없어서 content라는 CSS 속성 이용해야 한다.
- :after : 가장 뒤에 요소를 삽입, 내용이 없어서 content라는 CSS 속성 이용해야 한다.
- :first-line : 요소의 첫 번째 줄에 있는 텍스트, 화면에 나타난 줄 기준
- :first-letter : 블록 레벨 요소의 첫 번째 문자

참고 링크 : https://developer.mozilla.org/ko/docs/Web/CSS/Pseudo-elements 

선택자들마다 지원 브라우저 범위가 제각각이기 때문에 잘 확인하고 사용해야한다.

```HTML
<head>
  <style>
  p:before {
    color: red;
    content: 'before 가상 요소를 활용한 내용';
  }
  p:after {
    color: blue;
    content: 'after 가상 요소를 활용한 내용';
  }
  p:first-line {
    font-weight: bold;
  }
  p:first-letter {
    font-size: 3em; // 글자 크기 3배 키우겠다
  }
</style>
</head>
<body id='target'>
  <p>
    동해물과 백두산이 마르고 닳토록
    하느님이 보우하사 우리나라 만세
  </p>
</body>
```

## 9) 구체성

### 구체성 : 선택자를 얼마나 명시적으로 선언했느냐를 수치화한 것
-
```CSS
h1 { color: red; }
body h1 { color: green; }
```


좌측 값부터 비교 : 좌측 숫자가 클수록 높은 구체성을 가진다, 각 자리는 독립적이다.
- 0, 1, 0, 0 : 선택자에 있는 모든 id 속성값
- 0, 0, 1, 0 : 선택자에 있는 모든 class 속성값, 기타 속성, 가상 클래스
- 0, 0, 0, 1 : 선택자에 있는 모든 요소, 가상 요소
- 전체 선택자는 0, 0, 0, 0을 가진다.
- 조합자는 구체성에 영향을 주지 않는다. (>, + 등)

```CSS
h1 { ... }  /* 단순 요소 선택자, 모든 요소 0,0,0,1 => 구체성 값 0,0,0,1 */
body h1 { ... }  /*요소 두개 => 0,0,0,2 구체성 값 h1 < body h1 이기 때문에 스타일 먼저 적용 */
.grape { ... }  /*class 선택자 => 0,0,1,0 */
*.bright { ... }  /* *.전체 선택자는 구체성에 영향을 주지 않는다 => 0,0,1,0 */
p.bright em.dark { ... }  /* 클래스 2개, 요소 2개 => 0,0,2,2 */
#page { ... }  /* id 구체성 => 0,1,0,0 */
div#page { ... }  /* 요소선택자와 id선택자 조합 0,1,0,1, 가장 높은 구체성을 가진다.*/
```

### 인라인 스타일

```CSS
p#page { color: red; } // 0,1,0,1
```
```HTML
<p id="page" style="color:blue">Lorem impusm dolor sit.</p> 
```
- 인라인 스타일 : 1,0,0,1
style color는 blue이다.


### !IMPORTANT
```CSS
p#page { color: red !important; }
```
```HTML
<p id="page" style="color:blue">Lorem impusm dolor sit.</p>
```
- 한칸 공백 !IMPORTANT; : 모든 구체성을 무시하고 우선권을 갖기 때문에 styple color red이다.


## 10) 상속

### 상속되는 속성

상속 : 자손 요소까지 스타일 영향을 미친다.

```CSS
h1 { color: gray; }
```
```HTML
<h1>Hello, <em>CSS</em></h1>
```
- h1의 자식요소 em은 color:gray를 상속받는다.
- 박스 모델 속성들(margin, padding, background, border-요소 외곽 테두리)은 상속되지 않는다.


### 상속되는 속성의 구체성
```CSS
* { color: red; } // 0,0,0,0
h1#page { color: gray; } // 0,1,0,1
```
```HTML
<h1 id="page">Hello, <em>CSS</em></h1>
```
결과 : em == red, h1 == grey
- 상속된 값은 아무런 구체성을 가지지 않으며, 심지어 0,0,0,0도 아니다.
- 전체 선택자가 없었다면 color:grey로 표현되었을 것이다.


## 11) 캐스케이딩

캐스캐이딩 : css가 어떤 방식으로 문서에 적용되는지를 정한 규칙이다.
- 구체성은 캐스캐이딩 규칙 중 하나이다.

```css
// 구체성 동일한 규칙은 어떻게 하나?
h1 { color: red; }
h1 { color: blue; }
```

### cascading 규칙 
1. 중요도(!important)와 출처
  - !important로 선언된 모든 규칙은 최상위 규칙이다.
  - CSS의 출처는 제작자(사이트 개발자), 사용자(사이트 방문자), 사용자 에이전트(User Agent, 일반 사용자의 환경==브라우저의 내장된 CSS)로 구분한다.
      1. 사용자 !important 스타일 : 거의 사용하지 않는다.
      2. 제작자 !important 스타일
      3. 제작자 스타일 : 사이트 제작자가 만든 CSS 스타일, 대부분의 스타일 규칙들이 이 순위에 해당.
      4. 사용자 스타일 : 일반 유저가 직접 CSS를 만들어서 본인 브라우저에 사용, 지금은 사용하지 않고 지원하지 않는 브라우저 많아 신경쓰지 않아도 된다.
      5. 사용자 에이전트 스타일 : 브라우저 기본 제공 스타일
2. 구체성
  ```css
  <p id="bright">Hello, CSS</p>
  ```
  ```html
  p#bright { color: silver; } 
  p { color: red; }
  ```
  color : sivler 적용
  
3. 선언 순서
  ```css
  p { color: silver; }
  p { color: red; }
  ```
  - 나중에 선언된 red가 적용된다.
  
  
## 12) 선택자 정리
w3schools의 CSS Selector Reference 페이지

https://www.w3schools.com/cssref/css_selectors.asp

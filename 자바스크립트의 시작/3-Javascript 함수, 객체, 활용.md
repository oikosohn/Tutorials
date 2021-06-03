# 3-Javascript 함수, 객체, 활용
## Javascript 함수
### 24. 함수 예고 (코드 수정필요)

- 함수 === 수납상자
```html
<head>
  <script>
  	function nightDayHandler(self) {
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
    }
  </script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='
  nightDayHandler(this);
  '>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```


### 25. 함수

```html
<body id='target'>
  <h1>
     Fucntion
  </h1>
  <h2>
     Basic
  </h2>
  <ul>
    <script>
  	function two() {
      document.write('<li>2-1</li>');  
      document.write('<li>2-2</li>');
    }
  	document.write('<li>1</li>');
    two();
    document.write('<li>3</li>');
    two();
  	</script>
  </ul>
  <h2>
     Parameter $ Argument
  </h2>
  <h2>
     Return
  </h2>
</body>
```

### 26. 함수-매개변수와 인자

```js
<body id='target'>
  <h1>
     Fucntion
  </h1>
  <h2>
     Basic
  </h2>
  <ul>
    <script>
  	function two() {
      document.write('<li>2-1</li>');  
      document.write('<li>2-2</li>');
    }
  	document.write('<li>1</li>');
    two();
    document.write('<li>3</li>');
    two();
  	</script>
  </ul>
  <h2>
     Parameter & Argument
  </h2>
    <script>
    function onePlusOne(){
    	document.write(1+1+'<br>');
    }
    function sum(left, right){
    	document.write(left+right+'<br>');
    }
    onePlusOne();
    sum(2,3);
    sum(3,4);
    </script>
  <h2>
     Return
  </h2>
</body>
```

### 27. 함수-리턴

```html
<body id='target'>
  <h1>
     Fucntion
  </h1>
  <h2>
     Basic
  </h2>
  <ul>
    <script>
  	function two() {
      document.write('<li>2-1</li>');  
      document.write('<li>2-2</li>');
    }
  	document.write('<li>1</li>');
    two();
    document.write('<li>3</li>');
    two();
  	</script>
  </ul>
  <h2>
     Parameter & Argument
  </h2>
    <script>
    function onePlusOne(){
    	document.write(1+1+'<br>');
    }
    onePlusOne();
    function sum(left, right){
    	document.write(left+right+'<br>');
    }
    function sumColorRed(left, right){
    // (left+right) : 숫자 , left+right : 문자
    	document.write('<div style="color:red">'+(left+right)+'</div><br>');
    }
    
    sum(2,3);
    sumColorRed(3,4);
    </script>
    
  <h2>Return</h2>
  <script>
  function sum2(left, right){
  	return left+right;
    }
    sum2(2,3);
    document.write(sum2(2,3)+'<br>');
    document.write('<div style="color:red">'+sum2(2,3)+'</div>');
    document.write('<div style="font-size:3rem">'+sum2(2,3)+'</div>');
  </script>
</body>
```

### 28. 함수 활용

```html
<head>
  <script>
  	function nightDayHandler(self) {
      var body = document.querySelector("body");
      var h1 = document.querySelector("h1");
      if(self.value === "night") {
        body.style.backgroundColor = "black";
        h1.style.color = "white";
        self.value = "day";

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
        self.value = "night";

        var alist = document.querySelectorAll("a");
        var i = 0;
        while(i<alist.length) {
          alist[i].style.color="powderblue";
          i = i+1;
        }
      }
    }
  </script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```

## Javascript 객체
### 29. 객체 예고

객체 == 서로 연관된 함수와 변수가 아주 많아지면 이를 정리하기 위해서 사용 == 폴더
`document.querySelector('body')`
- documnet : 객체
- .querySelector : 객체에 속한 함수 == 메서드

```html
<head>
  <script>
  	function linksSetColor(color){
			var alist = document.querySelectorAll("a");
      var i = 0;
      	while(i<alist.length) {
        	alist[i].style.color=color;
          i = i+1;
    	}
    }
    function bodySetColor(color) {
    	target.style.color = color;
    }
    function bodySetBackgroundColor(color) {
    	target.style.backgroundColor = color;
    }
  	function nightDayHandler(self) {
      var target = document.querySelector("body");
      var h1 = document.querySelector("h1");
      if(self.value === "night") {
        bodySetBackgroundColor("black");
        bodySetColor("white");
        self.value = "day";
        linksSetColor('powderblue')
      }
      else {
        bodySetBackgroundColor("white");
        bodySetColor("black");
        self.value = "night";
        linksSetColor('blue')
        }
    }
  </script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```

### 30. 객체(쓰기와 읽기)

배열 : 순서있는 정보 저장, [], index
객체 : 순서없이 정보 저장, {}, key
{} : object literal(객체 리터럴), 객체를 만들 때 사용하는 기호
. : object access operator, 속성(객체) 접근자
```html
<head>
</head>
<body>
  <h1>Object</h1>
  <h2>Create</h2>
   <script>
    var coworkers = {
      'programmer':'egoing',
      'designer':'leezche'
    };
    document.write('programmer : '+coworkers.programmer+'<br>');
    document.write('designer : '+coworkers.designer+'<br>');
    coworkers.bookkeeper = 'duru';
    document.write('bookkeeper : '+coworkers.bookkeeper+'<br>');
    coworkers['data scientist'] = 'taeho';
    document.write('data scientist : '+coworkers['data scientist']+'<br>');
  </script>
</body>
```

### 31. 객체(쓰기와 읽기)

```html
<head>
</head>
<body>
  <h1>Object</h1>
  <h2>Create</h2>
   <script>
    var coworkers = {
    	'programmer':'egoing',
      'designer':'leezche'
    };
    document.write('programmer : '+coworkers.programmer+'<br>');
    document.write('designer : '+coworkers.designer+'<br>');
    coworkers.bookkeeper = 'duru';
    document.write('bookkeeper : '+coworkers.bookkeeper+'<br>');
    coworkers['data scientist'] = 'taeho';
    document.write('data scientist : '+coworkers['data scientist']+'<br>');
  </script>
  <h2>Iterate</h2>
  <script>
  	for (var key in coworkers) {
    	document.write(key+' : '+coworkers[key]+'<br>');
    }
  </script>
</body>
```

### 32. 객체(프로퍼티와 메소드)

객체에는 함수도 담을 수 있다.

```js
coworkers.showAll = function(){}
var showAll = function() {}
function showAll() {}
```

```html
<head>
</head>
<body>
  <h1>Object</h1>
  <h2>Create</h2>
   <script>
    var coworkers = {
    	'programmer':'egoing',
      'designer':'leezche'
    };
    document.write('programmer : '+coworkers.programmer+'<br>');
    document.write('designer : '+coworkers.designer+'<br>');
    coworkers.bookkeeper = 'duru';
    document.write('bookkeeper : '+coworkers.bookkeeper+'<br>');
    coworkers['data scientist'] = 'taeho';
    document.write('data scientist : '+coworkers['data scientist']+'<br>');
  </script>
  <h2>Iterate</h2>
  <script>
  	for (var key in coworkers) {
    	document.write(key+' : '+coworkers[key]+'<br>');
    }
  </script>
  <h2>Property & Method</h2>
  <script>
    coworkers.showAll = function(){
      	for (var key in this) {
    			document.write(key+' : '+this[key]+'<br>');
      }
    }
    coworkers.showAll();
  </script>
</body>
```

`결과`
```
Property & Method
programmer : egoing
designer : leezche
bookkeeper : duru
data scientist : taeho
showAll : function(){ for (var key in coworkers) { document.write(key+' : '+this[key]+'
'); } }
```

위 코드에서 this는 함수가 소속된 객체(자기자신)를 가리키고 있다.
 - this : 객체의 메소드 안에서 객체 자신을 가리키는 키워드
결과에서 coworkes.showAll도 coworkers에 소속되서 화면에 표시된다.

Property : 객체에 소속된 변수, 객체의 프로퍼티는 `,`로 구분한다. 예:) programmers, designer, bookkeeper
Method : 객체에 소속된 함수


### 33. 객체의 활용

```html
<head>
  <script>
  	var Links = {
    	setColor:function (color) {
        var alist = document.querySelectorAll("a");
        var i = 0;
          while(i<alist.length) {
            alist[i].style.color=color;
            i = i+1;
        }
      }
    }
    var Body = {
    	setColor:function (color) {
      	document.querySelector('body').style.color = color;
      },
      
      setBackgroundColor:function (color) {
      	document.querySelector('body').style.backgroundColor = color;
      }
    }
  	function nightDayHandler(self) {
      var target = document.querySelector("body");
      var h1 = document.querySelector("h1");
      if(self.value === "night") {
        Body.setBackgroundColor("black");
        Body.setColor("white");
        self.value = "day";
        Links.setColor('powderblue')
      }
      else {
        Body.setBackgroundColor("white");
        Body.setColor("black");
        self.value = "night";
        Links.setColor('blue')
        }
    }
  </script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```

## Javascript 활용
### 34. 파일로 쪼개서 정리 정돈하기

`<script src='colors.js'></script>`

- 유지보수 편리
- 가독성 높아짐
- 코드의 의미를 파일명으로 알 수 있음

```html
<head>
  <script src='colors.js'></script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```

```js
var Links = {
    	setColor:function (color) {
        var alist = document.querySelectorAll("a");
        var i = 0;
          while(i<alist.length) {
            alist[i].style.color=color;
            i = i+1;
        }
      }
    }
    var Body = {
    	setColor:function (color) {
      	document.querySelector('body').style.color = color;
      },
      
      setBackgroundColor:function (color) {
      	document.querySelector('body').style.backgroundColor = color;
      }
    }
  	function nightDayHandler(self) {
      var target = document.querySelector("body");
      var h1 = document.querySelector("h1");
      if(self.value === "night") {
        Body.setBackgroundColor("black");
        Body.setColor("white");
        self.value = "day";
        Links.setColor('powderblue')
      }
      else {
        Body.setBackgroundColor("white");
        Body.setColor("black");
        self.value = "night";
        Links.setColor('blue')
        }
    }
```

- 웹 서버는 접속이 적을수록 좋지만 캐시 덕분에 위와 같이 파일로 나누는 것이 좋다.
 - 웹 브라우저에 다운로드된 파일은 컴퓨터에 저장(캐싱)해서 네트워크를 통하지 않고 페이지를 불러올 수 있다.
  - 서버는 비용 절감을 할 수 있다.
  - 사용자는 네트워크 트레픽을 줄이고 훨씬 빠르게 웹 페이지를 로드할 수 있다.


### 35. 라이브러리와 프레임워크

- 프레임워크 : 들어가서 사용

- 라이브러리 : 재사용하기 쉬운 부품을 가져오는 곳
 - jQuery : 안정적인 라이브러리, 반복문 작성 가능
   - CDN(Content Delivery Network) : script scr를 이용해 사용 가능, 사용료 무료
 
```js
 $('a') // 이 웹페이지의 모든 a 태그를 jQeury로 제어하겠다는 의미
```
 
 ```html
<head>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script> // google cdn 추가
  <script src='colors.js'></script>
</head>
<body id='target'>
  <input id='night_day' type='button' value='night' onclick='nightDayHandler(this);'>
  <h1>
   동해물과 백두산이 마르고 닳도록
  </h1>
  <a href='www.naver.com' stype='color: blue;'>네이버</a>
</body>
```

'실습 코드'

```js
var Links = {
    	setColor:function (color) {
/*         var alist = document.querySelectorAll("a");
        var i = 0;
          while(i<alist.length) {
            alist[i].style.color=color;
            i = i+1;
        } */
        $('a').css('color', color); // jQuery 사용
      }
    }
    var Body = {
    	setColor:function (color) {
/*       	document.querySelector('body').style.color = color; */
	$('body').css('color', color); // jQuery 사용
      },
      
      setBackgroundColor:function (color) {
      	/* document.querySelector('body').style.backgroundColor = color; */
        $('body').css('backgroundColor', color); // jQuery 사용
      }
    }
  	function nightDayHandler(self) {
      var target = document.querySelector("body");
      var h1 = document.querySelector("h1");
      if(self.value === "night") {
        Body.setBackgroundColor("black");
        Body.setColor("white");
        self.value = "day";
        Links.setColor('powderblue')
      }
      else {
        Body.setBackgroundColor("white");
        Body.setColor("black");
        self.value = "night";
        Links.setColor('blue')
        }
    }
```

### 36.UI vs API

- UI(User Interface) : 사용자가 시스템 제어하기 위한 조작 장치 

- API(Application Programming Interface) : 프로그래머들이 사용하는 조작 장치(내장된 기능)
 - 예: js의 alert()이 웹 브라우저에 조작  


### 37. 수업을 마치며

- 토이 프로젝트는 최소한의 도구만 가지고 도전

- 웹 개발 검색방법 
  - document 객체 : 태그를 삭제하거나 자식 태그 추가하고 싶을 때, document는 DOM의 일부이다.
  - DOM(Document Object Model) : document 객체에서 태그를 삭제하거나 자식 태그 추가하는 방법을 못 찾을 때 사용
  - window 객체 : 웹브라우저 자체를 조작해야 할 때 
    - 예) 현재 열려있는 웹페이지의 주소를 알아야 할 때, 새창을 열여야 할 때, 웹브라우저의 화면크기를 자바스크립트를 통해 알아내야 할 때
  - ajax : 웹페이지를 새로고침하지 않고도 정보를 변경하고 싶을 때
  - cookie : 웹페이지가 새로고침되어도 현재 상태를 유지하도록 만들고 싶을 때
    - cookie는 사용자를 위한 개인화된 서비스를 만들 수 있다.
  - offline web application : 인터넷이 끊겨도 동작하는 웹페이지 만들고 싶을 때
  - webRTC : 화상 통신 웹 앱을 만들고 싶을 때
  - speech로 시작하는 API : 음성을 인식하거나 음성과 관련된 것을 처리하고 싶을 때
  - webGL : 3차원 그래픽을 이용하고 싶을 때
  - webVR : 가상현실에 대해서 알아보고 싶을 때

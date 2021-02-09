import 'package:flutter/material.dart';

void main() =>
 runApp(MaterialApp(
   title: 'Hello Flutter',
   home: Scaffold(
     appBar: AppBar(title: Text('Hello Flutter'),),
     body: _MyStatefulWidget(),
   )
  ));

class _MyStatefulWidget extends StatefulWidget {
  @override
  __MyStatefulWidgetState createState() => __MyStatefulWidgetState();
}

class __MyStatefulWidgetState extends State<_MyStatefulWidget> {
  String _buttonState;

  @override
  void initState() {
    super.initState();
    print('initState(): 기본값을 설정합니다');
    _buttonState = 'OFF';
  }
  
  @override
  void didChangeDependencies() {
    // TODO: implement didChangeDependencies
    print('didChangeDependencies() 호출됨');
  }

  @override
  Widget build(BuildContext context) {
    print('build() 호출됨');
    return Column(children: <Widget>[
      RaisedButton(
        child: Text('버튼을 누르세요'),
        onPressed: _onClick,),
      Row(children: <Widget>[
        Text('버튼 상태: '),
        Text(_buttonState),
      ],)
    ],);
  }

  void _onClick() {
    print('_oncClick() 호출');
    setState(() {
      print('setState() 호출');
      if (_buttonState == 'OFF') {
        _buttonState = 'ON';
      } else {
        _buttonState = 'OFF';
      }
    });
  }

  @override
  void didUpdateWidget(_MyStatefulWidget oldWidget) {
    // TODO: implement didUpdateWidget
    print('didUpdateWidget()');
  }

  @override
  void deactivate() {
    // TODO: implement deactivate
    print('deactivate()');
  }  

  @override
  void dispose() {
    // TODO: implement dispose
    print('dispose()');
  }

}
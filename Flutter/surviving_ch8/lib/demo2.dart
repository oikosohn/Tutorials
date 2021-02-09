import 'package:flutter/material.dart';

import 'main.dart';


void main() => runApp(app());


class app extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: '폼 검증 데모',
      home: Scaffold(
        appBar: AppBar(title: Text('폼 검증 데모'),
        ),
       body: MyCustomForm2(), 
      )
    );
  }
}

class MyCustomForm2 extends StatefulWidget {
  @override
  _MyCustomForm2State createState() => _MyCustomForm2State();
}

class _MyCustomForm2State extends State<MyCustomForm2> {
  @override
  Widget build(BuildContext context) {
    return Container(
      
    );
  }
}
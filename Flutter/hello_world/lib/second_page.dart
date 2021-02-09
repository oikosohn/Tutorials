import 'package:flutter/material.dart';
import 'package:hello_world/main.dart';
import 'package:hello_world/first_page.dart';

class SecondStatefulPage extends StatefulWidget {
  final Person person;

SecondStatefulPage({Key key, @required this.person}) : super(key: key);

  @override
  _SecondStatefulPageState createState() => _SecondStatefulPageState();
}

class _SecondStatefulPageState extends State<SecondStatefulPage> {
  
  @override
  void initState() {
    super.initState();
    print('SecondPage initState()');
  }

  @override
  void dispose() {
    super.dispose();
    print('SecondPage dispose()');
  }
  
  @override
  Widget build(BuildContext context) {
    print('SecondPage build()');
    return Scaffold(
      appBar: AppBar(
        title: Text('widget.person.name'),
      ),
      body: RaisedButton(
        child: Text('이전 페이지로'),
        onPressed: () {
          Navigator.pop(context);
        },
      )
    );
  }
}
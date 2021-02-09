import 'package:flutter/material.dart';
import 'package:hello_world/main.dart';
import 'package:hello_world/second_page.dart';

class FirstStatefulPage extends StatefulWidget {
  @override
  _FirstStatefulPageState createState() => _FirstStatefulPageState();
}

class _FirstStatefulPageState extends State<FirstStatefulPage> {
  @override
  void initState() {
    super.initState();
    print('FirstPage initState()');
  }

  @override
  void dispose() {
    super.dispose();
    print('FirstPage dispose()');
  }
  
  @override
  Widget build(BuildContext context) {
    print('FirstPage build()');
    return Scaffold(
      appBar: AppBar(
        title: Text('First'),
      ),
      body: RaisedButton(
        child: Text('다음 페이지로'),
        onPressed: () {
          final person = Person('홍길동', 20);
          final result = Navigator.push(
            context,
            MaterialPageRoute(builder: (context) => SecondStatefulPage(person: person)),
          );
          print(result);
        },
      )
    );
  }
}

import 'package:flutter/material.dart';


class SecondScreen extends StatelessWidget {


  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: DefaultTabController(length: 2,
      child: Scaffold(
        backgroundColor: Colors.white,
        appBar: AppBar(
          backgroundColor: Color(0xff13195b),
          bottom: TabBar(tabs: [
            Tab(text: "Message",),
            Tab(text: "Memories",)
          ]),
          centerTitle: true,
          title: Text("Happy Birthday", style: TextStyle(
            fontWeight: FontWeight.bold,
            color: Colors.white70
          ),),
        ),
        body: TabBarView(children: 
        [
          Padding(padding: EdgeInsets.only(left: 16, top: 36, right: 16, bottom: 36),
          child: Card(
            elevation: 10,
            shadowColor: Colors.blueAccent,
            child: Padding(padding: EdgeInsets.only(left: 16),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.center,
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text("Happy Birthday, I hope all your wishes come true and you live long years happy and healthy", 
                style: TextStyle(
                  fontSize: 20,
                  fontWeight: FontWeight.bold,

                ),)
              ],
            ),),
          ),
          ),
          Padding(
            padding: EdgeInsets.only(left: 16, top: 36, right: 16, bottom: 36),
            child: Card(
              elevation: 10,
              shadowColor: Colors.blueAccent,
              child: ListView(

                children: [
                  Image(image: AssetImage("assets/images/memories.jpg")),
                  Image(image: AssetImage("assets/images/memories1.jpg")),
                  Image(image: AssetImage("assets/images/memories2.jpg")),
                  Image(image: AssetImage("assets/images/memories3.jpg"))
                ],
              ),
            ),
          )
        ]),
      ),)
      
    );
  }
}
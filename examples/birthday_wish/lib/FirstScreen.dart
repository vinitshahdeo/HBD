import 'dart:async';
import 'dart:math';

import 'package:birthday_wish/SecondScreen.dart';
import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import 'package:flutter_icons/flutter_icons.dart';
import 'package:flutter_custom_clippers/flutter_custom_clippers.dart';
import 'package:confetti/confetti.dart';

class FirstScreen extends StatefulWidget {
  @override
  _FirstScreenState createState() => _FirstScreenState();
}

class _FirstScreenState extends State<FirstScreen> {
  ConfettiController _controllerCenterRight;
  ConfettiController _controllerCenterLeft;
  Timer _timer;
  int _start = 5;

  void startTimer() {
    const oneSec = const Duration(seconds: 3);
    _timer = new Timer.periodic(
        oneSec,
        (Timer timer) => setState(() {
              if (_start < 1) {
                _controllerCenterRight.play();
                _controllerCenterLeft.play();
                timer.cancel();
              } else {
                _start = _start - 1;
              }
            }));
  }

  @override
  void initState() {
    _controllerCenterRight =
        ConfettiController(duration: const Duration(seconds: 10));
    _controllerCenterLeft =
        ConfettiController(duration: const Duration(seconds: 10));
    super.initState();
  }

  @override
  void dispose() {
    _timer.cancel();
    _controllerCenterLeft.dispose();
    _controllerCenterRight.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    startTimer();
    return Scaffold(
      bottomNavigationBar: Container(
        height: 50,
        child: BottomAppBar(
          shape: CircularNotchedRectangle(),
          color: Colors.pinkAccent,
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          Navigator.push(
              context,
              MaterialPageRoute(
                builder: (Context) => SecondScreen(),
              ));
        },
        child: Icon(
          FlutterIcons.play_circle_outline_mdi,
          color: Colors.white,
          size: 60,
        ),
        backgroundColor: Color(0xFF13195b),
      ),
      floatingActionButtonLocation: FloatingActionButtonLocation.centerDocked,
      body: Column(
        children: [
          ClipPath(
            clipper: WaveClipperTwo(),
            child: Container(
              height: 220,
              decoration: BoxDecoration(
                  image: DecorationImage(
                      image: AssetImage("assets/images/balloon.jpg"),
                      fit: BoxFit.fitWidth)),
            ),
          ),
          Padding(
            padding: const EdgeInsets.only(right: 16),
            child: Align(
              alignment: Alignment.centerRight,
              child: Text(
                "$_start",
                style: TextStyle(fontWeight: FontWeight.w900, fontSize: 50),
              ),
            ),
          ),
          Stack(
            children: [
              Align(
                alignment: Alignment.topCenter,
                child: ConfettiWidget(
                  confettiController: _controllerCenterRight,
                  blastDirection: pi,
                  particleDrag: 0.05,
                  emissionFrequency: 0.05,
                  numberOfParticles: 20,
                  gravity: 0.05,
                  shouldLoop: false,
                  colors: const [Colors.green, Colors.blue, Colors.pink],
                ),
              ),
              Align(
                alignment: Alignment.centerRight,
                child: ConfettiWidget(
                  confettiController: _controllerCenterRight,
                  blastDirection: pi,
                  particleDrag: 0.05,
                  emissionFrequency: 0.05,
                  numberOfParticles: 20,
                  gravity: 0.05,
                  shouldLoop: false,
                  colors: const [Colors.green, Colors.blue, Colors.pink],
                ),
              ),
              Align(
                alignment: Alignment.centerLeft,
                child: ConfettiWidget(
                  confettiController: _controllerCenterLeft,
                  blastDirection: 0,
                  particleDrag: 0.05,
                  emissionFrequency: 0.6,
                  minimumSize: const Size(10, 10),
                  maximumSize: const Size(50, 50),
                  numberOfParticles: 1,
                  gravity: 0.1,
                ),
              ),
              Column(
                children: [
                  Padding(
                    padding: EdgeInsets.only(top: 5, left: 20),
                    child: Text(
                      "Happy",
                      style: TextStyle(
                          fontWeight: FontWeight.w900,
                          color: Color(0xff13195b),
                          fontSize: 90),
                    ),
                  ),
                  SizedBox(
                    height: 40,
                  ),
                  Padding(
                    padding: EdgeInsets.only(left: 70),
                    child: Text(
                      "Birthday",
                      style: TextStyle(
                          fontWeight: FontWeight.w900,
                          color: Color(0xff13195b),
                          fontSize: 50),
                    ),
                  )
                ],
              )
            ],
          )
        ],
      ),
    );
  }
}

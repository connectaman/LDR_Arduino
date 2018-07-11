{\rtf1\ansi\ansicpg1252\cocoartf1641\cocoasubrtf100
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 int pot=A0;\
void setup() \{ \
  // initialize serial communication at 9600 bits per second: \
  Serial.begin(9600); \
  pinMode(pot,INPUT);\
\} \
 \
// the loop routine runs over and over again forever: \
void loop() \{ \
  // read the input on analog pin 0: \
  int sensorValue = analogRead(pot); \
  // print out the value you read: \
  Serial.println(sensorValue); \
  delay(100);        // delay in between reads for stability \
\} }
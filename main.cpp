#include <iostream>
#include "3main.cpp"
#include "part2.cpp"
#include "main1.cpp"
#include "human.h"

int main() {
  human h("Default");
  cout<<"What is your name ? : ";
  cin>>name;


  int c = part1(name);
  int b = Part2(name);
  int a = Part3(name);
}
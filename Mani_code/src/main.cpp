#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>

#include <settings.h>
#include <functions.h>
#include <moving.h>

void setup()
{
  BT.begin(9600);
  initializ_pins();

  delay(1000);

  BT.println("Lets play");
  BT.println("1-stand");
  BT.println("2-forward");
  BT.println("3-rotate right");
  BT.println("4-rotate left");
  BT.println("5-go back");
  BT.println("6-died");
}

void loop()
{

  if (BT.available())
  {
    a = (BT.read());
  }

  switch (a)
  {
  case '1':
    start_position_hight();
    a = '0';
    break;
  case '2':

    if (counter_of_steps == 1)
    {

      Przedstaw_nogi_lewej();
      realizacja_posuwu_left();
      realizacja_powrotu_nogi_lewej();
      counter_of_steps = 2;
      a = '0';
      break;
    }

    if (counter_of_steps == 2)
    {

      Przedstaw_nogi1_prawej();
      realizacja_posuwu_right();
      realizacja_powrotu_nogi_prawej();
      counter_of_steps = 1;
      a = '0';
      break;
    }
  case '3':
    obrut_prawo();
    counter_of_steps = 1;
    a = '0';
    break;
  case '4':
    obrut_lewo();
    counter_of_steps = 2;
    a = '0';
    break;
  case '5':

    if (counter_of_steps == 1)
    {

      krok_do_tulu_left();

      krok_do_tylu_pchniecie_left();

      powrut_nogi_back_left();

      counter_of_steps = 2;

      a = '0';
      break;
    }

    if (counter_of_steps == 2)
    {

      krok_do_tulu_right();
      krok_do_tylu_pchniecie_right();
      powrut_nogi_back_right();

      counter_of_steps = 1;
      a = '0';
      break;
    }

  case '6':

    dead();

    a = '0';
    break;
  }
}

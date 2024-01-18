void initializ_pins()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            servo[i][j].attach(servo_pin[i][j]);
            delay(20);

            if (j == 0 && i == 0)
            {
                servo[0][0].write(135);
            }

            if (j == 1 && i == 0)
            {
                servo[0][1].write(45);
            }

            if (j == 2 && i == 0)
            {
                servo[0][2].write(135);
            }

            if (j == 3 && i == 0)
            {
                servo[0][3].write(45);
            }
        }
    }
}

void start_position_hight()
{

    servo[0][0].write(120);

    delay(500);

    servo[0][1].write(80);

    delay(500);

    servo[0][2].write(90);

    delay(500);

    servo[0][3].write(90);

    delay(500);

    servo[2][0].write(90);
    servo[2][1].write(90);
    servo[2][2].write(90);
    servo[2][3].write(90);
}

void dead()
{
    for (int i = 0; i <= 90; i++)
    {
        delay(15);
        servo[2][0].write(90 + i);
        servo[2][1].write(90 - i);
        servo[2][2].write(90 + i);
        servo[2][3].write(90 - i);
    }
}
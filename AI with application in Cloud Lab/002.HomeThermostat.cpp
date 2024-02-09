#include <iostream>

using namespace std;



int

environmentSensor (double *envTemp, double *humidity)

{

    *envTemp = 45.0;

    *humidity = 60.0;

  return 0;

}



int

bodySensor (double *bodyTemp)

{

    *bodyTemp = 37.0;

  return 0;

}



void

HomeThermostat (double envTemperature, double humidity, double bodyTemperature)

{

	  if ((envTemperature > bodyTemperature)

		  || (envTemperature < bodyTemperature - 10)&&(humidity<61||humidity>61))

		{

		  cout << "HomeThermostat is enabled."<<endl;



		  if (envTemperature > bodyTemperature && humidity < 61)

			{

		        cout << "HomeThermostat is cooling the room."<<endl;

			    for (int i = envTemperature; i >= bodyTemperature-7; i--)

				{

				cout << "Current room temperature is "<<i<<endl;

				    envTemperature = i;

				}

		        cout << "HomeThermostat has stopped."<<endl;



			}

		  if (envTemperature < bodyTemperature && humidity < 61)

			{

		        cout << "HomeThermostat is heating the room."<<endl;

			    for (int i = envTemperature; i <= bodyTemperature+2; i++)

				{

				cout << "Current room temperature is "<<i<<endl;

				    envTemperature = i;

				}

		        cout << "HomeThermostat has stopped."<<endl;



			}





		}

	}



int main ()

{

  double envTemp, humidity, bodyTemp;

  environmentSensor (&envTemp, &humidity);

  bodySensor (&bodyTemp);

  HomeThermostat (envTemp, humidity, bodyTemp);

  return 0;

}

/*
Definindo itens a serem utilizados durante o código
No caso nos temos as 3 entradas de cores diferentes do LED RGB
O LED comum foi ligado diretamente na linha 5V, sendo controlado apenas
pelo liga/desliga, que o controla pelo fio negativo, abrindo ou fechando o circuito.
*/
int RGBv = 10;
int RGBve = 8;
int RGBa = 9;

//Dizendo ao código a função dos itens, se enviaram dados, ou se receberam
//No caso nossos itens recebem sinais de ligar ou desligar
void setup()
{
  pinMode(RGBv, OUTPUT);
  pinMode(RGBve, OUTPUT);
  pinMode(RGBa, OUTPUT);
  //Caso houvesse um iten para enviar dado ele seria definico como INPUT
}

//Código que rodara em loop até o desligamento do microcontrolador
void loop()
{
  digitalWrite(RGBv, LOW); //Definindo LED como desligado
  digitalWrite(RGBve, LOW);
  digitalWrite(RGBa, HIGH); //Definindo LED como ligado
  delay(150); //Adicionando um delay para melhor visualização

  digitalWrite(RGBv, LOW);
  digitalWrite(RGBve, HIGH);
  digitalWrite(RGBa, LOW);
  delay(150);
  
  digitalWrite(RGBv, HIGH);
  digitalWrite(RGBve, LOW);
  digitalWrite(RGBa, LOW);
  delay(150);
}
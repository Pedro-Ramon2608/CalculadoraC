# CalculadoraC

🔢 Calculadora Interativa em C

Este projeto consiste em uma calculadora funcional desenvolvida na linguagem C. Ela permite ao usuário realizar operações matemáticas básicas através de um menu interativo no terminal, com foco em uma execução contínua até que o usuário decida encerrar.

---

🚀 Funcionalidades

O programa oferece as quatro operações aritméticas principais:

* Soma (+)

* Subtração (-)

* Multiplicação (*)

* Divisão (/): Inclui uma validação importante para impedir a divisão por zero, evitando erros de execução.

---
🛠️ Conceitos Aplicados

Durante o desenvolvimento deste projeto, foram praticados conceitos essenciais de programação:

* Entrada e Saída de Dados: Uso de printf e scanf para interação com o usuário.

* Estruturas de Repetição: Implementação de um laço while(1) para manter a calculadora ativa.

* Lógica Condicional: Uso de if/else if/else para selecionar a operação correta com base na escolha do usuário.

* Formatação de Saída: Os resultados são exibidos com duas casas decimais (%.2f) para melhor leitura.

---
📂 Estrutura do Código

O código está estruturado da seguinte forma:

* Função `calculadora()`: Responsável por exibir o menu de opções disponíveis.

* Função `main()`: Onde reside o loop principal que gerencia a entrada dos números, o processamento das operações e a exibição dos resultados.

---
💻 Como executar

Certifique-se de ter um compilador C (como o GCC) instalado em sua máquina.

1. Clone o repositório:


##### Bash
```
git clone https://github.com/Pedro-Ramon2608/CalculadoraC.git
```
2. Compile o arquivo:

##### Bash
```
gcc main.c -o calculadora
```
3. Execute o programa:

##### Bash
```
./calculadora
```

# PROGRAMA DE SIMULAÇÃO DE VOTOS - ALGORITMOS E LÓGICA DE PROGRAMAÇÃO

[![MIT license](https://badgen.net/github/license/Naereen/Strapdown.js)](https://github.com/Naereen/StrapDown.js/blob/master/LICENSE)

## Tecnologia
![C language]( https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

Este programa é um programa de console que implementei para realizar o cadastro e a pre-consulta das pessoas com sintomas de Coronavírus. Ele permite basicamente, realizar a separação dos suspeitos de COVID-19 dos não suspeitos. O programa é baseado nos requisitos abaixo.

<br/><br/>
<strong>OBS:</strong> Esta atividade, é uma atividade que foi proposta pela [UNICESUMAR](https://www.unicesumar.edu.br/ead/) do curso de Engenharia de Software modulo 52/2021, disciplina ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II.
 <br/><br/>

# REQUISITOS DO SISTEMA
A Pandemia do COVID-19 está lotando a fila dos hospitais, sabe-se que além da vacina, a prevenção através do distanciamento social, uso de álcool para higienização das mãos e uso de máscara ainda é o melhor método para controle da pandemia. A tecnologia tem sido também uma grande aliada para que a vida de milhões de pessoas continuem relativamente normal, muitos programas de computadores realizam tarefas de forma automatizada, evitando assim a aproximação entre as pessoas, podemos ver por exemplo em supermercados, caixas com autoatendimento. Ferramentas de reuniões e aulas online nunca foram tão utilizadas como agora na Pandemia, graças a essas tecnologia o impacto da pandemia se torna cada vez menor além de se promover o distanciamento social.

Imagine então que você faz parte de uma equipe de Tecnologia e Desenvolvimento de um grande hospital no qual possui um pronto atendimento 24 horas que atende as mais diversas emergências médicas, desde doenças infecciosas como o COVID-19 a diversas outros problemas de saúde. Devido a pandemia a fila para o primeiro atendimento está aumentando cada vez mais, sendo um grande risco para contaminação pelo Coronavírus devido a alta demanda e aglomeração que se formam com a filas.

Por isso você foi encarregado de criar um programa que faça uma triagem inicial através de totens eletrônicos que serão disponibilizados no pronto atendimento, agilizando assim o atendimento e fazendo a separação dos suspeitos de COVID-19 dos não suspeitos, garantindo um distanciamento e redução da infecção gerado pelas filas.

### Neste programa o paciente chegará ao totem e fará um cadastro prévio indicando os seguintes dados:
* CPF
* Nome
* Sexo
* Idade

Após o cadastro o paciente deve responder a um questionário de sintomas no qual cada sintoma terá um peso para avaliação do risco de COVID, os sintomas são:

* Tem Febre? (5 pontos)
* Tem dor de cabeça? (1 ponto)
* Tem secreção nasal ou espirros? (1 ponto)
* Tem dor/irritação na garganta? (1 ponto)
* Tem tosse seca? (3 pontos)
* Tem dificuldade respiratória? (10 pontos)
* Tem dores no corpo? (1 ponto)
* Tem diarréia? (1 ponto)
* Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (10 pontos)
* Esteve em locais com grande aglomeração? (3 pontos)

OBS: Caso o usuário indique que SIM (S) soma o valor, caso seja indicado NÃO (N) não soma o valor.

O encaminhamento será feito para 3 alas, as de Risco Baixo, Risco Médio e Risco Alto.<br/>
    Para o risco baixo o total de pontos dos sintomas deverão ser de 0 a 9;<br/>
    Para o risco médio de 10 a 19 pontos;<br/>
    para o risco alto de 20 ou mais pontos.

Após preenchimento indicar para qual ala o paciente deverá se dirigir

<strong> Para finalizar deve ser salvo em um arquivo com os dados do paciente e qual sua pontuação de sintomas para que seja realizada possíveis auditorias por parte da direção do hospital.
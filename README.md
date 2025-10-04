# 🃏 Super Trunfo em C - Nível Avançado

Projeto desenvolvido como parte do desafio **Super Trunfo** em linguagem C, aplicando conceitos fundamentais de lógica de programação, estruturas de dados e comparação de atributos.

Este projeto faz parte das atividades avaliativas e tem como objetivo criar um sistema que **compara cartas** com base em atributos como população, área, PIB e muito mais.

---

## 🚀 Funcionalidades

✅ Cadastro de **duas cartas** com os seguintes atributos:
- Estado (A–H)
- Código da carta (ex: A01)
- Nome da cidade
- População
- Área (km²)
- PIB (em bilhões)
- Número de pontos turísticos

✅ Cálculos automáticos:
- **Densidade populacional**  
  (população ÷ área)
- **PIB per capita**  
  (PIB ÷ população)
- **Super Poder**  
  (pontuação total somando todos os critérios ponderados)

✅ Comparação entre as cartas:
- População  
- Área  
- PIB  
- Pontos turísticos  
- Densidade populacional  
- PIB per capita  
- Super Poder  

✅ Exibição dos resultados de forma organizada no terminal.

---

## ⚙️ Como Compilar e Executar

### 🧱 1. Compilar o código

No terminal (Linux, macOS ou Windows com GCC instalado):

```bash
gcc super_trunfo.c -o super_trunfo

# Agenda de Contatos em C

Este projeto é uma implementação simples de uma agenda de contatos utilizando a linguagem de programação C. A aplicação permite adicionar, visualizar, editar e deletar contatos armazenados localmente.

## Funcionalidades

- **Adicionar Contato**: Insira informações como nome, telefone e e-mail.
- **Listar Contatos**: Veja todos os contatos salvos na agenda.
- **Editar Contato**: Atualize as informações de um contato existente.
- **Excluir Contato**: Remova um contato da agenda.

## Tecnologias Utilizadas

- **C**: Linguagem de programação usada para desenvolver a aplicação.
- **Conio.h**: Biblioteca usada para manipulações de tela (como limpar a tela e manipular cores), que não faz parte da biblioteca padrão do C.

## Pré-requisitos

Antes de executar a aplicação, é necessário instalar a biblioteca `conio.h`, que não é padrão no ambiente de desenvolvimento C em sistemas Unix/Linux. 

### Instalando a biblioteca Conio.h

Em sistemas baseados em Debian, você pode instalar a biblioteca Conio seguindo estes passos:

```bash
sudo apt-get update
sudo apt-get install conio.h

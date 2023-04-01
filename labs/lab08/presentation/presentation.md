---
## Front matter
lang: ru-RU
title: Лабораторная работа №8
subtitle: Редактор vi
author:
  - Рогожина Н.А.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 01 апреля 2023

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

# Информация

## Докладчик

:::::::::::::: {.columns align=center}
::: {.column width="70%"}

  * Рогожина Надежда Александровна
  * Студентка 1го курса, НКАбд-02-22
  * Компьютерные и информационные науки
  * Российский университет дружбы народов
  * [Github](https://github.com/MikoGreen/study_2022-2023_os-intro)

:::
::: {.column width="30%"}

:::
::::::::::::::

# Вводная часть

## Актуальность

- Текстовый редактор vi установлен по умолчанию практически во всех дистрибутивах, следовательно умение пользоваться им значительно расширит количество дистрибутивов вашего портфолио.

## Объект и предмет исследования

- Текстовый редактор vi

## Цели и задачи

- Познакомиться с операционной системой Linux. Получить практические навыки работы с редактором vi, установленным по умолчанию практически во всех дистрибутивах.

# Содержание лабораторной работы

## Создание нового файла с использованием vi

Вызовем vi и создайте файл hello.sh:

![Вызов vi](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/3.png){#fig:001 width=70%}

## Создание нового файла с использованием vi

Нажмем клавишу i и введем следующий текст:

```
1 #!/bin/bash
2 HELL=Hello
3 function hello {
4 LOCAL HELLO=World
5 echo $HELLO
6 }
7 echo $HELLO
8 hello
```

## Создание нового файла с использованием vi

![Редактирование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/4.png){#fig:002 width=40%}

## Создание нового файла с использованием vi

Нажмем клавишу Esc для перехода в командный режим после завершения ввода текста и ":" для перехода в режим последней строки и внизу вашего экрана появится приглашение в виде двоеточия:

![Переход в командный режим](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/5.png){#fig:003 width=40%}

## Создание нового файла с использованием vi

Нажмем w (записать) и q (выйти), а затем нажмем клавишу Enter для сохранения вашего текста и завершения работы:

![Сохранение и выход из файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/6.png){#fig:004 width=40%}

## Редактирование существующего файла

1. Вызовите vi на редактирование файла:

```
1 vi ~/work/os/lab06/hello.sh
```

![vi ~/work/os/lab06/hello.sh](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/7.png){#fig:005 width=70%}

## Редактирование существующего файла

Перейдем в режим вставки и замените на HELLO. Нажмем Esc для возврата в командный режим:

![Изменение слова](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/9.png){#fig:006 width=40%}

## Редактирование существующего файла

Удалим последнюю строку:

![Удаление последней строчки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/13.png){#fig:007 width=40%}

## Редактирование существующего файла

Введем команду отмены изменений u для отмены последней команды:

![Отмена последней команды](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/14.png){#fig:008 width=40%}

# Выводы

## Выводы

В ходе выполнения лабораторной работы мы научились пользоваться с редактором vi, установленным по умолчанию практически во всех дистрибутивах Linux.



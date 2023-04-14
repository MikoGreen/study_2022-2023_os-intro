---
## Front matter
title: "Отчёт по лабораторной работе №14"
subtitle: "Именованные каналы"
author: "Надежда Александровна Рогожина"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Приобретение практических навыков работы с именованными каналами.

# Задание

Изучите приведённые в тексте программы server.c и client.c. Взяв данные примеры за образец, напишите аналогичные программы, внеся следующие изменения:

1. Работает не 1 клиент, а несколько (например, два).

2. Клиенты передают текущее время с некоторой периодичностью (например, раз в пять секунд). Используйте функцию sleep() для приостановки работы клиента.

3. Сервер работает не бесконечно, а прекращает работу через некоторое время (например, 30 сек). Используйте функцию clock() для определения времени работы сервера. 

# Теоретическое введение

Одним из видов взаимодействия между процессами в операционных системах является обмен сообщениями. Под сообщением понимается последовательность байтов, передаваемая от одного процесса другому. В операционных системах типа UNIX есть 3 вида межпроцессорных взаимодействий:

- общеюниксные (именованные каналы, сигналы), 
- System V Interface Definition (SVID — разделяемая память, очередь сообщений, семафоры) и 
- BSD (сокеты)

Для передачи данных между неродственными процессами можно использовать механизм именованных каналов (named pipes). Данные передаются по принципу FIFO (First In First Out) (первым записан — первым прочитан), поэтому они называются также FIFO pipes или просто FIFO. Именованные каналы отличаются от неименованных наличием идентификатора канала, который представлен как специальный файл (соответственно имя именованного канала — это имя файла). Поскольку файл находится на локальной файловой системе, данное IPC используется внутри одной системы.

После создания файла канала процессы, участвующие в обмене данными, должны открыть этот файл либо для записи, либо для чтения. При закрытии файла сам канал продолжает существовать. Для того чтобы закрыть сам канал, нужно удалить его файл, например с помощью вызова unlink(2).

Каналы представляют собой простое и удобное средство передачи данных, которое, однако, подходит не во всех ситуациях. Например, с помощью каналов довольно трудно организовать обмен асинхронными сообщениями между процессами.

# Выполнение лабораторной работы

Изучите приведённые в тексте программы server.c и client.c. Взяв данные примеры за образец, напишите аналогичные программы, внеся следующие изменения:

1. Работает не 1 клиент, а несколько (например, два).

2. Клиенты передают текущее время с некоторой периодичностью (например, раз в пять секунд). Используйте функцию sleep() для приостановки работы клиента.

3. Сервер работает не бесконечно, а прекращает работу через некоторое время (например, 30 сек). Используйте функцию clock() для определения времени работы сервера.

Первым делом составим нужные нам файлы:

- client.c для первого клиента (рис. @fig:001).

![client.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/1.png){#fig:001 width=70%}

- client2.c для второго клиента (рис. @fig:002).

![client2.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/2.png){#fig:002 width=70%}

- Файл самого сервера (рис. @fig:003).

![server.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/3.png){#fig:003 width=70%}

- Заголовочный файл со стандартными определениями (рис. @fig:004).

![common.h](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/4.png){#fig:004 width=70%}

- Makefile (рис. @fig:005).

![Makefile](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/5.png){#fig:005 width=70%}

После создания всех файлов запустим команду make (рис. @fig:006).

![make](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/6.png){#fig:006 width=70%}

Команда выполнена успешно, и затем я открыла 3 терминала и запустила сервер и двух клиентов (рис. @fig:007).

![Запуск сервера с клиентами](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab14/report/image/7.png){#fig:007 width=70%}

Через некоторое время (-76 секунд) сервер завершил работу, и в тот же момент, я попыталась запустить первого клиента - именно из-за этого выдало "ошибку подключения".

# Выводы

В ходе лабораторной работы мы приобрели практические навыки работы с именованными каналами.

# Список литературы{.unnumbered}

1. [Руководство по выполнению лабораторной работы №14](https://esystem.rudn.ru/pluginfile.php/1975787/mod_resource/content/3/014-ipc-fifo.pdf)

::: {#refs}
:::

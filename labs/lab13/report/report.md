---
## Front matter
title: "Отчёт по лабораторной работе №13"
subtitle: "Средства, применяемые при разработке программного обеспечения в ОС типа UNIX/Linux"
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

Приобрести простейшие навыки разработки, анализа, тестирования и отладки приложений в ОС типа UNIX/Linux на примере создания на языке программирования С калькулятора с простейшими функциями.

# Задание

1. В домашнем каталоге создайте подкаталог ~/work/os/lab_prog.

2. Создайте в нём файлы: calculate.h, calculate.c, main.c.

Это будет примитивнейший калькулятор, способный складывать, вычитать, умножать и делить, возводить число в степень, брать квадратный корень, вычислять sin, cos, tan. При запуске он будет запрашивать первое число, операцию, второе число. После этого программа выведет результат и остановится.

3. Выполните компиляцию программы посредством gcc:

```
gcc -c -g calculate.c
gcc -c -g main.c
gcc calculate.o main.o -o calcul -lm
```

4. При необходимости исправьте синтаксические ошибки.

5. Создайте Makefile.

6. С помощью gdb выполните отладку программы calcul (перед использованием gdb исправьте Makefile):

- Запустите отладчик GDB, загрузив в него программу для отладки:
- Для запуска программы внутри отладчика введите команду run
- Для постраничного (по 9 строк) просмотра исходного код используйте команду list
- Для просмотра строк с 12 по 15 основного файла используйте list с параметрами
- Для просмотра определённых строк не основного файла используйте list с параметрами
- Установите точку остановки в файле calculate.c на строке номер 21
- Выведите информацию об имеющихся в проекте точка остановки
- Запустите программу внутри отладчика и убедитесь, что программа остановится в момент прохождения точки остановки
- Посмотрите, чему равно на этом этапе значение переменной Numeral
- Сравните с результатом вывода на экран после использования команды
- Уберите точки остановки

7. С помощью утилиты splint попробуйте проанализировать коды файлов calculate.c и main.c.

# Теоретическое введение

Стандартным средством для компиляции программ в ОС типа UNIX является GCC (GNU Compiler Collection). Это набор компиляторов для разного рода языков программирования (С, C++, Java, Фортран и др.). Работа с GCC производится при помощи одноимённой управляющей программы `gcc`, которая интерпретирует аргументы командной строки, определяет и осуществляет запуск нужного компилятора для входного файла.

Файлы с расширением (суффиксом) `.c` воспринимаются gcc как программы на языке С, файлы с расширением `.cc` или `.C` — как файлы на языке C++, а файлы c расширением `.o` считаются объектными.

Например, в табл. @tbl:std-dir приведено описание некоторых опций gcc.

: Некоторые опции компиляции в gcc {#tbl:std-dir}

| Опция | Описание                                                       |
|--------------|-------------------------------------------------|
| `-с`  | Компиляция без компоновки — создаются объектные файлы file.o             |
| `-o file-name`      | Задать имя file-name создаваемому файлу  |
| `-g`       | Поместить в файл (объектный или исполняемый) отладочную информацию для отладчика gdb |
| `-MM`      | Вывести зависимости от заголовочных файлов C и/или C++ программ в формате, подходящем для утилиты make; при этом объектные или исполняемые файлы не будет созданы |
| `-Wall`     | Вывод на экран сообщений об ошибках, возникших во время компиляции  |

# Выполнение лабораторной работы

1. В домашнем каталоге создайте подкаталог ~/work/os/lab_prog (рис. @fig:001).

![Создание подкаталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/1.png){#fig:001 width=70%}

2. Создайте в нём файлы: calculate.h, calculate.c, main.c (рис. @fig:002).

![Создание файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/2.png){#fig:002 width=70%}

Это будет примитивнейший калькулятор, способный складывать, вычитать, умножать и делить, возводить число в степень, брать квадратный корень, вычислять sin, cos, tan. При запуске он будет запрашивать первое число, операцию, второе число. После этого программа выведет результат и остановится (рис. @fig:003, @fig:004, @fig:005).

![calculate.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/3.png){#fig:003 width=70%}

![calculate.h](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/4.png){#fig:004 width=70%}

![main.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/5.png){#fig:005 width=70%}

3. Выполните компиляцию программы посредством gcc (рис. @fig:006):

```
gcc -c -g calculate.c
gcc -c -g main.c
gcc calculate.o main.o -o calcul -lm
```

![Компиляция программы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/6.png){#fig:006 width=70%}

4. При необходимости исправьте синтаксические ошибки.

Ошибок не было :)

5. Создайте Makefile (рис. @fig:007).

![Создание Makefile](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/7.png){#fig:007 width=70%}

В данном Makefile целями являются: 

- calcul - зависит от: calculate.o, main.o
- calculate.o - зависит от: calculate.c, calculate.h
- main.o - зависит от: main.c, calculate.h

На строчках 10, 13, 16 прописаны команды, которые относятся к 9,12 и 15 строчкам соответственно.

6. С помощью gdb выполните отладку программы calcul (перед использованием gdb исправьте Makefile):

Первоначально я запустила Makefile (рис. @fig:008), но так как обновления не требовалось, приступила к выполнению дальнейшего задания.

![make](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/8.png){#fig:008 width=70%}

- Запустите отладчик GDB, загрузив в него программу для отладки. Для запуска программы внутри отладчика введите команду run (рис. @fig:009):

![Запуск gdb](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/9.png){#fig:009 width=70%}

- Для постраничного (по 9 строк) просмотра исходного код используйте команду list (рис. @fig:010):

![list](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/10.png){#fig:010 width=70%}

- Для просмотра строк с 12 по 15 основного файла используйте list с параметрами (рис. @fig:011):

![list 12,15](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/11.png){#fig:011 width=70%}

- Для просмотра определённых строк не основного файла используйте list с параметрами (рис. @fig:012):

![list calculate.c:20,29](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/12.png){#fig:012 width=70%}

- Установите точку остановки в файле calculate.c на строке номер 21 (рис. @fig:013):

![Точка остановки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/13.png){#fig:013 width=70%}

- Выведите информацию об имеющихся в проекте точках остановки (рис. @fig:014):

![Точки остановки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/14.png){#fig:014 width=70%}

- Запустите программу внутри отладчика и убедитесь, что программа остановится в момент прохождения точки остановки (рис. @fig:015):

![run + backtrace](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/15.png){#fig:015 width=70%}

- Посмотрите, чему равно на этом этапе значение переменной `Numeral` (рис. @fig:016):

![print Numeral](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/16.png){#fig:016 width=70%}

- Сравните с результатом вывода на экран после использования команды (рис. @fig:017):

![display Numeral](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/17.png){#fig:017 width=70%}

Результаты вывода обеих команд одинаковы.

- Уберите точки остановки (рис. @fig:018):

![Удаление точек остановки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/18.png){#fig:018 width=70%}

После я решила проверить удаление точек остановки и запустила программу снова (рис. @fig:019):

![run](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/19.png){#fig:019 width=70%}

7. С помощью утилиты splint попробуйте проанализировать коды файлов calculate.c и main.c (рис. @fig:020, @fig:021):

![splint calculate.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/20.png){#fig:020 width=70%}

![splint main.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/21.png){#fig:021 width=70%}

# Выводы

В ходе лабораторной работы мы приобрели простейшие навыки разработки, анализа, тестирования и отладки приложений в ОС типа UNIX/Linux на примере создания на языке программирования С калькулятора с простейшими функциями.

# Список литературы{.unnumbered}

1. [Руководство по выполнению лабораторной работы №13](https://esystem.rudn.ru/pluginfile.php/1975785/mod_resource/content/5/013-lab_prog.pdf)

2. [Руководство пользования gdb](http://dmilvdv.narod.ru/Translate/LDD3/ldd_debuggers_related_tools.html)

3. [man splint](https://linux.die.net/man/1/splint)

::: {#refs}
:::

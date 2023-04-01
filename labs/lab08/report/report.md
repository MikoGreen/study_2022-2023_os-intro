---
## Front matter
title: "Отчёт по лабораторной работе №8"
subtitle: "Операционные системы"
author: "Рогожина Надежда Александровна"

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

Познакомиться с операционной системой Linux. Получить практические навыки работы с редактором vi, установленным по умолчанию практически во всех дистрибутивах.

# Задание

1. Ознакомиться с теоретическим материалом.
2. Ознакомиться с редактором vi.
3. Выполнить упражнения, используя команды vi.

# Теоретическое введение

В большинстве дистрибутивов Linux в качестве текстового редактора по умолчанию устанавливается интерактивный экранный редактор vi (Visual display editor). Редактор vi имеет три режима работы:

- командный режим — предназначен для ввода команд редактирования и навигации по редактируемому файлу;

- режим вставки — предназначен для ввода содержания редактируемого файла;

- режим последней (или командной) строки — используется для записи изменений в файл и выхода из редактора.

Для вызова редактора vi необходимо указать команду vi и имя редактируемого файла:

```
vi <имя_файла>
```

При этом в случае отсутствия файла с указанным именем будет создан такой файл.

Переход в командный режим осуществляется нажатием клавиши Esc . Для выхода из редактора vi необходимо перейти в режим последней строки: находясь в командном режиме, нажать Shift-; (по сути символ : — двоеточие), затем:

- набрать символы wq, если перед выходом из редактора требуется записать изменения в файл;

- набрать символ q (или q!), если требуется выйти из редактора без сохранения. 

**Замечание.** Следует помнить, что vi различает прописные и строчные буквы при наборе (восприятии) команд.

# Выполнение лабораторной работы

## Задание 1. Создание нового файла с использованием vi

1. Создайте каталог с именем ~/work/os/lab06 (рис. @fig:001):

![Создание нового каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/1.png){#fig:001 width=70%}

2. Перейдите во вновь созданный каталог (рис. @fig:002):

![Переход в созданный каталог](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/2.png){#fig:002 width=70%}

3. Вызовите vi и создайте файл hello.sh (рис. @fig:003):

![Вызов vi](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/3.png){#fig:003 width=70%}

4. Нажмите клавишу i и вводите следующий текст (рис. @fig:004):

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

![Редактирование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/4.png){#fig:004 width=70%}

5. Нажмите клавишу Esc для перехода в командный режим после завершения ввода текста и нажмите ":" для перехода в режим последней строки и внизу вашего экрана появится приглашение в виде двоеточия (рис. @fig:005):

![Переход в командный режим](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/5.png){#fig:005 width=70%}

6. Нажмите w (записать) и q (выйти), а затем нажмите клавишу Enter для сохранения вашего текста и завершения работы (рис. @fig:006):

![Сохранение и выход из файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/6.png){#fig:006 width=70%}

7. Сделайте файл исполняемым (рис. @fig:007):

```
1 chmod +x hello.sh
```

![Смена прав доступа](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/7.png){#fig:007 width=70%}

## Задание 2. Редактирование существующего файла

1. Вызовите vi на редактирование файла (рис. @fig:008):

```
1 vi ~/work/os/lab06/hello.sh
```

![vi ~/work/os/lab06/hello.sh](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/7.png){#fig:008 width=70%}

2. Установите курсор в конец слова HELL второй строки (рис. @fig:009):

![Установка курсора](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/8.png){#fig:009 width=70%}

3. Перейдите в режим вставки и замените на HELLO. Нажмите Esc для возврата в командный режим (рис. @fig:010):

![Изменение слова](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/9.png){#fig:010 width=70%}

4. Установите курсор на четвертую строку и сотрите слово LOCAL (рис. @fig:011):

![Удаление слова](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/10.png){#fig:011 width=70%}

5. Перейдите в режим вставки и наберите следующий текст: local, нажмите Esc для возврата в командный режим (рис. @fig:012):

![Добавление слова](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/11.png){#fig:012 width=70%}

6. Установите курсор на последней строке файла. Вставьте после неё строку, содержащую следующий текст: echo $HELLO (рис. @fig:013):

![Вставка текста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/12.png){#fig:013 width=70%}

7. Удалите последнюю строку (рис. @fig:014):

![Удаление последней строчки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/13.png){#fig:014 width=70%}

8. Введите команду отмены изменений u для отмены последней команды (рис. @fig:015):

![Отмена последней команды](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/14.png){#fig:015 width=70%}

9. Введите символ : для перехода в режим последней строки. Запишите произведённые изменения и выйдите из vi (рис. @fig:016):

![Сохранение и выход из файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab08/report/image/16.png){#fig:016 width=70%}

# Выводы

В ходе выполнения лабораторной работы мы научились пользоваться с редактором vi, установленным по умолчанию практически во всех дистрибутивах Linux.

# Список литературы{.unnumbered}

1. [Руководство по выполнению лабораторной работы №7](https://esystem.rudn.ru/pluginfile.php/1975775/mod_resource/content/4/008-lab_vi.pdf)

::: {#refs}
:::

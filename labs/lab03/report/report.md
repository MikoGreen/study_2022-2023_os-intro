---
## Front matter
title: "Отчёт по лабораторной работе №3"
subtitle: "Операционные системы"
author: "Надежда Александровна Рогожина, НКАбд-02-22"

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

Научиться оформлять отчёты с помощью легковесного языка разметки Markdown.

# Задание

- Сделайте отчёт по предыдущей лабораторной работе в формате Markdown.

- В качестве отчёта просьба предоставить отчёты в 3 форматах: pdf, docx и md (в архиве,
поскольку он должен содержать скриншоты, Makefile и т.д.

# Теоретическое введение

1. Чтобы создать заголовок, используйте знак ('#'), например:

	`# This is heading 1`
	
	`## This is heading 2`
	
	`### This is heading 3`
	
	`#### This is heading 4`
	
2. Выделение:

	This text is **bold**
	
3. Курсив:

	This text is *italic*
	
4. Полужирный курсив:

	This text is both ***bold and italic***
	
5. Цитирование:

> The drought had lasted now for ten million years, and the reign of the terrible lizards had long since ended. Here on the Equator, in the continent which would one day be known as Africa, the battle for existence had reached a new climax of ferocity, and the victor was not yet in sight. In this barren and desiccated land, only the small or the swift or the fierce could flourish, or even hope to survive ```

6. Маркированный список можно отформатировать с помощью звёздочек или тире:

- List item 1
	
- List item 2
	
- List item 3
	
7. Упорядоченный список:

	1. First instruction

	2. Second instruction

	3. Third instruction
	
8. Ссылки:

	```[link text](file-name.md)```
	
9. Код:

``` language
your code goes in here
```
10. Оформление таблиц:

В табл. @tbl:std-dir приведено краткое описание стандартных каталогов Unix.

: Описание некоторых каталогов файловой системы GNU Linux {#tbl:std-dir}

| Имя каталога | Описание каталога                                                                                                          |
|--------------|----------------------------------------------------------------------------------------------------------------------------|
| `/`          | Корневая директория, содержащая всю файловую                                                                               |
| `/bin `      | Основные системные утилиты, необходимые как в однопользовательском режиме, так и при обычной работе всем пользователям     |
| `/etc`       | Общесистемные конфигурационные файлы и файлы конфигурации установленных программ                                           |
| `/home`      | Содержит домашние директории пользователей, которые, в свою очередь, содержат персональные настройки и данные пользователя |
| `/media`     | Точки монтирования для сменных носителей                                                                                   |
| `/root`      | Домашняя директория пользователя  `root`                                                                                   |
| `/tmp`       | Временные файлы                                                                                                            |
| `/usr`       | Вторичная иерархия для данных пользователя                                                                                 |

# Выполнение лабораторной работы

Первым шагом сделаем титульный лист нашего отчёта (рис. @fig:001):

![Титульный лист](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/1.png){#fig:001 width=70%}

Напишем цель и задачи лабораторной работы (рис. @fig:002, @fig:003):

![Цель работы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/2.png){#fig:002 width=70%}

![Задачи работы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/3.png){#fig:003 width=70%}

Формируем теоретическое введение (рис. @fig:004, @fig:005):

![Теоретическое введение](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/4.png){#fig:004 width=70%}

![Теоретическое введение](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/5.png){#fig:005 width=70%}

Описываем выполнение лабораторной работы (рис. @fig:006):

![Выполнение ЛР](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/6.png){#fig:006 width=70%}

Описываем выводы и отвечаем на контрольные вопросы (рис. @fig:007, @fig:008):

![Выводы и контрольные вопросы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/7.png){#fig:007 width=70%}

![Контрольные вопросы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/8.png){#fig:008 width=70%}

Добавляем ссылки на источники (рис. @fig:009):

![Ссылки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab03/report/image/9.png){#fig:009 width=70%}

# Выводы

В ходе лабораторной работы мы научились выполнять отчеты с помощью легковесного языка разметки Markdown.

# Список литературы{.unnumbered}

1. [Руководство по выполнению лабораторной работы №3](https://esystem.rudn.ru/pluginfile.php/1975764/mod_resource/content/3/003-lab_markdown.pdf)

::: {#refs}
:::

---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап №6"
subtitle: "Архитектура компьютера и операционные системы"
author: "Рогожина Надежда Александровна, НКАбд-02-22"

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

- Создать свой сайт (разместить на Github pages заготовки для персонального сайта)

# Задание

- Перевести сайт на другой язык


# Теоретическое введение

Для реализации сайта используется генератор статических сайтов Hugo.

# Выполнение лабораторной работы

1. В папке config в файле languages.yaml добавила второй язык (рис. @fig:001):

![Языки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage6/report/image/1.jpg){#fig:001 width=70%}

2. В папке content добавила вторую папку (с контентом на другом языке) (рис. @fig:002):

![en-ru](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage6/report/image/2.jpg){#fig:002 width=70%}

3. Результат (рис. @fig:003, @fig:004):

![Сайт на русском языке](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage6/report/image/3.jpg){#fig:003 width=70%}

![Сайт на английском языке](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage6/report/image/4.jpg){#fig:004 width=70%}

# Выводы

В ходе лабораторной работы мы добавили основную информацию по нашему сайту.

# Список литературы{.unnumbered}

::: {#refs}
:::

---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап №5"
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

- Добавить с сайту все остальные элементы.

   - Сделать записи для персональных проектов.
   - Сделать пост по прошедшей неделе.
   - Добавить пост на тему по выбору.
        - Языки научного программирования.


# Теоретическое введение

Для реализации сайта используется генератор статических сайтов Hugo.

# Выполнение лабораторной работы

1. Добавила записи о проектах (рис. @fig:001):

![Проект](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/2.png){#fig:001 width=70%}

2. Результат (рис. @fig:002):

![Результат](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/1.png){#fig:002 width=70%}

Пока что добавила только один проект, но в планах добавить еще пару.

3. Добавила пост по прошедшей неделе (рис. @fig:003, @fig:004):

![Содержание поста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/3.png){#fig:003 width=70%}

![Результат](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/4.png){#fig:004 width=70%}

4. Пост по языкам научного программирования (рис. @fig:005, @fig:006):

![Содержание поста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/5.png){#fig:005 width=70%}

![Пост](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage5/report/image/6.png){#fig:006 width=70%}

# Выводы

В ходе лабораторной работы мы добавили основную информацию по нашему сайту.

# Список литературы{.unnumbered}

1. [Языки научного программирования с примерами](https://translated.turbopages.org/proxy_u/en-ru.ru.e19cc990-645fdf40-aeb7a7aa-74722d776562/https/en.wikipedia.org/wiki/Scientific_programming_language)

::: {#refs}
:::

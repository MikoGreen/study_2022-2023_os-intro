---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап №3"
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

- Добавить к сайту достижения.

- Список достижений.

        - Добавить информацию о навыках (Skills).
        - Добавить информацию об опыте (Experience).
        - Добавить информацию о достижениях (Accomplishments).
        
- Сделать пост по прошедшей неделе.
- Добавить пост на тему по выбору:

        - Легковесные языки разметки.
        - Языки разметки. LaTeX.
        - Язык разметки Markdown.


# Теоретическое введение

Для реализации сайта используется генератор статических сайтов Hugo.

# Выполнение лабораторной работы

1. В папке */home/narogozhina/work/blog/content/_index.md* я удалила заголовок рекламы Hugo

2. Добавила информацию о навыках (skills)(рис. @fig:001):

![Навыки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage3/report/image/1.png){#fig:001 width=70%}

3. Добавила информацию о опыте (рис. @fig:002):

![Опыт](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage3/report/image/2.png){#fig:002 width=70%}

4. Добавила информацию о достижениях (рис. @fig:003):

![Достижения](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage3/report/image/3.png){#fig:003 width=70%}

5. Добавила два поста (рис. @fig:004):

![Два поста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage3/report/image/4.png){#fig:004 width=70%}

# Выводы

В ходе лабораторной работы мы добавили основную информацию по нашему сайту.

# Список литературы{.unnumbered}

::: {#refs}
:::

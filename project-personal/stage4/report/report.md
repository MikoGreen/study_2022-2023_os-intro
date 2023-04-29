---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап №4"
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

- Добавить к сайту ссылки на научные и библиометрические ресурсы:

        - eLibrary : https://elibrary.ru/;
        - Google Scholar : https://scholar.google.com/;
        - ORCID : https://orcid.org/;
        - Mendeley : https://www.mendeley.com/;
        - ResearchGate : https://www.researchgate.net/;
        - Academia.edu : https://www.academia.edu/;
        - arXiv : https://arxiv.org/;
        - github : https://github.com/.
        
- Сделать пост по прошедшей неделе.
- Добавить пост на тему по выбору:

        - Оформление отчёта.
        - Создание презентаций.
        - Работа с библиографией.

# Теоретическое введение

Для реализации сайта используется генератор статических сайтов Hugo.

# Выполнение лабораторной работы

1. Добавила ссылки на научные и библиометрические ресурсы (рис. @fig:001):

![Ссылки на ресурсы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/1.png){#fig:001 width=70%}

2. Результат (рис. @fig:002):

![Результат](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/2.png){#fig:002 width=70%}

3. Добавила пост по прошедшей неделе (рис. @fig:003, @fig:004):

![Прошедшая неделя](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/3.png){#fig:003 width=70%}

![Содержание поста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/4.png){#fig:004 width=70%}

4. Пост по оформлению отчёта (рис. @fig:005, @fig:006):

![Содержание поста](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/5.png){#fig:005 width=70%}

![Оформление отчёта](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage4/report/image/6.png){#fig:006 width=70%}

# Выводы

В ходе лабораторной работы мы добавили основную информацию по нашему сайту.

# Список литературы{.unnumbered}

1. [Правила оформления отчёта](https://orfogrammka.ru/%D0%BE%D1%84%D0%BE%D1%80%D0%BC%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5/%D0%BE%D0%B1%D1%89%D0%B5%D0%B5_%D0%BE%D1%84%D0%BE%D1%80%D0%BC%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5_%D0%BE%D1%82%D1%87%D1%91%D1%82%D0%B0/)

::: {#refs}
:::

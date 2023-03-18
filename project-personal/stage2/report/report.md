---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап №2"
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

- Список добавляемых данных.
    - Разместить фотографию владельца сайта.
    - Разместить краткое описание владельца сайта (Biography).
    - Добавить информацию об интересах (Interests).
    - Добавить информацию от образовании (Education).
    
- Сделать пост по прошедшей неделе.

- Добавить пост на тему по выбору:
    - Управление версиями. Git.
    - Непрерывная интеграция и непрерывное развертывание (CI/CD).


# Теоретическое введение

Для реализации сайта используется генератор статических сайтов Hugo.

# Выполнение лабораторной работы

1. В папке */home/narogozhina/work/blog/content/authors/admin* я поменяла фото на свое, а также все действия по смене информации будут происходить в файле _index.md (рис. @fig:001):

![Фото](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/1.png){#fig:001 width=70%}

2. Я поменяла ФИО, а также указала то, кем являются, где учусь и чем занимаюсь (Short bio) (рис. @fig:002):

![ФИО и краткая биография](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/2.png){#fig:002 width=70%}

3. Добавила свои интересы (рис. @fig:003):

![Интересы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/3.png){#fig:003 width=70%}

4. Добавила информацию о своем образовании (рис. @fig:004):

![Образование](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/4.png){#fig:004 width=70%}

5. Добавила информацию о себе (рис. @fig:005):

![Информация о себе](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/5.png){#fig:005 width=70%}

Далее, переходим в папку */home/narogozhina/work/blog/content/post* и создаем посты (рис. @fig:006):

![Посты](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/6.png){#fig:006 width=70%} 

6. Пост о прошедшей неделе (рис. @fig:007, @fig:008, @fig:009, @fig:010):

![Фото](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/7.png){#fig:007 width=70%} 

![Название, дата и немного юмора](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/8.png){#fig:008 width=70%}

![Настройки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/9.png){#fig:009 width=70%} 

![Основной текст](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/10.png){#fig:010 width=70%} 

7. Пост по управлению версиями (рис. @fig:011, @fig:012, @fig:013):

![Фото](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/11.png){#fig:011 width=70%} 

![Название, дата](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/12.png){#fig:012 width=70%}

![Основной текст](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage2/report/image/13.png){#fig:013 width=70%} 

# Выводы

В ходе лабораторной работы мы добавили основную информацию по нашему сайту.

# Список литературы{.unnumbered}

::: {#refs}
:::

---
## Front matter
title: "Отчёт по индивидуальному проекту. Этап 1."
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

- Установить необходимое программное обеспечение.

- Скачать шаблон темы сайта.

- Разместить его на хостинге git.

- Установить параметр для URLs сайта.

- Разместить заготовку сайта на Github pages.

# Теоретическое введение

## Примеры использования git:

- Система контроля версий Git представляет собой набор программ командной строки. 
Доступ к ним можно получить из терминала посредством ввода команды git с различными опциями.

- Благодаря тому, что Git является распределённой системой контроля версий, резервную копию локального хранилища можно сделать простым копированием или архивацией.

## Основные команды git:

Например, в табл. @tbl:std-dir приведено краткое описание основных команд Git.

: Описание некоторых команд системы контроля версий Git {#tbl:std-dir}

| Команда | Описание команды                                                                  |
|--------------|-----------------------------------------------------------------------------------|
| git init     | Создание основного дерева репозитория  |
| git pull     | Получение обновлений(изменений текущего дерева из центрального репозитория |
| git push     | Отправка всех произведённых изменений локального дерева в центральный репозиторий |
| git status   | Просмотр списка изменённых файлов в текущей директории |
| git diff     | Просмотр текущих изменений  |
| git add .    | Добавление все изменённые и/или созданные файлы и/или каталоги |
| git rm имена_файлов | Удаление файлов и/или каталогов из индекса репозитория |
| git commit -am 'Описание коммита'| Сохранение всех добавленных изменений и всех изменённых файлов |
| git commit   | Сохранение добавленный изменений с внесением комментария через встроенный редактор |
| git checkout -b имя_ветки | Создание новой ветки, базирующейся на текущей | 
| git branch -d имя_ветки | Удаление локальной уже слитой с основным деревом ветки |
| git branch -D имя_ветки | Принудительное удаление локальной ветки |

Полный список команд можно посмотреть на официальном сайте: [Github.com](https://docs.github.com/en/get-started/using-github/github-command-palette)


# Выполнение лабораторной работы

Загружаем последнюю версию hugo (рис. @fig:001):

![Загрузка нужной нам версии](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/1.jpg){#fig:001 width=70%}

Файл скачивается в папку *"Загрузки"* (рис. @fig:002):

![Скачивание](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/2.jpg){#fig:002 width=70%}

По завершении скачивания извлекаем архив в ту же папку, в которой мы находимся:

![Извлечение](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/3.jpg){#fig:003 width=70%}

![Извлечение - выбор папки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/4.jpg){#fig:004 width=70%}

![Проверка извлечения](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/5.jpg){#fig:005 width=70%}

После извлечения файла, нам его необходимо вырезать и вставить в папку */usr/local/bin*:

![Вырезание файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/6.jpg){#fig:006 width=70%}

![Перенос файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/7.jpg){#fig:007 width=70%}

Далее открываем наш **github** и создаем репозиторий на основе данного нам:

[Репозиторий](https://github.com/wowchemy/starter-hugo-academic)

![Создание репозитория](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/8.jpg){#fig:008 width=70%}

При создании даём ему имя ***blog***:

![Создание репозитория](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/9.jpg){#fig:009 width=70%}

Проверка:

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/10.jpg){#fig:010 width=70%}

После клонируем данный репозиторий в путь */home/narogozhina/work*:

![Клонирование репозитория](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/11.jpg){#fig:011 width=70%}

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/12.jpg){#fig:012 width=70%}

Переходим в папку *blog* и запускаем *hugo*:

![Hugo](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/13.jpg){#fig:013 width=70%}

Так как выдало ошибку, доустановим модуль ***go*** из-под суперпользователя:

![Доустановка модуля "GO"](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/14.jpg){#fig:014 width=70%}

Возвращаемся в папку *blog* и запускаем *hugo*:

![HUGO](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/15.jpg){#fig:015 width=70%}

После установки необходимых модулей проверяем создание папок и файлов:

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/16.jpg){#fig:016 width=70%}

Удаляем каталог *public* с помощью *mc*:

![Удаляем public](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/17.jpg){#fig:017 width=70%}

Запускаем *hugo server*:

![Запуск hugo server](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/18.jpg){#fig:018 width=70%}

![Запуск hugo server](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/19.jpg){#fig:019 width=70%}

Открываем ссылку в браузере и видим сайт:

![Шаблон сайта](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/20.jpg){#fig:020 width=70%}

После проверки в браузере закроем сервер:

![Закрытие hugo server](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/21.jpg){#fig:021 width=70%}

Создание нового репозитория:

![Github](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/22.jpg){#fig:022 width=70%}

Название репозитория должно полностью совпадать с именем владельца + github.io:

![Создаем новый репозиторий](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/23.jpg){#fig:023 width=70%}

Возвращаемся в терминал, в папку work и клонируем туда наш репозиторий (свежесозданный):

![Клонирование репозитория](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/24.jpg){#fig:024 width=70%}

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/25.jpg){#fig:025 width=70%}

Переключаемся на ветку "main":

![Переключаемся на ветку "main"](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/26.jpg){#fig:026 width=70%}

Создаем пустой файл README.md, а затем коммитим все изменения и отправляет на github:

![Создание пустого файла и отправка изменений](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/27.jpg){#fig:027 width=70%}

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/28.jpg){#fig:028 width=70%}

Создаем ветку подмодуля, клонируя репозиторий с нашего Github:

![Создаем новую ветку](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/29.jpg){#fig:029 width=70%}

Так как вылезает ошибка *.gitignore*, то нужно её исправить прежде чем идти дальше - в файле .gitignore закомментим папку public, чтобы этот путь не игнорировался:

![Исправление ошибки .gitignore](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/30.jpg){#fig:030 width=70%}

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/31.jpg){#fig:031 width=70%}

Повторяем команду:

![Повтор введенной команды](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/32.jpg){#fig:032 width=70%}

После выполнения запускаем hugo:

![HUGO](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/33.jpg){#fig:033 width=70%}

Проверим подключение каталога к репозиторию командой **git remote -v**:

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/34.jpg){#fig:034 width=70%}

Добавим изменения на github:

![Загружаем обновления](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/35.jpg){#fig:035 width=70%}

![Загружаем обновления](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/36.jpg){#fig:036 width=70%}

Проверка обновлений:

![Проверка github](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/37.jpg){#fig:037 width=70%}

Открываем наш сайт:

![Шаблон сайта готовый](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/project-personal/stage1/report/image/38.jpg){#fig:038 width=70%}

# Выводы

В ходе данной работы я создала шаблон своего сайта, который в будущем буду дорабатывать, а также запрепила навыки работы с системой контроля версий *Git*.

# Список литературы{.unnumbered}

1. [Этапы реализации проекта](https://esystem.rudn.ru/mod/page/view.php?id=970806&forceview=1)

2. [Техническая реализация проекта](https://esystem.rudn.ru/mod/page/view.php?id=970807&forceview=1)

3. [Руководство по выполнению первого этапа индивидуального проекта](https://esystem.rudn.ru/mod/url/view.php?id=980904&forceview=1)

4. [Инструменты Git - Подмодули](https://git-scm.com/book/ru/v2/%D0%98%D0%BD%D1%81%D1%82%D1%80%D1%83%D0%BC%D0%B5%D0%BD%D1%82%D1%8B-Git-%D0%9F%D0%BE%D0%B4%D0%BC%D0%BE%D0%B4%D1%83%D0%BB%D0%B8)

::: {#refs}
:::

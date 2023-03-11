---
## Front matter
title: "Отчёт по лабораторной работе №5"
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

Ознакомление с файловой системой Linux, её структурой, именами и содержанием каталогов. Приобретение практических навыков по применению команд для работы с файлами и каталогами, по управлению процессами (и работами), по проверке использования диска и обслуживанию файловой системы.

# Задание

1. Выполните все примеры, приведённые в первой части описания лабораторной работы.

2. Выполните следующие действия, зафиксировав в отчёте по лабораторной работе используемые при этом команды и результаты их выполнения:

- Скопируйте файл /usr/include/sys/io.h в домашний каталог и назовите его equipment. Если файла io.h нет, то используйте любой другой файл в каталоге /usr/include/sys/ вместо него.

- В домашнем каталоге создайте директорию ~/ski.plases.

- Переместите файл equipment в каталог ~/ski.plases.

- Переименуйте файл ~/ski.plases/equipment в ~/ski.plases/equiplist.

- Создайте в домашнем каталоге файл abc1 и скопируйте его в каталог ~/ski.plases, назовите его equiplist2.

- Создайте каталог с именем equipment в каталоге ~/ski.plases.

- Переместите файлы ~/ski.plases/equiplist и equiplist2 в каталог ~/ski.plases/equipment.

- Создайте и переместите каталог ~/newdir в каталог ~/ski.plases и назовите его plans.

3. Определите опции команды chmod, необходимые для того, чтобы присвоить перечисленным ниже файлам выделенные права доступа, считая, что в начале таких прав нет:

- drwxr--r-- ... australia

- drwx--x--x ... play

- -r-xr--r-- ... my_os

- -rw-rw-r-- ... feathers

При необходимости создайте нужные файлы.

4. Проделайте приведённые ниже упражнения, записывая в отчёт по лабораторной работе используемые при этом команды:

- Просмотрите содержимое файла /etc/password.

- Скопируйте файл ~/feathers в файл ~/file.old.

- Переместите файл ~/file.old в каталог ~/play.

- Скопируйте каталог ~/play в каталог ~/fun.

- Переместите каталог ~/fun в каталог ~/play и назовите его games.

- Лишите владельца файла ~/feathers права на чтение.

- Что произойдёт, если вы попытаетесь просмотреть файл ~/feathers командой cat?

- Что произойдёт, если вы попытаетесь скопировать файл ~/feathers?

- Дайте владельцу файла ~/feathers право на чтение.

- Лишите владельца каталога ~/play права на выполнение.

- Перейдите в каталог ~/play. Что произошло?

- Дайте владельцу каталога ~/play право на выполнение.

5. Прочитайте man по командам mount, fsck, mkfs, kill и кратко их охарактеризуйте, приведя примеры.


# Теоретическое введение

## Команды для работы с файлами и каталогами

Для создания текстового файла можно использовать команду touch. Формат команды:

`touch имя-файла`

Для просмотра файлов небольшого размера можно использовать команду cat. Формат команды:

`cat имя-файла`

Для просмотра файлов постранично удобнее использовать команду less. Формат команды:

`less имя-файла`

Команда head выводит по умолчанию первые 10 строк файла. Формат команды:

`head [-n] имя-файла,`

где n — количество выводимых строк.

Команда tail выводит умолчанию 10 последних строк файла. Формат команды:

`tail [-n] имя-файла,`

где n — количество выводимых строк.

## Копирование файлов и каталогов

Команда cp используется для копирования файлов и каталогов. Формат команды:
 
`cp [-опции] исходный_файл целевой_файл`

Опция i в команде cp выведет на экран запрос подтверждения о перезаписи файла. Для рекурсивного копирования каталогов, содержащих файлы, используется команда cp с опцией r.

## Перемещение и переименование файлов и каталогов

Команды mv и mvdir предназначены для перемещения и переименования файлов и каталогов. Формат команды mv:

`mv [-опции] старый_файл новый_файл`

## Права доступа

Каждый файл или каталог имеют права доступа. В сведениях о файле или каталоге указываются:

- тип файла (символ (-) обозначает файл, а символ (d) — каталог);

- права для владельца файла (r — разрешено чтение, w — разрешена запись, x — разрешено выполнение, - — право доступа отсутствует);

- права для членов группы (r — разрешено чтение, w — разрешена запись, x — разрешено выполнение, - — право доступа отсутствует);

- права для всех остальных (r — разрешено чтение, w — разрешена запись, x — разрешено выполнение, - — право доступа отсутствует

## Изменение прав доступа

Права доступа к файлу или каталогу можно изменить, воспользовавшись командой ***chmod***. Сделать это может владелец файла (или каталога) или пользователь с правами администратора. Формат команды:

`chmod режим имя_файла`

Режим (в формате команды) имеет следующие компоненты структуры и способ записи:

`= установить право`

`- лишить права`

`+ дать право`

`r чтение`

`w запись`

`x выполнение`

`u (user) владелец файла`

`g (group) группа, к которой принадлежит владелец файла`

`o (others) все остальные`

# Выполнение лабораторной работы

1. Выполните все примеры, приведённые в первой части описания лабораторной работы.
 
- Копирование файла в текущем каталоге. Скопировать файл ~/abc1 в файл april и в файл may(рис. @fig:001).

![Копирование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/1.png){#fig:001 width=70%}

- Копирование нескольких файлов в каталог. Скопировать файлы april и may в каталог monthly(рис. @fig:002):

![Копирование нескольких файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/2.png){#fig:002 width=70%}

- Копирование файлов в произвольном каталоге. Скопировать файл monthly/may в файл с именем june(рис. @fig:003):

![Копирование файлов в произвольном каталоге](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/3.png){#fig:003 width=70%}

- Копирование каталогов в текущем каталоге. Скопировать каталог monthly в каталог monthly.00(рис. @fig:004):

![Копирование каталогов в текущем каталоге](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/4.png){#fig:004 width=70%}

- Копирование каталогов в произвольном каталоге. Скопировать каталог monthly.00 в каталог /tmp(рис. @fig:005):

![Копирование каталогов в произвольном каталоге](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/5.png){#fig:005 width=70%}

- Переименование файлов в текущем каталоге. Изменить название файла april на july в домашнем каталоге(рис. @fig:006):

![Переименование файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/6.png){#fig:006 width=70%}

- Перемещение файлов в другой каталог. Переместить файл july в каталог monthly.00(рис. @fig:007):

![Перемещение файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/7.png){#fig:007 width=70%}

- Переименование каталогов в текущем каталоге. Переименовать каталог monthly.00 в monthly.01(рис. @fig:008):

![Переименование каталогов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/8.png){#fig:008 width=70%}

- Перемещение каталога в другой каталог. Переместить каталог monthly.01в каталог reports(рис. @fig:009):

![Перемещение каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/9.png){#fig:009 width=70%}

- Переименование каталога, не являющегося текущим. Переименовать каталог reports/monthly.01 в reports/monthly(рис. @fig:010):

![Переименование каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/10.png){#fig:010 width=70%}

- Требуется создать файл ~/may с правом выполнения для владельца(рис. @fig:011):

![Создание файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/11.png){#fig:011 width=70%}

- Требуется лишить владельца файла ~/may права на выполнение(рис. @fig:012):

![Лишение владельца прав](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/12.png){#fig:012 width=70%}

- Требуется создать каталог monthly с запретом на чтение для членов группы и всех остальных пользователей(рис. @fig:013):

![Создание каталога с запретом на чтение для членов группы и остальных пользователей](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/13.png){#fig:013 width=70%}

- Требуется создать файл ~/abc1 с правом записи для членов группы(рис. @fig:014):

![Создать файла с правом записи для членов группы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/14.png){#fig:014 width=70%}

- Выполнение команды *mount*(рис. @fig:015):

![Выполнение команды mount](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/15.png){#fig:015 width=70%}

- Выполнение команды *cat /etc/fstab*(рис. @fig:016):

![Выполнение команды cat /etc/fstab](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/16.png){#fig:016 width=70%}

2. Выполните следующие действия, зафиксировав в отчёте по лабораторной работе используемые при этом команды и результаты их выполнения:

- Скопируйте файл /usr/include/sys/io.h в домашний каталог и назовите его equipment. Если файла io.h нет, то используйте любой другой файл в каталоге /usr/include/sys/ вместо него(рис. @fig:017):.

![Копирование файла io.h](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/17.png){#fig:017 width=70%}

- В домашнем каталоге создайте директорию ~/ski.plases(рис. @fig:018):.

![Создайте директории ~/ski.plases](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/18.png){#fig:018 width=70%}

- Переместите файл equipment в каталог ~/ski.plases(рис. @fig:019):.

![Перемещение файла в ~/ski.plases](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/19.png){#fig:019 width=70%}

- Переименуйте файл ~/ski.plases/equipment в ~/ski.plases/equiplist(рис. @fig:020):

![Переименование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/20.png){#fig:020 width=70%}

- Создайте в домашнем каталоге файл abc1 и скопируйте его в каталог ~/ski.plases, назовите его equiplist2(рис. @fig:021):

![Создание и копирование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/21.png){#fig:021 width=70%}

- Создайте каталог с именем equipment в каталоге ~/ski.plases(рис. @fig:022):

![Создание каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/22.png){#fig:022 width=70%}

- Переместите файлы ~/ski.plases/equiplist и equiplist2 в каталог ~/ski.plases/equipment(рис. @fig:023):

![Перемещение файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/23.png){#fig:023 width=70%}

- Создайте и переместите каталог ~/newdir в каталог ~/ski.plases и назовите его plans(рис. @fig:024):

![Создание и перемещение каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/24.png){#fig:024 width=70%}

3. Определите опции команды chmod, необходимые для того, чтобы присвоить перечисленным ниже файлам выделенные права доступа, считая, что в начале таких прав нет:

- drwxr--r-- ... australia(рис. @fig:025):

![Australia](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/25.png){#fig:025 width=70%}

- drwx--x--x ... play(рис. @fig:026):

![Play](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/26.png){#fig:026 width=70%}

- -r-xr--r-- ... my_os(рис. @fig:027,@fig:027):

![my_os](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/27.png){#fig:027 width=70%}

- -rw-rw-r-- ... feathers(рис. @fig:028):

![my_os](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/28.png){#fig:028 width=70%}

*К сожалению, я перепутала файлы, у которых нужно изменить права доступа в последнем пункте*

4. Проделайте приведённые ниже упражнения, записывая в отчёт по лабораторной работе используемые при этом команды:

- Просмотрите содержимое файла /etc/password(рис. @fig:029):

![Содержимое файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/29.png){#fig:029 width=70%}

Файла под названием /etc/password я не нашла, но нашла другой файл(рис. @fig:030):

![cat passwd](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/30.png){#fig:030 width=70%}

- Скопируйте файл ~/feathers в файл ~/file.old(рис. @fig:031):

![Копирование файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/31.png){#fig:031 width=70%}

- Переместите файл ~/file.old в каталог ~/play(рис. @fig:032):

![Перемещение файла](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/32.png){#fig:032 width=70%}

- Скопируйте каталог ~/play в каталог ~/fun(рис. @fig:033):

![Копирование каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/33.png){#fig:033 width=70%}

- Переместите каталог ~/fun в каталог ~/play и назовите его games(рис. @fig:034):

![Перемещение каталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/34.png){#fig:034 width=70%}

- Лишите владельца файла ~/feathers права на чтение(рис. @fig:035):

![Лишение владельца файла прав на чтение](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/35.png){#fig:035 width=70%}

- Что произойдёт, если вы попытаетесь просмотреть файл ~/feathers командой cat(рис. @fig:036)?

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/35.png){#fig:036 width=70%}

- Что произойдёт, если вы попытаетесь скопировать файл ~/feathers?(рис. @fig:037)?

![Попытка скопировать файл](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/36.png){#fig:037 width=70%}

- Дайте владельцу файла ~/feathers право на чтение(рис. @fig:038)?

![Вернем права](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/37.png){#fig:038 width=70%}

- Лишите владельца каталога ~/play права на выполнение(рис. @fig:039)?

![Лишение владельца файла прав на выполнение](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/38.png){#fig:039 width=70%}

- Перейдите в каталог ~/play. Что произошло?(рис. @fig:040)

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/39.png){#fig:040 width=70%}

- Дайте владельцу каталога ~/play право на выполнение(рис. @fig:041)?

![Возвращаем владельцу права](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/40.png){#fig:041 width=70%}

5. Прочитайте man по командам mount, fsck, mkfs, kill и кратко их охарактеризуйте, приведя примеры(рис. @fig:042, @fig:043, @fig:044, @fig:045):

![man mount](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/41.png){#fig:042 width=70%}

![man fsck](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/42.png){#fig:043 width=70%}

![man mkfs](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/43.png){#fig:044 width=70%}

![man kill](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab05/report/image/44.png){#fig:045 width=70%}

# Выводы

В ходе лабораторной работы мы приобрели практические навыки по применению команд для работы с файлами и каталогами, а также по проверке использования диска и обслуживанию файловой системы.

# Список литературы{.unnumbered}

1. [Руководство по выполнению лабораторной работы №5](https://esystem.rudn.ru/pluginfile.php/1975769/mod_resource/content/4/005-lab_files.pdf)

2. [Руководство по использованию команды chmod](https://losst.pro/komanda-chmod-linux)

::: {#refs}
:::

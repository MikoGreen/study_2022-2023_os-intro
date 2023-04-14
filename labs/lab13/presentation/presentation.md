---
## Front matter
lang: ru-RU
title: Лабораторная работа №13
subtitle: Средства, применяемые при разработке программного обеспечения в ОС типа UNIX/Linux
author:
  - Рогожина Н.А.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 14 апреля 2023

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

# Информация

## Докладчик

:::::::::::::: {.columns align=center}
::: {.column width="70%"}

  * Рогожина Надежда Александровна
  * Студентка 1го курса, НКАбд-02-22
  * Компьютерные и информационные науки
  * Российский университет дружбы народов
  * [Github](https://github.com/MikoGreen/study_2022-2023_os-intro)

:::
::: {.column width="30%"}

:::
::::::::::::::

# Вводная часть

## Цели и задачи

- Приобрести простейшие навыки разработки, анализа, тестирования и отладки приложений в ОС типа UNIX/Linux на примере создания на языке программирования С калькулятора с простейшими функциями.

# Содержание лабораторной работы

## Введение

Стандартным средством для компиляции программ в ОС типа UNIX является GCC (GNU Compiler Collection). Это набор компиляторов для разного рода языков программирования (С, C++, Java, Фортран и др.). Работа с GCC производится при помощи одноимённой управляющей программы `gcc`, которая интерпретирует аргументы командной строки, определяет и осуществляет запуск нужного компилятора для входного файла.

# Задание

## Задачи:

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

## Задачи:

5. Создайте Makefile.

6. С помощью gdb выполните отладку программы calcul (перед использованием gdb исправьте Makefile):
    
7. С помощью утилиты splint попробуйте проанализировать коды файлов calculate.c и main.c.

# Выполнение

## Подкаталог

![Создание подкаталога](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/1.png){#fig:001 width=70%}

## Файлы 

![calculate.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/3.png){#fig:002 width=40%}

## Файлы 

![calculate.h](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/4.png){#fig:003 width=40%}

## Файлы 

![main.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/5.png){#fig:004 width=40%}

## Компиляция

![Компиляция программы](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/6.png){#fig:005 width=70%}

## Makefile 

![Создание Makefile](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/7.png){#fig:006 width=70%}

## Запуск отладчика и проверка программы

![Запуск gdb](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/9.png){#fig:007 width=40%}

## Постраничный просмотр

![list](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/10.png){#fig:008 width=70%}

## Просмотр определённых строк не основного файла

![list calculate.c:20,29](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/12.png){#fig:009 width=70%}

## Установка точки остановки в файле calculate.c на строке номер 21

![Точка остановки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/13.png){#fig:010 width=70%}

## Запуск программы

![run + backtrace](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/15.png){#fig:011 width=70%}

## Переменная Numeral

![print/display Numeral](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/17.png){#fig:017 width=70%}

## Удаление точек остановки 

![Удаление точек остановки](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/18.png){#fig:012 width=70%}

## Проверка

![run](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/19.png){#fig:013 width=70%}

## Splint

![splint calculate.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/20.png){#fig:014 width=40%}

## Splint

![splint main.c](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab13/report/image/21.png){#fig:015 width=40%}

# Выводы

## Выводы

В ходе лабораторной работы мы приобрели простейшие навыки разработки, анализа, тестирования и отладки приложений в ОС типа UNIX/Linux на примере создания на языке программирования С калькулятора с простейшими функциями.

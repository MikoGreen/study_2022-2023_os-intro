---
## Front matter
lang: ru-RU
title: Лабораторная работа №6
subtitle: Поиск файлов. Перенаправление ввода-вывода. Просмотр запущенных процессов
author:
  - Рогожина Н.А.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 18 марта 2023

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

## Актуальность

- Умение работать с системой посредством командной строки значительно облегчает использование и управление устройством.

## Объект и предмет исследования

- Командная строка Linux

## Цели и задачи

- Ознакомление с инструментами поиска файлов и фильтрации текстовых данных. Приобретение практических навыков: по управлению процессами (и заданиями), по проверке использования диска и обслуживанию файловых систем.

# Содержание лабораторной работы

## Работа с потоком ввода-вывода

Запишите в файл file.txt названия файлов, содержащихся в каталоге /etc. Допишите в этот же файл названия файлов, содержащихся в вашем домашнем каталоге:

![Запись в файл](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/2.png){#fig:001 width=50%}

## Работа с потоком ввода-вывода

![Дозапись в файл](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/3.png){#fig:002 width=50%}

## Работа с потоком ввода-вывода

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/4.png){#fig:003 width=50%}

## Работа с конвейером

![Вывод всех файлов с расширением .conf](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/5.png){#fig:004 width=50%}

## Работа с конвейером

![Запись в новый текстовый файл и проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/6.png){#fig:005 width=50%}

## Поиск файла по критериям

Определите, какие файлы в вашем домашнем каталоге имеют имена, начинавшиеся с символа c? Предложите несколько вариантов, как это сделать.

Первый вариант это сделать с помощью команды `find`:

![Нахождение файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/7.png){#fig:006 width=50%}

## Поиск файла по критериям

Второй вариант - с помощью команды `grep`:

![Нахождение файлов](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/8.png){#fig:007 width=70%}

## Фоновый процесс записи

Запустите в фоновом режиме процесс, который будет записывать в файл ~/logfile файлы, имена которых начинаются с log:

![Запуск записи в фоновом режиме](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/10.png){#fig:009 width=70%}

## Фоновый процесс записи

![Проверка](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/11.png){#fig:010 width=70%}

## Фоновый процесс

![Запуск редактора gedit в фоновом режиме из консоли](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/13.png){#fig:011 width=70%}

## Определение идентификатора

![ps+grep](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/14.png){#fig:012 width=70%}

## Завершение фонового процесса через консоль

![Завершение gedit через консоль](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/15.png){#fig:013 width=70%}

## Использование памяти машины

![df -vi](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/18.png){#fig:014 width=70%}

## Занимаемое файлами место

![du -a ~/](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/20.png){#fig:015 width=70%}

## Занимаемое файлами место

![Вывод команды du -a ~/](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/21.png){#fig:016 width=40%}

## Занимаемое файлами место

![Вывод команды du -a ~/file.txt](/home/narogozhina/work/study/2022-2023/Операционные системы/os-intro/labs/lab06/report/image/22.png){#fig:017 width=40%}

# Выводы

## Выводы

В ходе лабораторной работы мы ознакомились с инструментами поиска файлов и фильтрации текстовых данных, а также  приобрели практические навыки по управлению процессами (и заданиями) и проверке использования диска и обслуживанию файловых систем.


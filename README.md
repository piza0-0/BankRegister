Важно!
Данный проект еще находится на стадии разработки.

Приложение предназначено для упрощения работы с базами данных, в которой хранится список клиентов, их личной ифнормации и банки,
в которых у них открыты счета. Приложение позволяет редактировать, удалять и добавлять записи, хранящиеся в базе данных, которая
в рамках этого проекта будет спроектирована. Подключение осуществляется к локальной БД путем чтения параметров из файла конфигураций.
При необходимости использования Вашей личной БД параметры подключения могут быть изменены в фале BdConfig.ini директории Recources, находящейся
в проекте.
Также реализованы окна регистрации и авторизации. Логин и пароль пользователя записывается в файл конфигураций Config.ini в директории Bin. При первом 
запуске программы файл создается самостоятельно.
В будущем планируется спроектировать экспериментальную базу данных в СУБД PostgresSQL, написать к ней запросы и внедрить в приложение. Способ авторизации
тоже будет модернизирован - все логины и пароли пользователей будут храниться в таблице БД.
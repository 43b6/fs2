inherit ROOM;
void create() {
	set( "short", "һҳ�����᷿" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room274",
		"east"      : "/open/clan/sky-wu-chi/room/room277",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room275",
	]) );
	set( "owner", "bookman" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
    
[36m�x�z[0m                 [37m����[0m    [35m��[0m  [37m����[0m
 [36m�|[0m [33m��[0m     [36m*[0m       [30;47m��          [35m��[30m    ��[0m
    [33m����[0m           [35;47m              ��    [0m
 [36m*[0m  [33m������[0m    [36m*[0m    [35;47m              [37m��[35m    [0m
       [36m�x�y�{�y[0m    [30;47m    ��        ��    [0m
        [36m�}�}�{[0m     [33;47m         ��         [0m
                   [30;47m��                ��[0m 
                     [30m�~[35;47m�}[33m�|�|�|�|[35m�}�~[30;45m��[0m 
                      [35;45m  [33;43m   [45m��[35m���� [33m��   [0m     [36m�n  �n[0m
                  [36;45m��[35m��������[33m  ��     [30m��[0m
                  [36;45m��[33m ��           [31m��[0m    [36m�n   �n[0m
                  [36;45m��[33m  ��  [31m�z�{�|[40m����[0m                         
                  [36;45m��[31m �z�|[46m�� ��[33;45m*[31;46m�� ��[0m
                         [31;46m�� ��[33;45m*[31;46m�� ��[0m          [36m�n   �n[0m
                      [30;45m�y�z�|�{�}�{�y�{[0m
LONG);
	setup();
	replace_program(ROOM);
}

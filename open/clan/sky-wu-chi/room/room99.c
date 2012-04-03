inherit ROOM;
void create() {
	set( "short", "С��֮��" );
	set( "owner", "cong" );
	set( "object", ([
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"file4"    : "/open/gsword/obj/may_ring",
		"amount6"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount4"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "objects", ([
		"/open/clan/sky-wu-chi/npc/npc48" : 1,
	]) );
	set( "build", 10002 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room255.c",
		"up"        : "/open/clan/sky-wu-chi/room/room229",
		"west"      : "/open/clan/sky-wu-chi/room/room102.c",
		"down"      : "/open/clan/sky-wu-chi/room/room261.c",
		"south"     : "/open/clan/sky-wu-chi/room/room230.c",
		"east"      : "/open/clan/sky-wu-chi/room/room106.c",
		"north"     : "/open/clan/sky-wu-chi/room/room231.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
[37m                                          ;,[0m
[37m            ,,                                ;'[0m
[37m           ';;                         ;  ,,;;;'[0m
[37m            ;;             ,,;;;'  ,,, ;   ,;[0m
[37m            ;;           ,    ;'   ';  ; ,'[0m
[37m            ;;           ;   ,;,,      ,;'[0m
[37m            ;;      ',,  ;,  ;;'      '  ,,,;';,[0m
[37m  ,,,;'     ;;       ';;             ,;'';     ;'[0m
[37m ;;;'      ,;;                      ;  ,,;;;  ;;[0m
[37m ''       ';;;                      ;,' ;;    ;'[0m
[37m                                      ,,;;;,,,;[0m
[37m                                             '[0m

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






























































































































































































































































































































































































































































































































































































































































































































































































































































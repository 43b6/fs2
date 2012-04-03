inherit ROOM;
void create() {
	set( "short", "�õ���Ϣ��" );
	set( "owner", "cong" );
	set( "object", ([
		"file7"    : "/open/magic-manor/soil/obj/soil-claw",
		"file6"    : "/open/magic-manor/obj/wood-ball",
		"amount6"  : 1,
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount9"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/gblade/obj/sa-head",
		"amount5"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount8"  : 1,
		"file8"    : "/open/magic-manor/obj/magic-sign",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file9"    : "/open/gblade/obj/sa-head",
	]) );
	set( "build", 10054 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room230.c",
		"zsa"       : "/open/clan/sky-wu-chi/room/room256",
	]) );
	set( "long", @LONG

            ,,                                ;'
           ';;                         ;  ,,;;;'
            ;;             ,,;;;'  ,,, ;   ,;
            ;;           ,    ;'   ';  ; ,'
            ;;           ;   ,;,,      ,;'
            ;;      ',,  ;,  ;;'      '  ,,,;';,
  ,,,;'     ;;       ';;             ,;'';     ;'
 ;;;'      ,;;                      ;  ,,;;;  ;;
 ''       ';;;                      ;,' ;;    ;'
                                      ,,;;;,,,;
                                             '
LONG);
	setup();
	replace_program(ROOM);
}

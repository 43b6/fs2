inherit ROOM;
void create() {
	set( "short", "[1;34m�ޣ��ޣ���[0m" );
	set( "owner", "rings" );
	set( "object", ([
		"amount3"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/capital/obj/blade2",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/daemon/class/fighter/ywhand",
		"amount9"  : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10011 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room193.c",
		"east"      : "/open/clan/ou-cloud-club/room/room229.c",
		"north"     : "/open/clan/ou-cloud-club/room/room244",
	]) );
	set( "long", @LONG
[1;36m
       ,,      ;;                            ,,,
       ;;;    ;;,,;;,             ;;'';;'';;  ;;;
      ,;;    ,;  ,;;'              ;  '; ,;,,,;'
     ,;' , ,' '';;'                '''''' ,  ''
    ,;;, ;;   ,;'';;,,            ;;     ,;' ';;
   ;' ;; ;;,,'' ;;  ';;;;''      ;' ,;, ,; ,,,,,;''
      ;; ;;   ,;',,            ,;,,,;' ;';   ';,,
      ;; ;;  '  ,;'             ' ;' ;,  ; ''';'
      ;; '   ,,;' ,;;           ,;;''''  ; ,,;;'''
      ;;    ''  ,;;'           ,   , ';  ;   ,;,,,,,
      ;       ,;;'              ;, ''   ,;'''''''''
          ,,;''                 ''      ';
[0m

LONG);
	setup();
	replace_program(ROOM);
}

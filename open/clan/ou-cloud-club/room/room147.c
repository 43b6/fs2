inherit ROOM;
void create() {
	set( "short", "����ڣ" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/wu/npc/obj/armband",
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount4"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"amount10" : 10,
		"file10"   : "/open/ping/obj/poison_pill",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/prayer/obj/boris-cloth",
	]) );
	set( "light_up", 1 );
	set( "owner", "del" );
	set( "build", 10095 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room244",
		"east"      : "/open/clan/ou-cloud-club/room/room191.c",
	]) );
	set( "long", @LONG

            ;,
          ,,,;;,,;,,                                ';;,   ;,,,,,;'';;,
       '''';;' ,,              ,,,,,,,,;;;;;;,       ;;   ,;'      ;;'''
        ,,;;,;''';             ''' ;;;     ;;'       ;;   '' ;;;;''
       ,;   ;;  ;;',,,,            ;;      ;;     ,,,,;;;'  ,;;'   ;;,
   ,,,,,;;,';;'';'''''''          ;;      ;;'        ';   ,;';;,  ;;'
        ';,,;;,;;                ;;'      ;;          ;,,,,,,;';;'
         '  ;;,,,,,,,          ,;;       ,;;      ,,,;;'  ;;; ;;;;;,
     ''''';;;;;,    '         ,;'    ,, ,;;      ';''    '  ;;' ;;';;;,,,
        ,;;';;';;,,        ,''        ';;;'               ,;'  ;;;  '''
      ,;''  ;;  ';;;;,,,               ''                '   ;,;;'
    ''      ;;    ''''''                                      '''


LONG);
	setup();
	replace_program(ROOM);
}

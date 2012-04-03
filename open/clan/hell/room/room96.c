inherit ROOM;
void create() {
	set( "short", "$HIY$$HBRED$��ҡ��ʵ��$NOR$" );
	set( "owner", "butthead" );
	set( "object", ([
		"amount8"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/capital/guard/gring",
		"amount5"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/capital/obj/4-1",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/main/obj/et_sword",
		"file9"    : "/open/gsword/obj/dragon-sword",
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount9"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
	]) );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room111",
		"west"      : "/open/clan/hell/room/room47",
		"south"     : "/open/clan/hell/room/room93.c",
	]) );
	set( "light_up", 1 );
	set( "build", 10395 );
	set( "long", @LONG
$WHT$      HUH-HUH  HUH-HUH  HUH-HUH  
                HUH-HUH  HUH-HUH  HUH-HUH  
$HIM$                   huh
$WHT$  HUH-HUH  HUH-HUH  HUH-HUH  
$WHT$             HUH-HUH  HUH-HUH  HUH-HUH  
$WHT$                     HUH-HUH  HUH-HUH  HUH-HUH  
$WHT$               HUH-HUH  HUH-HUH  HUH-HUH  
$HIM$          huh
$WHT$ HUH-HUH  HUH-HUH  HUH-HUH  
$WHT$  HUH-HUH  HUH-HUH  HUH-HUH  
$WHT$       HUH-HUH  HUH-HUH  HUH-HUH  

$HIC$$HBRED$Jose'y Hetor ????      $HIG$͹ $HIW$-,-$NOR$

LONG);
	setup();
	replace_program(ROOM);
}

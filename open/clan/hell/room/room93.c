inherit ROOM;
void create() {
	set( "short", "$HBBLU$ $HIW$ ��   $HIR$99 Ways To Die    $HIW$��  $NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount2"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/fire-hole/obj/y-pill",
		"file3"    : "/open/gsword/obj/dragon-sword",
		"amount6"  : 188,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
	]) );
	set( "owner", "butthead" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room112",
		"north"     : "/open/clan/hell/room/room96.c",
		"west"      : "/open/clan/hell/room/room34.c",
		"south"     : "/open/clan/hell/room/room136.c",
	]) );
	set( "light_up", 1 );
	set( "build", 13755 );
	set( "long", @LONG

$MAG$��ͷ������ڿ��������ɳ���Ͽ�MTV...
$MAG$�� ~ �����û��$HIC$Megadeath$MAG$��MTV..
$HIW$����$MAG$...����$HIM$������$MAG$Ҫ����..cow
��������.....

$MAG$����ת̨����$HIY$ZƵ��$MAG$����...
$WHT$����$MAG$ ~~  Die !!!!!!!
�����ز�5��ǰ��$HIG$������ɫ��$MAG$... >_Q 
����С��...������.....

$RED$ ooxx....��!!         $HIW$͹ -,-$NOR$

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "С������" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 1,
		"amount1"  : 219,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/ping/obj/poison_pill",
		"amount7"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/armband",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 3,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10072 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room53.c",
		"enter"     : "/open/clan/13_luck/room/room126",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

������С���ڷ��ߵĵط�
������������һЩ��ֵĵط�
��....
�㿴��ǽ��...
�����Ȼ����diamond eq...
��...
�㿪ʼ����С�������ܴ�ĵ�
����������˺ܶ�Ǯȥ���˼���İ�
����
����һЩ force eq...
�����Ҫ�Ļ�
������һ��С��
��Ӧ�û����..
�����û���ٷ����Ļ�

LONG);
	setup();
	replace_program(ROOM);
}

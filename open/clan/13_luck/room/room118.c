inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/firedancer/npc/eq/r_boots",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"amount4"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/open/firedancer/npc/eq/r_hands",
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount6"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_pants",
		"amount5"  : 1,
	]) );
	set( "build", 10011 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room94",
		"enter"     : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
��������������������ķ������,�����ڲ�Զ����һ��������
����С������,ֹʱ���㼱��ǰ��С��ȥһ̽�����Ƿ�Ϊһ����
�ӵĺõط�,�����㿿����ʱ�����ſ���һ���ʯ,ʯ��д�� ����
ӭ�����͵İݷ�,ֻ��ӭҪ��ֹ�����������,����ֹ������һ��
��֪�Ƿ�Ҫ��ֻ����ȥ.
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount9"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/firedancer/npc/eq/r_boots",
		"amount7"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"file7"    : "/daemon/class/fighter/armband",
		"amount1"  : 1,
		"file10"   : "/open/firedancer/npc/eq/r_hands",
		"amount4"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_pants",
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
	]) );
	set( "owner", "flight" );
	set( "build", 10004 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room259",
		"out"       : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������������������ķ������,�����ڲ�Զ����һ��������
����С������,ֹʱ���㼱��ǰ��С��ȥһ̽�����Ƿ�Ϊһ����
�ӵĺõط�,�����㿿����ʱ�����ſ���һ���ʯ,ʯ��д�Ų���
ӭ�����͵İݷ�,ֻ��ӭҪ��ֹ�����������,����ֹ������һ��
��֪�Ƿ�Ҫ��ֻ����ȥ.
LONG);
	setup();
	replace_program(ROOM);
}

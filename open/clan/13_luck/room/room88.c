inherit ROOM;
void create() {
	set( "short", "���Ӿ�����" );
	set( "object", ([
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/daemon/class/fighter/figring",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file5"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount7"  : 1,
	]) );
	set( "owner", "roar" );
	set( "light_up", 1 );
	set( "build", 12380 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room86.c",
		"west"      : "/open/clan/13_luck/room/room103.c",
		"north"     : "/open/clan/13_luck/room/room186",
		"east"      : "/open/clan/13_luck/room/room117.c",
	]) );
	set( "long", @LONG
�ݶ���[0;1;31m��[1m��[1m��[1m��[0m�������߱����ȵ�[0;1;33m��[1m��[1m��[1m��[0m�յ�����������������ͷ�޴��[0;1;30m��[1m��[1m��[1m��[1m��[1ml[0m��
�����š�[0;1;35m��[1m��[1m��[1ml[1m��[1m~[0m�������š�������ȥ���㲻������һ�����ڲ���װ����費���
�����[0;1;33m��[1m��[1m��[1m��[0m����������������һ��[0;1;30m��[1mH[1m��[1mv[0m������������Ī���ľ�η�У���ȫ��ɢ
����ǿ�ҵ�[0;1;5;32m��[1;5mM[1;5m��[1;5m��[1;5m��[1;5mQ[1;5m��[1;5m��[0m����ɰ������Գ�[0;1;5;31m��[1;5m��[1;5m��[1;5m��[0m����[0;1;5;31m��[1;5mZ[1;5m��[1;5mL[0m�������κ��˷��䡣������
��˭��������[0;1;35m��[1m��[1m��[1ml[1m��[1m~[0m�����ˣ���������ʿ[0;1;36m��[1mD[1m��[1m��[1m��[1m��[1m��[1mx[0m��[0;1;5;32m��[1;5mM[1;5m��[1;5m��[0m--[0;1;5;34m��[1;5m��[1;5m��[1;5m][1;5m��[1;5m��[1;5m��[1;5ml[0m��
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "rue" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/doctor/obj/gneedle",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/doctor/obj/gneedle",
		"amount2"  : 1,
		"amount10" : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
	]) );
	set( "build", 10070 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room288.c",
		"south"     : "/open/clan/sky-wu-chi/room/room61.c",
		"out"       : "/open/clan/sky-wu-chi/room/room37.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
���׵�ʯľ���ſ�����ˮ֮�ϣ��������ϵ������š�
���֣���Ӱ��ˮ�л�Ϊ�������Բ��������һ�����·�ҡˮ
�У������������������Ư����Ϸ�ţ����ڿ���������ǵ�
ģ����ֱ���������⸱���հ�����εĳ�Ƥ�ң�Ը������ˮ
��������ң�Ρ�
LONG);
	setup();
	replace_program(ROOM);
}

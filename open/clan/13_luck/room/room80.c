inherit ROOM;
void create() {
	set( "short", "С��è֮��" );
	set( "object", ([
		"file10"   : "/open/tendo/obj/chaosbelt",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount10" : 1,
		"file5"    : "/open/marksman/obj/dragon_bow",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10233 );
	set( "owner", "acomidy" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room76.c",
		"enter"     : "/open/clan/13_luck/room/room108",
	]) );
	set( "long", @LONG

    ��è��è! ������è���, ��ս�ٰ�, �������, ����ɾ�, ��
������, ħ�类ɱ, ���Ǵ���µ���, ������è, �����Լ���Ǳ��,
�����è, ����Լ����õľ���ֵ, ��ս���Ž���, ����è��������
, ������������, ���˹ᴩ����, ��èų������, ��è��������, ��
�Ӱ˷�, �ĺ�����.............�ı൱ʱ���µ�һ��269��ʨս��

LONG);
	setup();
	replace_program(ROOM);
}

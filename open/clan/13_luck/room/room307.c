inherit ROOM;
void create() {
	set( "short", "СħŮ��ħ����վ" );
	set( "object", ([
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/ping/obj/chilin_legging",
		"file1"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"file8"    : "/obj/gift/xiandan",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount9"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file10"   : "/open/gsword/obj/may_ring",
		"amount8"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file9"    : "/obj/gift/lingzhi",
	]) );
	set( "build", 10059 );
	set( "owner", "mei" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room240",
	]) );
	set( "long", @LONG

@>>-  ħ �� �� վ  -<<@
��������˼�����������������侫���ĵط�һ����˴�������ɫϵ��
������裬ʹ�˾��þ�����ˬ���·�������ε���Ļƽ𺣰������ⲻ
֪�����У�����������������ļ��ٱ���

**���� ------ ��Ҫ�и�����**
**�� �����ļ� �ķ��������**


LONG);
	setup();
	replace_program(ROOM);
}

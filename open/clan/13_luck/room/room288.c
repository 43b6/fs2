inherit ROOM;
void create() {
	set( "short", "ʦ������" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/ping/obj/gold_hand",
		"file8"    : "/open/scholar/obj/icefan",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
		"file6"    : "/daemon/class/fighter/armband",
		"amount8"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10104 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room289",
	]) );
	set( "long", @LONG
ʦ������..С���ر�..������һ���Ӫ������..�����˺ܶྯ��
Ǣ����Ա�����ᵽ��..���ⶼ��Ҫ�������׼����ȥ������..��н��
����..��������..���Ʒ��������..�ӱ�..�Ͼ��·�ͥ..��Ҫ������
����..�����������׼..����ƤЬҪ������..ͭ��ҪĨ����..
LONG);
	setup();
	replace_program(ROOM);
}

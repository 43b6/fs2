inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "szn" );
	set( "object", ([
		"file6"    : "/open/scholar/obj/icefan",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/poison_pill",
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file4"    : "/open/gsword/obj/yuskirt",
		"amount3"  : 1,
		"amount8"  : 15,
		"amount6"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"file5"    : "/daemon/class/blademan/obj/ublade",
		"amount4"  : 1,
		"file3"    : "/open/wind-rain/obj/bird-blade",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/tendo/obj/luboot",
		"file9"    : "/daemon/class/blademan/obj/six-neck",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10920 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room274",
	]) );
	set( "long", @LONG

    ���𽭺���������㣬�ֳ������񹭰ܾ�����Ӣ�ۣ�������ս�͸�
����򽻵�һ�㣬����һ���书֮�󣬳�����ʽʮ�������Ǳ�������
���뷢����ûҽ���ھ�׼�������ˣ����Ը���Ϊ��Ҳ��Ҫ��ս�پ�����
�ⳤ�ã����򹥻���׼�˺�����ͳԲ��궵���ߡ�

LONG);
	setup();
	replace_program(ROOM);
}

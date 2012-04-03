inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file10"   : "/open/ping/obj/gold_hand",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"file9"    : "/open/gsword/obj/silver_sword",
		"amount9"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
		"amount1"  : 1,
	]) );
	set( "item_desc", ([
		"���ʯ" : @ITEM
һ����������ʯͷ��������ţ���[22m[5m���������Ǵ���ͷ[0m��
ITEM,
	]) );
	set( "build", 10102 );
	set( "light_up", 1 );
	set( "owner", "kingnight" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room100",
	]) );
	set( "long", @LONG
    �����������ɢ�����۱ǵ�����,�����đ�����.����С�Ųݵ�������
�ٺϻ���,���и��м����滨���,�ƺ�ʹ�˾��ô˴���������ʵ�����ز�
��������.���ϡ�[24m  ��  ��[0m  ������,������ͥ������������ĸ�ʽ������
ʾϰ��֮��׷��ļ��¾���.����һ��,���������Լ����Ӳ��[21m���ʯ[0m����
����ܰѴ˽������ʯ��,���˵��书��һ�㼶���ĸ��ֿɼ�,����ʾ����
���ķ���ѽ!!���νϰ��֮�˱����ྺ���[41m[24m��Ȼ����[0m��!!


LONG);
	setup();
	replace_program(ROOM);
}

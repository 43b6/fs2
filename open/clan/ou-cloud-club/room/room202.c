inherit ROOM;
void create() {
	set( "short", "ǧ���" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/daemon/class/fighter/armband",
		"file3"    : "/open/love/obj/cloth1",
		"file2"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
	]) );
	set( "build", 6313 );
	set( "item_desc", ([
		"Ư���ĺ�" : @ITEM
ITEM,
	]) );
	set( "light_up", 1 );
	set( "owner", "lnergy" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room203",
	]) );
	set( "long", @LONG
���Ƕμ�С��lnergy�ļ�,
����ˮ�ֳ���,ˮ�Ϲ����˵�.
�����������֮��,һ�ſ���
����,������Ů�ӵİ�Ľ
��������������֮��...һͬ
������������,�����������
֮��,�����������ĵĺ���
��������®,��������֮��
LONG);
	setup();
	replace_program(ROOM);
}

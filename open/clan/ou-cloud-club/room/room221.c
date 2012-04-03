inherit ROOM;
void create() {
	set( "short", "$HIC$ˮ֮��$NOR$" );
	set( "object", ([
		"file7"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10030 );
	set( "owner", "mosia" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room217",
	]) );
	set( "long", @LONG
����һ���ϱ��ܳ��ķ���,������һ�ź�������ɴ�ĳ���,�°봰�̶��ϰ봰�ɿ�����.
���ߺͶ�ǽ������ɽ��ʯ����,����ƫ����������,���ڴ�������,ɽ���������,�ٲ�
Ϫ������ͼ��,��������Ȫˮ����͸������.��������,������ӺͲ輸���ڶ�����
,����һ����������,������һ�����ǽ,ߡ�������󿻾ӱ�����,չ����դ��,����һ
������ʵʵ������.
LONG);
	setup();
	replace_program(ROOM);
}

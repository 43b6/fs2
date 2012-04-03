inherit ROOM;
void create() {
	set( "short", "��ͨ����" );
	set( "object", ([
		"file4"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/ping/obj/gold_hand",
		"amount2"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file6"    : "/open/prayer/obj/boris-cloth",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "hild" );
	set( "build", 10008 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room179",
	]) );
	set( "long", @LONG
�ⷿ�����һ�����ͨ�ķ��䣬���Ͽ��������в��ٵĵ����򶫿�
�������ף������ֲ��Ľ������������������������ĵ����а׻���
��ȸ�����䣬���Ĵ�ʥ�޵�����λ�����˾�����һ�֣�����ʽ�����з�
������Ҫ��ȥ��Ҫ��ǿ����Ṧ�������Լ����˵��ǻۣ����ܰ�Ȼ�ȹ�
��䷿�俴��ƽ������ʵ�����ƽ���ķ��䡣ԭ������»طֽ⡣


LONG);
	setup();
	replace_program(ROOM);
}

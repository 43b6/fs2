inherit ROOM;
void create() {
	set( "short", "С��ͷ�����᷿" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount7"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/sky/obj11/yellow-crystal",
		"file3"    : "/open/sky/obj11/yellow-crystal",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/sky/obj11/yellow-crystal",
		"file6"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/gblade/obj/sa-head",
		"amount8"  : 1,
	]) );
	set( "build", 10152 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����ǿɰ�С��ͷ�Ķ��᷿�������Ҫ�Ǹ�ʽ�����ĵ��ߣ�����
�������׵��ɵ���ħ���ۣ�ǧ��֮ˮ�ȶ�����ս���в���ȱ���ĵ���
�����û�����ǣ�����Ҫ��εֿ�����ռ��еı�̬�����������
�Ĵ�ŵĵ��߶��Ǻ����ġ�

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "��֮����" );
	set( "owner", "turtle" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/dragon-sword",
		"file1"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/tendo/obj/shoe",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/doctor/obj/needle9",
	]) );
	set( "build", 10305 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room273",
	]) );
	set( "long", @LONG

    ��˵�е����ɣ���̬�������е�������һ���������ܵУ�������
�������壬���ƻ���ľ������ʹ����Ҫ������ֻҪ�����£��Ϳ�����һ
�գ���ȥ���䱨���ˣ������������������״��һ�ѣ�С�Ŀ������߾�
�ǲ�Ҫ��Ͷ��ˡ�

LONG);
	setup();
	replace_program(ROOM);
}

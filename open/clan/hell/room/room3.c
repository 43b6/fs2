inherit ROOM;
void create() {
	set( "short", "$HIW$�κ���ͷ$NOR$" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
	]) );
	set( "build", 10689 );
	set( "light_up", 1 );
set( "exits", ([        
		"south"     : "/open/clan/hell/room/hall.c",
		"north"     : "/open/clan/hell/room/room2.c",
	]) );
	set( "long", @LONG
����ǰȥ�����κ����ˣ������κ��žͲ����ٻ�ͷ�ˣ��ѵ���������
û�в����Ĵ�˵�𣡣�ֻ��һ���ŵĹ�Ӱ���κ�������ȥ���ƺ�����ת��
Ͷ̥֮�⣬�Ѿ���·�����ˡ�ÿ����ͬ־����ɫ�ֻֿ��ִ�æ���·���
������������У�����̫��ȥ�ֻ��Ҳ�����λ�ã����ǸϿ���·�ɣ���

  ���޳�(White gargoyle)

LONG);
	setup();
	replace_program(ROOM);
}

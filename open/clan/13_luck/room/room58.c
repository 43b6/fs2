inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "luner" );
	set( "build", 10060 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room53",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����ǲ��ľ���֮�������еĳ����൱�ļ򵥣�����һ��ʯͷ��
������һ�߰���һ��ɴ�����������и�ī��ʯ����ǽ�Ϲ���һ������
�Ļ��񣬻��ﻹ����һ��ʫ��

     �� �ԹŶ������� �� �����������޳� 
        �з����²�֪�� �� �������Ĳ�Ⱦ�� ��

LONG);
	setup();
	replace_program(ROOM);
}

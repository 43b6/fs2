// Room : /open/clan/ou-cloud-club/room/room21.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
ͨ����ħ�ǵĵ�·���ǰ���ɽׯ�ڵ���Ҫ��·����
�ߵ�ǽ������$HIC$�����$NOR$������ɵģ���ʱ͸����һ����͸
���⣬��Ѹ����Ի����þ��ڵ�$HIR$������$NOR$��ȼ����˵����
����Ϩ�𣮶��ذ�����ʹ���޼᲻�ݵĽ��ʯ�������
�ɣ�һ����ȥ��â��ǧ��

LONG);
	set( "short", "���Ƶ�" );
	set( "object", ([
		"file4"    : "/daemon/class/fighter/ywhelme",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/ping/obj/chilin_legging",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file9"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "cation" );
	set( "build", 11352 );
	set( "exits", ([
  "north" : "/open/clan/ou-cloud-club/room/room22.c",
  "south" : "/open/clan/ou-cloud-club/room/room20",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}

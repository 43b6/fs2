// Room : /open/clan/ou-cloud-club/room/room37.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "object", ([
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 11664 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
������ͨ���������-��ħ�ǵ�Ψһͨ��,���㸦̤���˷���,
�������漴 ѽ~~~ ��һ��������,��ǰ��ȴ����,��δ֪��
�ڰ�����,�Լ����˿־�Ķ�ħ��Ϣ...������ȻϮ��,Բ����ȱ
��������,�·�һ��Ϊ��������׳��ҹ��,ǰ����~~~��û��
��·��...
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room38.c",
  "out" : "/open/clan/ou-cloud-club/room/room36",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}

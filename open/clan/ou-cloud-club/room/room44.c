// Room : /open/clan/ou-cloud-club/room/room44.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file10"   : "/open/prayer/obj/boris-cloth",
		"amount6"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "long", @LONG
һ����������Ϣ�������ľ���,˲������˹ű�����Ƶ�
���ܿ���,������ǵ���ˮ����,Ӧ��Ҳ�������Ǳ��Ĺ�ˮ����
��,ˮ���峺����,������Щ�ط���������̶,��Ҫ��ϸ����˴�
����������,��ˮһ���ƺ����ⲻ�˵���.
LONG);
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room98.c",
  "up" : "/open/clan/ou-cloud-club/room/room42",
]) );
	set( "no_transmit", 1 );
	setup();

	}

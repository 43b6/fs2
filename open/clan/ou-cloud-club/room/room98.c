// Room : /open/clan/ou-cloud-club/room/room98.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "long", @LONG
�����м���ͻ��ĵ���������ˮ��,����������Щ�ط�Ҳ��
ǰ��,�����߰�,���ڜ�ȵĹ�ϵ,�����Ͽ��ǳ�������̦��.��
С�ĵ㲻Ҫ����ȥ����,��˵��ħ�Ǵ���������ˮ���·�����
�Ĺ���,������ȥ��ı��������ǿɾͲ������~~~

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room99.c",
  "west" : "/open/clan/ou-cloud-club/room/room44",
]) );
	set( "no_transmit", 1 );
	setup();

	}

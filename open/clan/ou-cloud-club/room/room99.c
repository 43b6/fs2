// Room : /open/clan/ou-cloud-club/room/room99.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10016 );
	set( "light_up", 1 );
	set( "long", @LONG
�����м���ͻ��ĵ���������ˮ��,����������Щ�ط�Ҳ��
ǰ��,�����߰�,���ڜ�ȵĹ�ϵ,�����Ͽ��ǳ�������̦��.��
С�ĵ㲻Ҫ����ȥ����,��˵��ħ�Ǵ���������ˮ���·�����
�Ĺ���,������ȥ��ı�ħ�������,�ǿɾʹ�N�~~~
LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room100.c",
  "west" : "/open/clan/ou-cloud-club/room/room98",
]) );
	set( "no_transmit", 1 );
	setup();

	}

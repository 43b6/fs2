// Room : /open/clan/ou-cloud-club/room/room7.c
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
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/capital/guard/gring",
		"file8"    : "/open/capital/guard/gring",
		"file5"    : "/open/killer/obj/kill_yar_head",
		"file4"    : "/open/capital/guard/gring",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/killer/headkill/obj/bluekill",
		"file2"    : "/open/capital/guard/gring",
	]) );
	set( "build", 12971 );
	set( "clan_room", "����ɽׯ" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/ou-cloud-club/room/room8.c",
		"south"     : "/open/clan/ou-cloud-club/room/hall.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}

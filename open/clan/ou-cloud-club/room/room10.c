// Room : /open/clan/ou-cloud-club/room/room10.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$BRED$$HIM$��$HIR$��$HIC$��$HIR$��$HIR$��$HIR$��$HIG$��$NOR$" );
	set( "owner", "moblade" );
	set( "object", ([
		"file5"    : "/open/capital/obj/blade2",
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/capital/obj/blade2",
		"amount2"  : 1,
		"file3"    : "/open/capital/obj/blade2",
	]) );
	set( "build", 10530 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "long", @LONG
ͨ����ħ�ǵĵ�·���ǰ���ɽׯ�ڵ���Ҫ��·����
�ߵ�ǽ������$HIC$�����$NOR$������ɵģ���ʱ͸����һ����͸
���⣬��Ѹ����Ի����þ��ڵ�$HIR$������$NOR$��ȼ����˵����
����Ϩ�𣮶��ذ�����ʹ���޼᲻�ݵĽ��ʯ�������
�ɣ�һ����ȥ��â��ǧ��
LONG);
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
		"out"       : "/open/clan/ou-cloud-club/room/room32",
		"up"        : "/open/clan/ou-cloud-club/room/room145",
]) );
	set( "clan_room", "����ɽׯ" );
	setup();

	}

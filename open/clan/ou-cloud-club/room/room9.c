// Room : /open/clan/ou-cloud-club/room/room9.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "���Ƶ�(B2)" );
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
	set( "exits", ([ /* sizeof() == 2 */
  "north" : "/open/clan/ou-cloud-club/room/room10.c",
  "south" : "/open/clan/ou-cloud-club/room/room8",
]) );
	set( "clan_room", "����ɽׯ" );
	setup();

	}

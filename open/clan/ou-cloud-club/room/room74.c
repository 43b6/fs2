// Room : /open/clan/ou-cloud-club/room/room74.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��Ѿ���ǧ����࣬������������������ڱ�Ϣ����֮ʱ�����Ȼ����
���֣����ϵĵ�·����������ۣ������ƺ����������а���֮������ǰ����
��·���ӹ����쵮���������У���������·�͵ÿ����Լ����컯�ˣ���������
����������
LONG);
	set( "short", "$HIY$��ɽ$NOR$ɽ��" );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/ou-cloud-club/room/room75.c",
  "down" : "/open/clan/ou-cloud-club/room/room73",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}

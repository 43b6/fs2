// Room : /open/clan/ou-cloud-club/room/room12.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
һ���������ߵĵ�·����ȥ���಻����������㡡��������
һ�߿��������ף����Ժ��������㣬�ʴ˴������ѡ���������
�����������ѣ����ڴ˴��⵽��������ǰ��ɻ����ѡ���������
���мܣ�����������������
����������
LONG);
	set( "short", "$HIY$��ɽ$NOR$ɽ��" );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/ou-cloud-club/room/room68.c",
  "south" : "/open/clan/ou-cloud-club/room/room24",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}

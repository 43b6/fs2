// Room : /open/clan/sky-wu-chi/room/room100.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "���t��" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
  ͨ�������۵��ߵ�
��������ǰ����һ������ĵ��� ��ѽ��ѽ
����������ڨ�ڵ����� ʹ�������־�֮�е���Ҫ��Ҫ����    �������������Ż᲻��ʹ˵���
������Ԩ.....................   ��ʱ�㾹��ԥ������....
��ѽ~~~��ѽ~~~~~~

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room101.c",
  "north" : "/open/clan/sky-wu-chi/room/room99",
]) );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room82.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "$HIR$����$NOR$" );
	set( "light_up", 1 );
	set( "long", @LONG
�ž����ߵ������������������ĵƻ����ƺ�����Щ
����ߣ�Ҳ��쵽����޼����켫���ˣ���ů�Ļ��������
�����ø�������ʣ��벻��������ŵ���������������
��һ�棬��һ�����������õ�һƬʱ���о��ƺ�������ߵ�
�ˡ�
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room6",
  "east" : "/open/clan/sky-wu-chi/room/room83.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}

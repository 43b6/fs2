// Room : /open/clan/sky-wu-chi/room/room6.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "light_up", 1 );
	set( "long", @LONG
�ž����ߵ������������������ĵƻ����ƺ�����Щ
����ߣ�Ҳ��쵽����޼����켫���ˣ���ů�Ļ��������
�����ø�������ʣ��벻��������ŵ���������������
��һ�棬��һ�����������õ�һƬʱ���о��ƺ�������ߵ�
�ˡ�

LONG);
	set( "short", "���� 2" );
	set( "build", 27 );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/wu/obj/ring1",
	]) );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 4 */
		"north"     : "/open/clan/sky-wu-chi/room/room82.c",
		"west"      : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room105.c",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}

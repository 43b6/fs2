// Room : /open/clan/sky-wu-chi/room/room4.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
�ž����ߵ������������������ĵƻ��ҷ��ƺ�����Щ
����ߣ�Ҳ��쵽����޼����켫���ˣ���ů�Ļ��������
�����ø�������ʣ��벻��������ŵ���������������
��һ�棬��һ�����������õ�һƬʱ���о��ƺ�������ߵ�
�ˡ�

LONG);
	set( "short", "����1" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room103.c",
		"south"     : "/open/clan/sky-wu-chi/room/room85.c",
		"east"      : "/open/clan/sky-wu-chi/room/hall.c",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room59.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/sky-wu-chi/room/room4",
]) );
	set( "light_up", 1 );
	set( "short", "$HIY$����ɽׯ$NOR$--$HIG$������$NOR$" );
	set( "long", @LONG
�ž����ߵ������������������ĵƻ��ҷ��ƺ�����Щ
����ߣ�Ҳ��쵽����޼����켫���ˣ���ů�Ļ��������
�����ø�������ʣ��벻��������ŵ���������������
��һ�棬��һ�����������õ�һƬʱ���о��ƺ�������ߵ�
�ˡ�
LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	set( "no_clean_up", 0 );
	setup();

	}

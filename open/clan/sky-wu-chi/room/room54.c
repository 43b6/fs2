// Room : /open/clan/sky-wu-chi/room/room54.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "����ɽׯ--������" );
set( "long", @LONG
��������$HIW$��$HIC$��Ȼ�����$HIW$��$NOR$���ݵĴ��ſڴ������󵶷����������
�����㱾��Ĺ���Ҳ��ǳ��������ͻ�������ĵ����в�������һ����
���������������ӵ��߶Ծ�������ʤ�㻹�д�������������Ű߻�
�ĵ������ƣ�������΢��ᵽ������Ѿ���$HIY$����ɽׯ$NOR$�����˺�һ����
�ˣ����ݵ�����Ҳ����ľ����Χ�ƶ��ɵġ�
LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"enter"     : "/open/clan/sky-wu-chi/room/room55.c",
		"north"     : "/open/clan/sky-wu-chi/room/room53.c",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}

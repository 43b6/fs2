// Room : /open/clan/sky-wu-chi/room/room101.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "�����ߵ�" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
 �������������ľ����ߵ���������ȥ�����������
������ľ���ʮ�˹ա�������ˣ�ͨ���Ŀ��һ�ν���
����һ��ͨ������....����..���С�� ��ֹǰ��ĵ��˳����
�����ͺ��޽���֮·��...........С��.~~~~~~�..
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room119",
		"south"     : "/open/clan/sky-wu-chi/room/room102.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}

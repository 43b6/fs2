// Room : /open/clan/sky-wu-chi/room/room20.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room9.c",
]) );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG

��������������С�ѣ��Ͷ���������Ϻ������кβ��ɸ��˵�
��ϵ�����κ��¶�Ҫ������ĳɶ�������������������ǰ����
���ݵ���ʦ�������Ϸ���������������������Ҫ���ǰҲ��ʼ
����һ�������������ϱ߲�Զ���ˣ���������С��������ֵ�
��Ҳ����ͬһ���ط����档

LONG);
	set( "short", "���������ķ��䡿" );
	set( "build", 2728 );
	set( "owner", "prople" );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}

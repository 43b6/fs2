// Room : /open/clan/sky-wu-chi/room/room11.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
���������������պ��������￴���Ǳ��ݣ���
����̨�ϵ���ǡ���롣�����������ֲ����ˣ�����
�����������Ķ����ʹ�һ�°ɣ������Ķ�С椣���
��Ҫ���ֹ��裬����ж�ͯ�������ʮ�˽�������
��ĿҲ����β���ˣ��ؼҵ�ʱ��쵽�ˡ�����ϳ�
����վȥ�ɡ�
LONG);
	set( "exits", ([ /* sizeof() == 4 */
		"north"     : "/open/clan/sky-wu-chi/room/room12.c",
		"south"     : "/open/clan/sky-wu-chi/room/room10.c",
		"east"      : "/open/clan/sky-wu-chi/room/room22.c",
]) );
	set( "short", "�� �� 4" );
	set( "build", 76 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}

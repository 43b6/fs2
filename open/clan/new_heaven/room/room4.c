// Room : /open/clan/new_heaven/room/room4.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "��ʱ���֮��" );
	set( "light_up", 1 );
	set( "long", @LONG
���������Ҫ��Ҫ���Կ���ɫ���ڿɲ�������
    �������������޵Ĺ�����, ����������İ��ĳ��Ŵ� ��
�Ĵ���Ƭ,����һ�������, ��˵���Կ����ɵĿ���ĵ���,
�Ǹ�������豸,����������Ҫ÷�ѩ�����,��Ϊ÷�ѩ��
�������������������޵ķ����ˡ�
�����Ӽ��(accuse)����, ��������������run tin�������
accuse <id>��������ȥ���й���ȥ�����⡣

LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/new_heaven/room/room3",
		"north"     : "/open/clan/new_heaven/room/room6.c",
		"east"      : "/open/clan/new_heaven/room/room7.c",
		"south"     : "/open/clan/new_heaven/room/room2.c",
]) );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	setup();

	}

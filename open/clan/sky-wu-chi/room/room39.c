// Room : /open/clan/sky-wu-chi/room/room39.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "����޼�" );
	set( "long", @LONG
����������޼����°�������Ϣ�����ĵĳ�����
Ҫ�����������,�����ڴ˵�������Ϣ,������һ����
,��Ҷ���ܻ�ӭ���.���������°��ڻ�����һ����
��ң��ڴ���Ϣ����������ѵ�ѡ�񡣳�����Ϣ����
��Ҳ��ͨ��������Ա����ĵ�·��

LONG);
	set( "short", "��������" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/sky-wu-chi/room/room38",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room78.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "÷��ѩӰ��" );
	set( "owner", "miffy" );
	set( "build", 12160 );
	set( "long", @LONG
��������һ���С�÷��ѩӰ�ӡ��ط�������ط��ƺ����������ɫ������
�������㿴����һ����������صĻ�ͭ���ţ������Ǻ����ҵ������ĵ��������
���Ŵ������������������һ���������ڡ�������㾪�ȵ��·����ˡ�����
�Ʒ粻����ֻ���������ӡ����ϸ��һ�����ϵ��˺�����ࡣ�ͺ�������˵����
�����Ҳ�����˵�һ̽��������˼��֮ʱ��ȴ������һ���ı����ˡ��߳���
�ľ���һλŮ��ԭ����λŮ�Ӿ�����ͷ�ķ��ˡ��������
����������д����ȥ��������ľ���,��Ҳ������Ҫ��ȥһ������,��������
��������Щʲô�������ܹ����������Ķ���

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/sky-wu-chi/room/room75.c",
		"west"      : "/open/clan/sky-wu-chi/room/room76.c",
		"east"      : "/open/clan/sky-wu-chi/room/room151.c",
		"north"     : "/open/clan/sky-wu-chi/room/room146",
]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	setup();

	}

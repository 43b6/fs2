// Room : /open/clan/sky-wu-chi/room/room7.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
����ɽׯ�������庮���䣬ʵ����ȴ��һ�����ﻨ��ı���
û���Ƕ������������ı���һ��Ķ�����ܰ�����ﲻ��û���Ǵ�
�ǵĺ��磬Ҳû���Ŷ��ķ�������ֻ�Ǻ�����������£����Ŵ�
��ϲ�õĻ�Ц�����Լ���������ů�������£���ͬ�����Ĵ��ͥ
���ԡ�

LONG);
	set( "exits", ([ /* sizeof() == 2 */
		"down"      : "/open/clan/sky-wu-chi/room/room5",
		"enter"     : "/open/clan/sky-wu-chi/room/room8.c",
]) );
	set( "short", "$HIY$����ɽׯ$NOR$" );
	set( "build", 4 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}

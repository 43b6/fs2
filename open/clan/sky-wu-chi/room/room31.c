// Room : /open/clan/sky-wu-chi/room/room31.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
����ɽׯ�������庮���䣬ʵ����ȴ��һ�����ﻨ��ı���
û���Ƕ������������ı���һ��Ķ�����ܰ�����ﲻ��û���Ǵ�
�ǵĺ��磬Ҳû���Ŷ��ķ�������ֻ�Ǻ�����������£����Ŵ�
��ϲ�õĻ�Ц�����Լ���������ů�������£���ͬ�����Ĵ��ͥ
���ԡ�
LONG);
	set( "exits", ([ /* sizeof() == 2 */
  "out" : "/open/clan/sky-wu-chi/room/room35.c",
  "south" : "/open/clan/sky-wu-chi/room/room47",
]) );
	set( "short", "$HIR$���챱��$NOR$" );
	set( "build", 43 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}

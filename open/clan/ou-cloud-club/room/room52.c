// Room : /open/clan/ou-cloud-club/room/room52.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10021 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/ou-cloud-club/room/room53.c",
  "up" : "/open/clan/ou-cloud-club/room/room51",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
����ķ������Ǹ����Զ�������Сƽ̨,�����������ֽ�
�ĵ���,������ʹӵ��ǿ������,���������Ҳ��Ը�����һЩ
Ϊ����������������!ֻ������δ��ȫ�ִ����ļ���ʹ����ƽ
̨������ֻ����һ����������ʹ�õ��������.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room9.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��������������ҹ�ж���������������
�ֱߵ���������֮�Ƶ��ǡ�������������
��С�ܵܣ��벻Ҫ���ַŵ�����ม�������
�������ǿ������ǡ�������ѽ��С�Ĳ�Ҫ��
�����������ܵ�������ร������ǽ�����ȥ
��һ���ɡ�
LONG);
	set( "exits", ([ /* sizeof() == 4 */
		"west"      : "/open/clan/sky-wu-chi/room/room15.c",
		"east"      : "/open/clan/sky-wu-chi/room/room20.c",
		"north"     : "/open/clan/sky-wu-chi/room/room10.c",
		"south"     : "/open/clan/sky-wu-chi/room/room8.c",
		"up"        : "/open/clan/sky-wu-chi/room/room42",
]) );
	set( "short", "�� �� 2" );
	set( "build", 906 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room10.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������ร���������������ʳ����������������
�ߵ��ǡ�С��ͷ��ʨ��������ע�⣬��Ҫιʳ�����
����ѽ���Ÿ�˵�꣬С���Ѳ���ร����ܰ�ƨƨ����
��ҧม����������������������ֱߵġ�������˼��
�������ϻ���ɲ����˵�����ร���⣬���ֱ��Ա�
��Сè���ſ��ˡ������죡ûʱ���ˣ��Ͽ쵽��һ��
�ɡ�
LONG);
	set( "exits", ([ /* sizeof() == 4 */
		"up"        : "/open/clan/sky-wu-chi/room/room70",
		"east"      : "/open/clan/sky-wu-chi/room/room21.c",
		"north"     : "/open/clan/sky-wu-chi/room/room11.c",
		"west"      : "/open/clan/sky-wu-chi/room/room45",
		"south"     : "/open/clan/sky-wu-chi/room/room9.c",
]) );
	set( "short", "�� �� 3" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}

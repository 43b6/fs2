// Room : /open/clan/sky-wu-chi/room/room105.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", " ��ʯС· 3" );
	set( "build", 506 );
	set( "light_up", 1 );
	set( "long", @LONG
������������֪���켫�����������ΰ���ŵ���
�춫�ţ����켫���·���䲻������ȴҲ��һ��������
�е����õط���·�Ե���������������Ŀɰ����
���õ�������ʳ���أ���������ֻ������޼��İ�����
ϲ�������ˡ�

LONG);
	set( "clan_room", "����޼�" );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room6.c",
		"east"      : "/open/clan/sky-wu-chi/room/room107.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}

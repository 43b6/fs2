// Room : /open/clan/sky-wu-chi/room/room103.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", " ��ʯС· 2" );
	set( "light_up", 1 );
	set( "long", @LONG
������������֪���켫�����������ΰ���ŵ���
�����ţ����켫���·���䲻������ȴҲ��һ��������
�е����õط���·�Ե���������������Ŀɰ����
���õ�������ʳ���أ���������ֻ������޼��İ�����
ϲ�������ˡ�

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room104.c",
		"east"      : "/open/clan/sky-wu-chi/room/room4.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room61.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�������ҳ�һ�ţ�ʮ������׷��һ�����ܣ������������Ī������һ�Լල��
������ʦ��һ�ߵ����³�ʦһ�߷����µĲ�ɫ��������涾���嶾����õ�嶾��
һ����ֱ�����һ������ζ�������������ð����ƽ��������
LONG);
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "short", "Rueר�ó���" );
	set( "owner", "rue" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room308",
	]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}

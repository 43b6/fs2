// Room : /open/clan/sky-wu-chi/room/room83.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "$HIB$�׼���$NOR$" );
	set( "light_up", 1 );
	set( "long", @LONG
���޶������޳����׼������ϣ����ŷ���׵�ͼ������
���лû�֮���к�һ�����ô���ϣ���׳����Ϣ���ǲ���ȱ
�٣����׼����ϣ��ܾ��ñ�һ��ĵ����ϻ�Ҫ���ֲ���˼��
���������ڣ�����Ҳ���������������ƽӶ����Ҳ��ʧ���
�ص���ɫ��������һƬ��������һζ���صķ��

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room82.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
����������£�����ɽׯȴ����һ�ֲ�Ϊ
��֪����Ļ����ʵ���澡Ȼ�ǰ��ڵ����ᣬ��
�ȿ����������ֱߵ���С�µ����ᣬС�ģ���
�Ҷ�����ร������������ǣ����ֱߵ���ԯ��
��С�ϸ�����ѡ�С�ı��ͷ���ȥม�����
�������������帣�嶯��԰��ҹ�ж���������
������������ǰ�ߡ�����

LONG);
	set( "exits", ([ /* sizeof() == 6 */
		"north"     : "/open/clan/sky-wu-chi/room/room9.c",
		"west"      : "/open/clan/sky-wu-chi/room/room14.c",
		"out"       : "/open/clan/sky-wu-chi/room/room7.c",
]) );
	set( "short", "�� �� 1" );
	set( "build", 40 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}

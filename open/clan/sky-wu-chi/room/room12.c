// Room : /open/clan/sky-wu-chi/room/room12.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "�� �� 5" );
	set( "cmkroom", 1 );
	set( "long", @LONG
�ؼҵ�·���������ģ�������ջ������൱
�Ķ࣬�������������Ķ���س�ʱ��������
�ȱ���������˵���Ժ��ӣ�ҹ���ˣ���ؼҰɡ�
Ҳ�����ˡ��㡱���������ɵĶԿ����й��ܼ���
����ȫ�����ش��㣬����˯���������ǲ������
����
LONG);
	set( "exits", ([ /* sizeof() == 5 */
		"east"      : "/open/clan/sky-wu-chi/room/room23.c",
		"south"     : "/open/clan/sky-wu-chi/room/room11.c",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	set( "light_up", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room22.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
���������ڵĵط����ǿ�ƿ�ӵľ�������ͷ���������㲢�޸о�����ʲô��
��ͬ�㿴��һ�����ܵľ�ɫ��Զ���ľ����ɽ���������߲�������������������
��ʵ�Ѿ��е����巽���е�����ˡ������������ֻʯʨ��������һ������ȫ��
��֪����ʯͷ���ġ����ܵľ�ɫʮ�ֵ�Ư�������������߽�һ���ȥ��ͷʱ����
������һ�ɿ��ܵ����������������Ҳ�����ǰ��Խ��Խ�ء�֮���㿴����һ��
ʯ����ͷд�š������������������е�һ�ɲ��������������Ҫ��ǰ���С�
LONG);
	set( "short", "��ƿ�Ӿ���ͷ" );
	set( "build", 318 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/sky-wu-chi/room/room11",
  "enter" : "/open/clan/sky-wu-chi/room/room50.c",
]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	setup();

	}

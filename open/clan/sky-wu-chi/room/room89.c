// Room : /open/clan/sky-wu-chi/room/room89.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "�𼫵�" );
	set( "light_up", 1 );
	set( "owner", "shih" );
	set( "long", @LONG
��֮���ã��𼫵���ȵĻ����£�ӵ����������
����׽��֮��û�֮����֮���ң��鲼��������
���ã������֮��֮���Һͻû�֮�����Թž���ͣפ
�ڴˣ�ʹ�˶�������޼�֮���е���ӳ������������
���˽����ͷ��

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/sky-wu-chi/room/room87",
]) );
	set( "cmkroom", 1 );
	setup();

	}

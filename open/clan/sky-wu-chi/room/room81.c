// Room : /open/clan/sky-wu-chi/room/room81.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "�ؼ���" );
	set( "light_up", 1 );
	set( "long", @LONG
���ؼ����������޼�֮�弫����֮һ�����صĵ�
���£����Եó����ĸ߹�������У��û����������
�����˵�Ҳֻ����ؼ������ġ���Ȼ��û�������켫����
��Ļ�����ֻ��һ��ƫ�������Ӵ˵�������λ��������
�ƺ�����ʲô���ص������������Ե�����(sign)�ϣ��ƺ�
�п���ʲô�����������档

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "north" : "/open/clan/sky-wu-chi/room/room92.c",
  "east" : "/open/clan/sky-wu-chi/room/room80",
]) );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "
����޼�֮���лû����仯Ī�⡣

",
]) );
	setup();

	}

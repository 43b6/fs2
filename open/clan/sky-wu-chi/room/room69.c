// Room : /open/clan/sky-wu-chi/room/room69.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��������$HIC$�ߵ�$NOR$" );
	set( "light_up", 1 );
	set( "long", @LONG
����������޼�����������,����Ϊ���Ƕ���СС������
���ǿ����е���sa;fire king �������,ƽʱ���ﳣ��������
����������,���ǵ�Ŀ��ֻ��һ��,�� ��������~~~~~~~~
����..�ߵ�����ʹ�㲻����������֮��,��������������
��Ҳ��������....
LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room70.c",
		"north"     : "/open/clan/sky-wu-chi/room/room67.c",
		"east"      : "/open/clan/sky-wu-chi/room/room66.c",
]) );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}

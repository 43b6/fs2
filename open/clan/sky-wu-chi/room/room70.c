// Room : /open/clan/sky-wu-chi/room/room70.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��������$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room175",
		"down"      : "/open/clan/sky-wu-chi/room/room10.c",
		"south"     : "/open/clan/sky-wu-chi/room/room207.c",
		"east"      : "/open/clan/sky-wu-chi/room/room69.c",
	]) );
	set( "long", @LONG
����������޼�����������,����Ϊ���Ƕ���СС������
���ǿ����е���sa;fire king �������,ƽʱ���ﳣ��������
����������,���ǵ�Ŀ��ֻ��һ��,�� ��������~~~~~~~~
����..�ߵ�����ʹ�㲻����������֮��,��������������
��Ҳ��������....

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room56.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "����������" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room49.c",
		"west"      : "/open/clan/sky-wu-chi/room/room66.c",
		"south"     : "/open/clan/sky-wu-chi/room/room25.c",
	]) );
	set( "long", @LONG
����������޼�����������,����Ϊ���Ƕ���СС������
���ǿ����е���sa;fire king �������,ƽʱ���ﳣ��������
����������,���ǵ�Ŀ��ֻ��һ��,�� ��������~~~~~~~~
����..�ߵ�����ʹ�㲻����������֮��,��������������
��Ҳ��������....
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	setup();

	}

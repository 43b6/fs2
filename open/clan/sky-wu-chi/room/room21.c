// Room : /open/clan/sky-wu-chi/room/room21.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room10.c",
		"down"      : "/open/clan/sky-wu-chi/room/room363",
		"enter"     : "/open/clan/sky-wu-chi/room/room41.c",
		"north"     : "/open/clan/sky-wu-chi/room/room315",
		"south"     : "/open/clan/sky-wu-chi/room/room138.c",
		"up"        : "/open/clan/sky-wu-chi/room/room72.c",
]) );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
{��? ����������? ����ô��û����?}
�οͼ����Ա����ֵ��ο����૱�Թ��.
{��·��ô��,���ǾͶ����߰�!}
{���·�ĵ����ڸ�ʲô?}
��Ȼ $HIW$˼��$NOR$������һ��ҧס�οͼ�,һ�Ų�ס�ο���
{������,��д�����򻹸҆���}
����һ��,һ����紵��,������������׵�С��.
LONG);
	set( "short", "$HIY$���ز�·$NOR$" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 25 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}

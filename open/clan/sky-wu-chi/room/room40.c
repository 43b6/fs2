// Room : /open/clan/sky-wu-chi/room/room40.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "����޼�" );
	set( "long", @LONG
��������һ������޼���ΰ������֮һ
��ͨ������������������һ��������ֱ��
���ң��۲�������Ŀ������ߣ���Ҫ�������
�㣬������Ҫ����һЩʱ�䡣�����⵽Ҳ�Ǹ�
���ͷ羰�ĺõط������ⶰ¥���·����и�ָ
ʾ��(sign)���Ƿ��ܶ����µĸп����и���һ
��ļ����ء�

LONG);
	set( "short", "ͨ���" );
	set( "object", ([
		"file10"   : "/open/magic-manor/obj/dark-soul-dagger",
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file4"    : "/daemon/class/blademan/obj/six-neck",
		"amount10" : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/love/obj/cloth1",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/love/obj/shield",
		"file1"    : "/daemon/class/blademan/obj/ublade",
		"amount6"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10004 );
	set( "owner", "conpse" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/room52.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "
��Щ��¥���贰��(window)�����ܲ��ܿ���Щʲô��

",
]) );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room110.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
        set( "long", @LONG
�߽���һ����������$HIR$������$NOR$��Ϣ�����ң���Ȼ��������
���������񣬵����Կ��Կ������뻮һ�ķ�����裬һ�Ե�
����������м�����Ҫ��$HIY$ɱ��װ��$NOR$��������࿴����ͻȻ��
�洫��һ��������С�ӣ�����͵��������ҹ���ȥ��
LONG);
        set( "cmkroom", 1 );
        set( "no_clean_up", 0 );
	set( "short", "$BMAG$$HIG$�����׵�����$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount8"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/tendo/obj/chaosbelt",
		"amount7"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"file4"    : "/daemon/class/fighter/armband",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10166 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room209.c",
		"south"     : "/open/clan/sky-wu-chi/room/room155.c",
		"west"      : "/open/clan/sky-wu-chi/room/room196.c",
	]) );
        set( "clan_room", "����޼�" );
	set( "light_up", 1 );
        set( "no_transmit", 1 );
        setup();

        }



// Room : /open/clan/sky-wu-chi/room/room24.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
        set( "long", @LONG
������С�¼ҵ�һ������ŵı����������������������ǿ
�������ı�����ƽ�����Ҳ�����ͨ�����ﶼ�У������������ǽ�ֹ
�����ȡ�����ġ������ŵĶ���ͨ��С�±���Ҳ�����õ�������
����Ҫ�Ļ��Ǻ���������Ķ����ġ����һ�ᣬƽ��С���õ�����
�����ƻ�צ�ͺ�������ǵ�ʹ�ú�Żء�

LONG);

	set( "short", "$HIC$��$NOR$������$HIC$��$NOR$С��" );
	set( "owner", "eve" );
	set( "object", ([
		"amount10" : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/gsword/obj/ring-1",
		"file10"   : "/daemon/class/fighter/armband",
		"file5"    : "/open/capital/obj/king-boots",
		"amount3"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/mogi/village/obj/mogi_ring",
		"amount8"  : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/prayer/obj/boris-hat",
	]) );
	set( "build", 11291 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room159",
		"west"      : "/open/clan/sky-wu-chi/room/room160.c",
		"north"     : "/open/clan/sky-wu-chi/room/room156.c",
		"down"      : "/open/clan/sky-wu-chi/room/room154.c",
	]) );
        set( "no_transmit", 1 );
        set( "item_desc", ([ /* sizeof() == 1 */
  "window" : "
[31mС������һ��!!![0m

    ԭ��С���ڱ��ϲ����߿�PLAY BOY
",
]) );
        set( "no_clean_up", 0 );
        set( "clan_room", "����޼�" );
        set( "cmkroom", 1 );
        setup();

        }


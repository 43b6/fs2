// Room : /open/clan/ou-cloud-club/room/room2.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
����Ϊ�������У����������ð��ڴ�Ǯ�⣬��Ҫ��
���ô�Ҿ��������Ǯ�ƣ��Թ��������������ã�����
�Բ����壬����Կ�������Ĺ���(board) ������

 
                     [0;1;33m��[1m��[1m [1m [1m [1m [1m [1m [1m��[1m��[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m��[1m [1m [1m [1m��[1m��[1m [1m [1m [1m [1m [1m [1m��[1m��[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m��[1m [1m [1m [1m��[1m��[1m [1m [1m [1m [1m [1m [1m��[1m��[1m [0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m��[1m [1m [1m [1m��[1m��[1m [1m [1m [1m [1m [1m [1m��[1m��[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
 [33m                    Ǯ      Ǯ   Ǯ[0m
[33m                     Ǯ      Ǯ   Ǯ[0m
[33m                     Ǯ      Ǯ   Ǯ[0m
[33m                 ǮǮǮǮǮǮǮǮǮ[0m
[33m                     Ǯ      Ǯ[0m

           [0;1;31m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mj[0m 
           [0;1;31m��[1mi[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mI[1m��[1m��[1m��[1m��[1m��[1mj[0m

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "short", "$HIC$����$HIR$Ǯׯ$NOR$" );
	set( "item_desc", ([
		"board" : @ITEM
c_deposit          ����Ǯׯ��Ǯ(��ʱ���룬�������)
c_donate           ����Ǯׯ��Ǯ(��������������׸�����)
Ҫc_donateǰ����c_deposit�������
ITEM,
	]) );
	set( "object", ([
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"amount5"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"amount7"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"amount4"  : 1,
	]) );
	set( "build", 10957 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/hall",
]) );
	set( "light_up", 1 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room75.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "��������" );
	set( "owner", "tanger" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 12001 );
	set( "object", ([
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file1"    : "/open/capital/guard/gring",
		"file3"    : "/obj/poison/five_poison",
		"file2"    : "/obj/poison/rose_poison",
		"amount2"  : 903,
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file10"   : "/open/killer/weapon/k_torch",
		"file4"    : "/u/a/acky/obj/gps",
		"amount1"  : 1,
		"amount10" : 1,
		"file7"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount6"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount3"  : 1000,
		"amount8"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount7"  : 1,
		"amount5"  : 1,
	]) );
	set( "long", @LONG
���ߵ���һ����Ϊ[1;37m��[1;32m����[1;37m��[0m���ȵĵط����㷢������ĵذ���Щ��Ĳ�ͬ
��Ϊ����ĵط���������������������һ��������о�ֻ�������ڿ���һ����
������һֻ���������Ĳ�һ��������Ҳ�����ţ��ţ�������ֻ�ض�����������
��ͷͷ�������ȥ������һ�£�����������ֵ��۾���Ȼ�����һ����â��ͻ
Ȼ��������һ������ʱ�������������ǻ��˹���һ����������ӭ�����������
�Ķ������������ף���æ��������ٷ�֮һ�ٶ�ʮ��������Ҫ���������Ĺ���
���ǵ������������������ʱ�����Ѿ��������ˣ���Ϊ����β����ɨ�����
���塣

LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room50.c",
		"east"      : "/open/clan/sky-wu-chi/room/room152",
		"north"     : "/open/clan/sky-wu-chi/room/room78.c",
]) );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	setup();

	}

inherit ROOM;
void create() {
	set( "short", "$HIW$���趾����$HIG$ר����$NOR$" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file6"    : "/open/killer/weapon/k_head3",
		"file5"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/capital/room/king/obj/km-boots",
		"amount9"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/capital/room/king/obj/km-cloak",
		"amount1"  : 1,
		"file8"    : "/open/ping/obj/chilin_legging",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/ghost-hole/obj/flute",
		"amount3"  : 1,
	]) );
	set( "build", 10002 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room280",
	]) );
	set( "long", @LONG

��Ӵ!!������������~~~

��Ӵ!!��õ��������̲�~~~


����!!����������������~~~


��Ӵ!!�嶾���տ�ζ����~~~


������!!ȫ��ζ�ռ���,�������������~~~


����(��ɱ)����(��ɱ)������~~~


$HIW$biwem$NOR$����Ʒ�ʱ�֤
$HIW$biwem$NOR$����Ʒ�ʱ�֤


������  $HIC$WA HA HA HA HA$NOR$  ^_^

LONG);
	setup();
	replace_program(ROOM);
}

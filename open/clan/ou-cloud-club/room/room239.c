inherit ROOM;
void create() {
	set( "short", "$HIR$ħ��$HIY$��$HIW$��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/prayer/obj/kylin-belt",
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"file7"    : "/daemon/class/fighter/armband",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/prayer/obj/boris-boots",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
	]) );
	set( "build", 10024 );
	set( "light_up", 1 );
	set( "owner", "nickm" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room195",
	]) );
	set( "long", @LONG

                 $HIR$��  $HIW$ħ  ��  ն  $HIR$��

$HIG$��ѩ�� �绨��$HIY$����һԾ����ȫ���������ڽ��⣬ƾ�շ���һ����
$RED$�㷴Ӧ������$HIR$ħ��ն$RED$��ȫ���ᴩ�������塣
$NOR$( ��$RED$�Ѿ���������״̬����ʱ������ˤ����ȥ��$NOR$ )

$NOR$�����һ�����ȣ����ڵ���һ��Ҳ�����ˡ�$NOR$

LONG);
	setup();
	replace_program(ROOM);
}

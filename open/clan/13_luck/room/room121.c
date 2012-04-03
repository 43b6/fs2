inherit ROOM;
void create() {
	set( "short", "ǰ��" );
	set( "owner", "raymond" );
	set( "object", ([
		"file2"    : "/open/killer/obj/k_ring",
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"file3"    : "/open/prayer/obj/boris-boots",
		"amount5"  : 1,
		"file4"    : "/open/gsword/obj/yugem",
		"amount7"  : 1,
		"file5"    : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"file9"    : "/open/firedancer/npc/eq/r_leg",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount1"  : 1,
		"file8"    : "/open/mogi/village/obj/mskirt",
		"amount8"  : 1,
		"file10"   : "/open/mogi/village/obj/mamulet",
		"file6"    : "/open/ping/obj/gold_hand",
		"amount2"  : 1,
	]) );
	set( "build", 10975 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room122",
		"north"     : "/open/clan/13_luck/room/room125",
	]) );
	set( "long", @LONG
                 
                 [33mǰ��[0m
                                                         
������[52m�������[0m���ö��ɣ����Ŵ󷽣���������
�񴰰��ڣ��ڴ�����ĵ��λ�����[33m�������ǲ���[0m
[33m���б��������������ҡ����ů�£����ڴ���[0m
[33m����[55m���˵���[33m���������ƣ������������֮�飬[0m
Ϊа���Ӵ�ֿ��֮�����ܽ��ŵ��͵�������ָ����
LONG);
	setup();
	replace_program(ROOM);
}

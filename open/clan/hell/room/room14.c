inherit ROOM;
void create() {
	set( "short", "$RED$��᪵�$NOR$" );
	set( "owner", "onyx" );
	set( "item_desc", ([
		"sign" : @ITEM
$HIW$   �ڡ��С���è   $NOR$
ITEM,
	]) );
	set( "object", ([
		"amount9"  : 59,
		"file8"    : "/open/marksman/obj/super_pill",
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file4"    : "/daemon/class/blademan/obj/mkblade",
		"file2"    : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/gold/obj/golden-blade",
		"amount8"  : 15,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 72,
	]) );
	set( "build", 10058 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room12.c",
		"east"      : "/open/clan/hell/room/room21.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������������;������˾�ţ����֮�������˴˵أ�
·�߷���һ��С·��(sign)��·���ϵ��ּ��ƺ��Ѿ�ģ����
���ˣ�ǰ����·��һ�����ɵ��������ǣ�����ߵ�·ȴһֱ
���������è����

���������� $HIW$������������$NOR$

LONG);
	setup();
	replace_program(ROOM);
}

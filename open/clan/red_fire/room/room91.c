inherit ROOM;
void create() {
	set( "short", "$HIY$Macintosh$HIC$�ļ�$NOR$" );
	set( "owner", "macintosh" );
	set( "light_up", 1 );
	set( "object", ([
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_legging",
		"amount7"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount10" : 1,
		"amount4"  : 1,
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount1"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file4"    : "/u/d/dhk/questsfan/obj/diamond_hairpin",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file6"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_hands",
		"file7"    : "/u/d/dhk/questsfan/obj/diamond_skirt",
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_belt",
	]) );
	set( "build", 10156 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room89",
	]) );
	set( "long", @LONG

������$HIY$�����$NOR$��С���䣬����Կ�������ĳ���ǳ��򵥣�ֻ��һ��С���Ӻ�С����
��С���϶��ż����·�������Ҳ���߰���ģ����ó������������һ�������...
��ϸһ�������ϰ���һ̨$HIC$��������$NOR$��$HIW$����$NOR$�����ڸ¸�����Ĺ����С�
�㲻�������ӭ��ǰȥ������̨$HIW$����$NOR$������Щʲô?
ͻȻ����۾�һ�������ֵ���̨$HIW$����$NOR$��Ȼ���Ǵ����ʹ�õ�$HIM$�⻪��$NOR$��$HIC$IBM$NOR$����$HIR$PC$NOR$...
������С�ʾ��ֺ��õ�$HIB$Apple PowerPC Macintosh$NOR$ !!!!
�����㲻�������������������Ǹ���������Ʒζ������...


LONG);
	setup();
	replace_program(ROOM);
}

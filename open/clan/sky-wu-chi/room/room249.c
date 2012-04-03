inherit ROOM;
void create() {
	set( "short", "$HIC$������ϵ$NOR$" );
	set( "owner", "lord" );
	set( "object", ([
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/daemon/class/fighter/armband",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/figring",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10035 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room239",
	]) );
	set( "long", @LONG
�����Ǵ�˵�� ���صĻþ� ������ϵ

      $HIC$����� �պ��� һ������������$NOR$
      $HIC$ʯ�л� ������ ������ҡ�η���$NOR$

���ܻ������������ʫ�� ������һ��ŨŨ�Ĺ�������

$HIM$���쪵Ĵ��ũ���!! �ƻ�����Ʈ�ũ���!!$NOR$
$HIM$�����ǵ����ũ���!! �������ǹ����׵������©���!!$NOR$


LONG);
	setup();
	replace_program(ROOM);
}

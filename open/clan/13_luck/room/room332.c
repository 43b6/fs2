inherit ROOM;
void create() {
	set( "short", "���ʥ��" );
	set( "owner", "smalloo" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount9"  : 5,
		"amount3"  : 364,
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/killer/obj/s_pill",
		"amount4"  : 26,
		"file5"    : "/open/fire-hole/obj/w-pill",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/ping/obj/poison_pill",
		"amount1"  : 348,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 7,
		"amount5"  : 2,
	]) );
	set( "build", 12369 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room334",
		"enter"     : "/open/clan/13_luck/room/room331",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����������[0;1;34m��[1m��[1m��[1m��[1m��[1mt[1m��[1m��[0m����ǰվ��һλ���ˣ������������»��
�������--->[0;1;34m��[1m��[1m��[1m��[0m������ƮƮ����Ӱ���Ṧ�Ѿ��ﵽ�����֮��[0;1;36m��[1mW[0m
[0;1;36m��[1mZ[1m��[1m��[1m��[1m��[0m���ᶨ��Ŀ�⣬͸¶��[0;1;32m��[1m��[1m��[1mj[1m��[1m��[1m��[1m��[0m֮�����Ǵ��[0;1;34m��[1m��[1m��[1m��[0m��[0;1;33m��[1m��[1m��[1m][1;35m��[1mp[0m
[0;1;35m��[1m��[1m��[1mk[0m����[0;1;35m��[1mp[1m��[1m��[1m��[1mk[0mϲ���˲ţ���[0;1;34m��[1m��[1m��[1m��[0m�����̵���ѧ��Ҳϣ��ϯ������
����սʤ[0;1;35m��[1mp[1m��[1m��[1m��[1mk[0m��


LONG);
	setup();
	replace_program(ROOM);
}

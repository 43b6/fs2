inherit ROOM;
void create() {
	set( "short", "С��Ů��" );
	set( "owner", "smalloo" );
	set( "object", ([
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
	]) );
	set( "build", 10587 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room332",
	]) );
	set( "long", @LONG

    ��˵[0;1;35m��[1mp[1m��[1m��[1m��[1mk[0m���[0;1;34m��[1m��[1m��[1m��[0m����[0;1;5;36m��[1;5m��[1;5m��[1;5mr[1;5m��[1;5m~[0m�͹�[0;1;35m��[1mp[1m��[1m��[1m��[1mk[0m���У���[0;1;34m��[1m��[1m��[1m��[0m��
λ�������[0;1;34m��[1m��[1m��[1m��[1m��[1m��[0m����[0;1;35m��[1mp[1m��[1m��[1m��[1mk[0m������[0;1;36m��[1m��[1m��[1mr[0m�����ںϲ�������Ϊ����
[0;1;33m��[1m��[1m��[1m][1;35m��[1mp[1m��[1m��[1m��[1mk[0m�����ԣ���Ҫ����[0;1;5;36m��[1;5m��[1;5m��[1;5mr[1;5m��[1;5m~[0m������[0;1;34m��[1m��[1m��[1m��[1m��[1m��[0m������[0;1;34m��[1m��[1m��[1m��[0m��Ҳ
Ҫ�뵽����һ��[0;1;5;36m��[1;5m��[1;5m��[1;5mr[1;5m��[1;5m~[0m�����ˣ�[0;1;33m��[1m��[1m��[1m][1;35m��[1mp[1m��[1m��[1m��[1mk[0m�� 


LONG);
	setup();
	replace_program(ROOM);
}

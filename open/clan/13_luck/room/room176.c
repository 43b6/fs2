inherit ROOM;
void create() {
	set( "short", "�ű�" );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"amount3"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
	]) );
	set( "build", 10212 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room179",
	]) );
	set( "long", @LONG

    �����Ǵ�˵�е�ħ��֮��[0;1;31m��[1mI[1m��[1m��[1m��[1m][1m��[1m��[0m�����ڵعű�����������
��Ļ��أ�Ҳ����������Ĳ��������Ÿ��ؿ���[0;1;36m��[1mC[1m��[1m][1m��[1mN[0m��[0;1;37m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m��[0m�������е�ٮٮ�ߣ�Ҳ���ܽ��Ҵ����Щ�ˣ�����[0;1;31m��[1mI[1m��[1m��[1m��[1m][1m��[1m��[0mȴ
�����ǲ�֪��̬��������[0;1;35m��[1m��[1m��[1m��[1m��[1mT[1m��[1mx[0m��������޵��֣�Ҫ��ս��Ҫ
�м�С��С�׵�����׼����������Ѿ�׼�����ˣ��Ǿ��ƿ�����
��ȥ�ɡ�


LONG);
	setup();
	replace_program(ROOM);
}

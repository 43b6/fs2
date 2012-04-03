inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��$HIY$��ҩ��$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file9"    : "/open/mogi/castle/obj/sspill",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount1"  : 11,
		"amount2"  : 1,
		"amount3"  : 109,
		"amount7"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/mogi/dragon/obj/sunblade",
		"amount9"  : 10,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/ping/obj/neck0",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file5"    : "/open/gblade/obj/dragon_book",
		"file6"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "light_up", 1 );
	set( "build", 11246 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room127.c",
	]) );
	set( "long", @LONG
   ������[0;1;36m��[1m][1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mY[0m�Ĳ�ҩ�����еĲ�ҩ�����뻮һ�������ڲ�ҩ����
ÿ����ҩ��ɢ�������ǵ���ζ,��������������������ζ,�㿴��������
�ղص�ħ�����.������������.���еĲ�ҩ������.����սʱ,��
������һ��ǿ���Ļظ���.....


LONG);
	setup();
	replace_program(ROOM);
}

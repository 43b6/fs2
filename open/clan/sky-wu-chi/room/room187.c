inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��$HIY$������$HIB$II$NOR$" );
	set( "owner", "lts" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room109",
		"west"      : "/open/clan/sky-wu-chi/room/room169.c",
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/dancer/obj/linrboots",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/capital/guard/gring",
		"amount9"  : 1,
		"file2"    : "/daemon/class/blademan/obj/ublade",
		"file7"    : "/open/killer/obj/k_ring",
		"file3"    : "/open/killer/obj/k_ring",
		"file4"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "build", 10515 );
	set( "long", @LONG
   ������[0;1;36m��[1m][1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mY[0m�ķ�����,���з��߶����뻮һ�������ڷ�������
ÿ�����߶����������ǵ�[0;1;33m��[1m��[1m��[1m~[0m,������������[0;1m��[1m{[1m��[1m{[1m��[1mo[1m��[1mG[0m,�㿴��������
�ղص����÷���..������������......���еķ��������ᵶ��սʱ,��
������һ��ǿ���ķ���.....
vv
LONG);
	setup();
	replace_program(ROOM);
}

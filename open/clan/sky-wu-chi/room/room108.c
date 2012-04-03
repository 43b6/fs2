inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��$HIY$������$HIB$III$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"amount8"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
	]) );
	set( "build", 10210 );
	set( "exits", ([
		"love"      : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/room169.c",
		"east"      : "/open/clan/sky-wu-chi/room/room109.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����һ�߽����������ʱ��...��һ�����΢�紵��...
����ĵ׸е�һ������...�����ڷ·������ڴ󺣰�ĸо�...
���������뿪��ط���ʱ���㷢����ͻȻȫ�����������...
����ʱ�Ż�Ȼ����lts��С�Ӿ�ȻΪ�˷�ֹeq��͵
��Ȼ���ⷿ��������ҩ...���������Ǻݶ�...


LONG);
	setup();
	replace_program(ROOM);
}

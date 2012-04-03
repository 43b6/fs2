inherit ROOM;
void create() {
	set( "short", "����С��" );
	set( "owner", "dancer" );
	set( "light_up", 1 );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 348,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file9"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/doctor/pill/human_pill",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10020 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room118.c",
		"west"      : "/open/clan/13_luck/room/room367",
		"south"     : "/open/clan/13_luck/room/room194.c",
		"up"        : "/open/clan/13_luck/room/room238.c",
		"north"     : "/open/clan/13_luck/room/room195.c",
	]) );
	set( "long", @LONG
����һ�����������ĵط�,���ܵĿ��������Ż���,���ִ������������,
����Զ�������׵ĳ���,��һ��ϡ���˻�֪���������ɾ�,û��ս��ֻ��
��ƽ,Ҳ��Ϊ���������������һ�������ܹ������������ĵĺõط�,
��������㹻��Ե�ֵ���������ɾ�,ϣ�����Լ����Ա��ִ��ɾ���������ƽ.
LONG);
	setup();
	replace_program(ROOM);
}

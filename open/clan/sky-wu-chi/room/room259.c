inherit ROOM;
void create() {
	set( "short", "����С��" );
	set( "object", ([
		"amount3"  : 1,
		"amount9"  : 20,
		"file5"    : "/open/gblade/obj/sa-head",
		"amount7"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/daemon/class/fighter/figring",
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file9"    : "/open/doctor/pill/human_pill",
		"file8"    : "/daemon/class/fighter/figring",
		"amount6"  : 19,
		"amount5"  : 1,
	]) );
	set( "owner", "flight" );
	set( "build", 10184 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room116.c",
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

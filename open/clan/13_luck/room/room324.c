inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount4"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"amount10" : 1,
		"amount6"  : 1,
		"file8"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/obj/gift/lingzhi",
		"file7"    : "/open/mogi/castle/obj/leave",
		"file9"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"amount3"  : 44,
		"amount9"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount8"  : 1,
		"file4"    : "/obj/gift/bingtang",
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"file2"    : "/obj/gift/xiandan",
	]) );
	set( "owner", "fighter" );
	set( "build", 10395 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room276",
	]) );
	set( "long", @LONG

    һ����ɭ�ĸо�Ϯ����̤��˶�֮�У�����е�����Ĳ�����һ
�����������ػ��������ڶ�����ʱҲ��������ŭ������������ħ���
��[35m�ص�����[0m�е�[0;1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[0m(Goldendragon)����[0;1;31m��[1m��[1m��[1m��[1m��[1ms[1m��[1mi[1;36m��[1mi[1m��[1m��[1;33m��[1m��[1m��[1m��[1;31m��[1mj[0m��
���󣬱�һֱ�������˴����޷���Σ�����ˡ�


LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "[1;33m���ÿռ�[0m" );
	set( "object", ([
		"amount7"  : 1,
		"file8"    : "/open/magic-manor/obj/fon-sky-sword",
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount8"  : 1,
		"file1"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file6"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount10" : 1,
	]) );
	set( "owner", "del" );
	set( "build", 10059 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room254",
	]) );
	set( "long", @LONG
һ��Ũ���������ݵ�ζ��Ϯ���㣬���ܵĿռ��ù���
���������ƺ���ĳ����ֵ�����Ť���ˣ�ԭ����������ǧ��
�������÷�������������Ŀռ䣬�����к����кü��Է���
��ɫ��â���۾����ڶ����㿴�����㲻�Ծ�����ת����Ⱦ�
�ܡ�
LONG);
	setup();
	replace_program(ROOM);
}

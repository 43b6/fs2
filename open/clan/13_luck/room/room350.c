inherit ROOM;
void create() {
	set( "short", "а����" );
	set( "owner", "max" );
	set( "object", ([
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount3"  : 1,
		"file1"    : "/open/main/obj/shiblade",
		"amount2"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount7"  : 1,
		"amount4"  : 1,
		"file7"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount5"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "build", 10104 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room352",
	]) );
	set( "long", @LONG

    һ��������У�ֻ��ǽ�Ϲ���һ�� [0;1;35m��[1m��[1m��[1mM[0m(Shi-blade)�����Ͽ���һЩ
ϸϸСС���֣���ϸ��ȥԭ����ħ������ն��Ԫ������֮һ�����ۼ�����
֮����ʹ��[35m����ն��Ԫ��а��նԪ��[0m��ħ[0;1;36m��[1ms[1;33m��[1m��[1;36m��[1m��[0m����[0;1;31m��[1mI[0m��[0;1;34m��[1m��[1;36m��[1m��[0m�����ʹ���
�������֮�ڣ�ֻ������[0;1;35m��[1m��[1m��[1mM[0m���ڵ��ϣ��������䣬˲ʱ����\��������
����ʡ�

LONG);
	setup();
	replace_program(ROOM);
}

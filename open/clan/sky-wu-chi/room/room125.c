inherit ROOM;
void create() {
	set( "short", "��ƿ��������1" );
	set( "object", ([
		"file9"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file7"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file1"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount4"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount9"  : 1,
		"file10"   : "/open/magic-manor/obj/fire-color-ribbon",
		"file8"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file2"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount8"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10072 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room124.c",
		"east"      : "/open/clan/sky-wu-chi/room/room126",
	]) );
	set( "long", @LONG
��������������ڱȽ�ƽ����,��Ҳ�Ѿ��Ƿǳ������һЩ����
�� ����������(crazy dragon)����(icefan)�����(ten pen)
�з�����(god sword)���ָ��(figring)������(dragon sword)
ѩӰ(iceblade)������а(snake sword)������(sun-moon blade)
��ѩ��˿��(cold needle)

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIY$�㽶�ܿ�$HIB$�аж�$HIW$����$NOR$" );
	set( "owner", "blur" );
	set( "object", ([
		"amount4"  : 1,
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount1"  : 1,
		"file7"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/main/obj/unarmed-b",
	]) );
	set( "build", 10296 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room34.c",
		"east"      : "/open/clan/hell/room/room96",
		"west"      : "/open/clan/hell/room/room50",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������㽶�ܿ����в�����...
��λ��������������ϵ�...
Ҳ��֪�����ϵػ��Ǽ��ϵ�....
ֻ�����Ŷ������������ı�Ϳ�...
����һ��Ҫ���������㳦������..
���� �� �� �� !!
��ʱ�ϴ󰢷ɽ���Ʋ��...
������ͬ�������ϵر�͵��...
ֻ��������ɫ���.....�����Ͷ��Ŷ���...��� 
�찢!! ������!!! 
���ɺǺ�����...����������..�ͰѾ�����������..���˳�ȥ..
LONG);
	setup();
	replace_program(ROOM);
}

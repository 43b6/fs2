inherit ROOM;
void create() {
	set( "short", "ħɭ��" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"amount3"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
	]) );
	set( "build", 10473 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room179",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    һ������߷�����ǰ��Ƭһ���޼ʵ�[0;1;32m��[1m��[1m��[1mL[0m�������ϸ�۲�Ļ���
����[0;1;32m��[1m��[1m��[1mL[0m����������û������[0;1;34m��[1mJ[1m��[1m��[0m����������Ҫ����[0;1;34m��[1mJ[1m��[1m��[0m��ͬʱ��
ͻȻ��[0;1;34m��[1mJ[1m��[1m��[0m������һȺ��Ŀ������[0;1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m����������ƽ�����
ʱ���Ѿ���ڴ������أ�����һ�ж�̫����....[0;1;31m��[1mA[1m��[1m��[1m��[1m��[1m��[1me[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[0m
[0;1;31m��[1m��[1m��[1m��[1m��[1m][1m��[1m��[1m��[1m��[1m��[1mD[1m��[1mF[0m��

LONG);
	setup();
	replace_program(ROOM);
}

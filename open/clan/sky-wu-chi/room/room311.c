inherit ROOM;
void create() {
	set( "short", "$HIC$���赸��װר��$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file10"   : "/open/gsword/obj/may_ring",
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount4"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount8"  : 1,
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount1"  : 1,
		"file7"    : "/open/poison/obj/pearl",
		"amount10" : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
	]) );
	set( "build", 10869 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room226",
	]) );
	set( "long", @LONG
    �򿪶��ߵ�С���ӣ�����Է������Ư�����·����к�ġ����ġ�
�Ƶġ��ϵġ����л������·������������ۻ����ң�����̾���ѡ���һ
�������ķ�װ���棬Ҳ�м�����ɫ���·����а�ɫ����װ����ɫ������
�����д�ͳ�й����ε����ۣ�Ҳ�п��߲��ȹ�ӣ����ж̶̵�����ȹ��
����С�����Ǹ�������СŮ����

LONG);
	setup();
	replace_program(ROOM);
}

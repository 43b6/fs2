inherit ROOM;
void create() {
	set( "short", "�߷�ͤ" );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/main/obj/firesword",
		"amount7"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount6"  : 1,
		"file3"    : "/open/ping/obj/fan-1",
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount2"  : 1,
	]) );
	set( "build", 10140 );
	set( "owner", "jsa" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room200.c",
		"north"     : "/open/clan/sky-wu-chi/room/room216",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
���һ�������İ˽�ͤ�ӣ������ߵķ����������
Ӱ�����ɫ�󣬰����������а����Թ����䣬���֮��
�Ե������ֲ������ף�ͤ����Բ��ʯ����Բ�Σ��Ը���
�ķ����Ը�ʯ������������ҹ��ˮ��������ڴ�С��Ƭ
�̣���������ȫ���Ŀ�������
LONG);
	setup();
	replace_program(ROOM);
}

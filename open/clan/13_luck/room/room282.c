inherit ROOM;
void create() {
	set( "short", "�����豸��" );
	set( "owner", "winder" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/firedancer/npc/eq/r_neck",
		"amount6"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file6"    : "/open/mogi/village/obj/mogi_ring",
		"file9"    : "/open/mogi/village/obj/mogi_ring",
		"amount7"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
	]) );
	set( "build", 15939 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room277",
	]) );
	set( "long", @LONG

    �����豸���ڻ����бر������ߣ�����Ԫ�����ϵ�������䣬����
������֮����ħɭ�֣��Ϳ��µ������ˣ����ܵ����ħ���̵꣬������
��ħ����Ӷ��д˹��ܣ������Ӵ������ϾͿ����ˣ�����Ҫװ��������
�ķ������Ϳ��Կ���������κεط��ˡ�

LONG);
	setup();
	replace_program(ROOM);
}

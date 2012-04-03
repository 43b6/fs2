inherit ROOM;
void create() {
	set( "short", "С�ڹ��װ����" );
	set( "owner", "turtle" );
	set( "object", ([
		"amount10" : 1,
		"file5"    : "/open/killer/obj/k_ring",
		"file2"    : "/open/fire-hole/obj/b-pill",
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_armbands",
		"file3"    : "/open/firedancer/npc/eq/r_pants",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount2"  : 2,
		"file6"    : "/obj/gift/hobowdan",
		"amount5"  : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 313,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10557 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room183",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��̧ͷ��ֻ�����Ա���������[�ڹ�װ��]��һ̤���ţ���Ŀ����
������һ���ŵ�����������ܣ��¼ܵȣ�ֻ�����б��ϣ����ϣ�����
�����У����䣬�����������У�ʽ�����࣬��������ͻȻ����
һ����Ĺ�����ׁ���S�쳣���������У�����һ��֮�ж���δ������
���޲���ޣ�Ц����Ц��������⧲�������ͻȻ�Ŵ�������ʹ����
����ս�������ŵñ���������ë���Ȼ���ڹ���Ӱ���γ����������
��

LONG);
	setup();
	replace_program(ROOM);
}

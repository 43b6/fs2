inherit ROOM;
void create() {
	set( "short", "С���Ĺ���" );
	set( "owner", "pity" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10074 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room55",
	]) );
	set( "long", @LONG
�ս�������һ���嶯����Q.Q
�����ǲ����ܴ���,Ҳ������Ǵ�˵�е�'������'
��������ô��ʱȴ�����Ա������ڻ�ս���С��@@~���뵽������������Ĺ�����
������һ�ѹ���,��ϸһ��,������.������Ҳûɨ,���~������ˮ��Ҳ�ɹ�����~���Ǳȼ�����������������
�����й�OOXX����~Ҳ������Ҳ��ɻ�ʯ��
LONG);
	setup();
	replace_program(ROOM);
}

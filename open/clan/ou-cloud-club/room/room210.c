inherit ROOM;
void create() {
	set( "short", "$HIC$�ϼ�Ȧ����$NOR$" );
	set( "object", ([
		"file6"    : "/open/firedancer/npc/eq/r_cloth",
		"amount1"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_neck",
		"amount8"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_leg",
		"file4"    : "/open/firedancer/npc/eq/r_armbands",
		"file2"    : "/open/firedancer/npc/eq/r_belt",
		"file5"    : "/open/firedancer/npc/eq/r_head",
		"amount2"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_finger",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_cape",
	]) );
	set( "owner", "del" );
	set( "build", 11802 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room203",
	]) );
	set( "long", @LONG
  
    ��ǰ��һ���羰���������������˿���Զ�����Ӳ����ĸ�
ɽ����Զ������һ���峺���׵��˹����������ţţ��������
���Ļ����²���ֻֻͷ��׳׳��ͻȻ������ֻСţ�ܵ���ű�
ĥ�䣬�ɰ���ģ�����˲�����������һЦ��
��
LONG);
	setup();
	replace_program(ROOM);
}

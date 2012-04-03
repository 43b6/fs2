inherit ROOM;
void create() {
	set( "short", "˼��" );
	set( "object", ([
		"file6"    : "/open/firedancer/npc/eq/r_neck",
		"file4"    : "/open/firedancer/npc/eq/r_cape",
		"amount5"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_shield",
		"amount1"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_belt",
		"file9"    : "/open/firedancer/npc/eq/r_head",
		"file2"    : "/open/firedancer/npc/eq/r_boots",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_finger",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_cloth",
	]) );
	set( "owner", "raymond" );
	set( "build", 11226 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room124",
		"south"     : "/open/clan/13_luck/room/room121",
	]) );
	set( "long", @LONG
                
[53m                 [56m˼��[0m
[0m
��ǰ���߽���Ϊ[56m˼��[0m��а�������������书����
�����ּ�����ȭ��ֻ��ĩ����[57m���ֶԾ��ȵľ���[0m
[57m��������˼ά����[31mа��[57m��[56m˼��[57mΪ���������Լ�[0m
[57m��˼�����Դﵽ[0m [35m��Ԫ��ɱ[0m [57m�ļ��徳��[0m��ֻ������
��ֱ�ӵ�[56m�໨ʯ[0m���ã��Ϳ����˽�[31mа��[0m����ֻ
Ҫ������һ��Ŀ�ľ���Ҫ---       [5;53mǿ[0m
LONG);
	setup();
	replace_program(ROOM);
}

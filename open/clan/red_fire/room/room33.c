inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$���ķ�$HIM$ ��$NOR$" );
	set( "owner", "fsmud" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount3"  : 1,
		"file7"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room69",
	]) );
	set( "light_up", 1 );
	set( "build", 11096 );
	set( "long", @LONG
    
1.���������������·��ն���������֮�ء�
2.��һ���𷨴��˴��̣��������֮�������Ϊ�����̡�
  ���ǽ���֮��������֪��
3.����һ�δ����Ѻ󣬺����̳�Ϊ�˼���������Ŀȫ�ǡ�
4.����֮��һλСŮ���ĵ����������������飬
  ����ȡ����......��õ��
5.��õ������ٶȴ��̣��������س���
  �����Է�������Ϊ�̹档
6.���̲��ã��ٴ��ܵ������ȫ�̱���......��
7.֮��õ���������˲���ʹ�����ٴ�����������
8.����Ϊ�˼��ɾ�������������֮������Դ......�� 


LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$װ����$HIM$ ��$NOR$" );
	set( "owner", "fsmud" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room110.c",
		"west"      : "/open/clan/red_fire/room/room33",
	]) );
	set( "object", ([
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/killer/obj/s_pill",
		"amount1"  : 139,
		"amount9"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"file1"    : "/open/killer/obj/black",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 1,
		"amount5"  : 18627,
		"amount3"  : 20000,
		"file3"    : "/open/killer/obj/bellstar",
		"amount6"  : 1,
		"file6"    : "/open/gsword/obj/may_ring",
		"amount2"  : 200,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10032 );
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

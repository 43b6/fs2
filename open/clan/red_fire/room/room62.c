inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$ҩƷ�� $HIM$��$NOR$" );
	set( "owner", "fsmud" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room108",
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/w-pill",
		"amount5"  : 9,
		"file9"    : "/open/killer/headkill/obj/i_dag",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file7"    : "/open/fire-hole/obj/y-pill",
		"amount4"  : 1,
		"file2"    : "/open/killer/headkill/obj/w_dag",
		"amount1"  : 38,
		"amount7"  : 48,
		"amount2"  : 1,
		"amount3"  : 44,
		"file8"    : "/open/killer/headkill/obj/e_dag",
		"file5"    : "/open/fire-hole/obj/b-pill",
		"amount9"  : 1,
		"file10"   : "/open/fire-hole/obj/p-pill",
		"amount8"  : 1,
		"file4"    : "/open/killer/headkill/obj/f_dag",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 37,
		"amount6"  : 14,
	]) );
	set( "build", 10084 );
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

inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$������$HIM$ ��$NOR$" );
	set( "owner", "fsmud" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/gblade/obj/sa-head",
		"amount5"  : 1,
		"file10"   : "/obj/gift/hobowdan",
		"file3"    : "/obj/gift/hobowdan",
		"file4"    : "/obj/gift/hobowdan",
		"amount3"  : 1,
		"amount8"  : 2000,
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/marksman/obj/super_pill",
		"file6"    : "/open/killer/memory/static",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"file7"    : "/obj/gift/shenliwan",
		"file9"    : "/obj/gift/lingzhi",
		"file1"    : "/obj/gift/lingzhi",
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10062 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room62",
		"west"      : "/open/clan/red_fire/room/room28.c",
	]) );
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

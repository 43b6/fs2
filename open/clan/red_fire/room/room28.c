// Room : /open/clan/red_fire/room/room28.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$�� $HIR$���� $HIY$�о���$HIM$ ��$NOR$" );
	set( "owner", "fsmud" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room108",
		"west"      : "/open/clan/red_fire/room/room110.c",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/main/obj/bird_legging",
		"file3"    : "/open/gsword/obj1/bloodsword",
		"file10"   : "/open/gsword/npc2/sadsword",
		"file4"    : "/open/main/obj/firesword",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/gsword/obj1/karmband",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/main/obj/m_cloak",
		"file2"    : "/open/capital/guard/gring",
		"file7"    : "/open/gsword/obj1/khelmet",
		"file9"    : "/open/gsword/obj1/ring",
		"amount7"  : 1,
		"amount10" : 1,
		"file1"    : "/open/tendo/kunlun/obj/cloud-dragon-claw",
		"amount9"  : 1,
	]) );
	set( "build", 10040 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
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
	set( "cmkroom", 1 );
	setup();

	}

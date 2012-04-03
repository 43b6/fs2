inherit ROOM;
void create() {
	set( "short", "���Ĺ�" );
	set( "owner", "poll" );
	set( "object", ([
		"amount4"  : 1,
		"file8"    : "/open/killer/obj/dagger",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/killer/headkill/obj/w_dag",
		"file4"    : "/open/ping/obj/fu_weapon",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"amount10" : 84815,
		"file5"    : "/open/killer/headkill/obj/f_dag",
		"file10"   : "/open/killer/obj/bellstar",
		"amount8"  : 1,
		"file3"    : "/open/killer/headkill/obj/i_dag",
		"amount5"  : 1,
		"file9"    : "/open/killer/headkill/obj/f_dag",
		"amount9"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/killer/headkill/obj/w_dag",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room105.c",
		"south"     : "/open/clan/13_luck/room/room251",
		"north"     : "/open/clan/13_luck/room/room250.c",
	]) );
	set( "build", 10102 );
	set( "light_up", 1 );
	set( "long", @LONG

    ���Ĺ���ʮ���������һ���˼��ɾ������ﳤ���˸�ʽ��������
����ݼ��������ޣ������и��洦���ŵ�һ�ɵ����ķ�����ζ������
�����Ѳ����Դ�����ǰһ����̬���� ����ħҽ ֮�Ƶ�С��ס����
��֮��һ�оͶ�����!!��ʽ�������滨��ݱ�ɶ������ݣ���������
��ץȥ���Ų����˵���ʵ�飬�����еķ�����ζ���ѱ�Ũ���Ѫ��
ζ��ȡ����ͻȻ������һ�������Ĳҽ����ӹ��ﴫ������������Ǳ�
̬ħҽ�������ֲ���ʵ���ˣ��뵽�⣬�㲻�ɵ�����Ÿ��첽�뿪��
���������Լ���Ϊ��һ��ʵ�����........

LONG);
	setup();
	replace_program(ROOM);
}

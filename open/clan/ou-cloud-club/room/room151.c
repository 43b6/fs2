inherit ROOM;
void create() {
	set( "short", "Ŵ�׼�" );
	set( "owner", "ecs" );
	set( "light_up", 1 );
	set( "object", ([
		"amount4"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/killer/obj/s_pill",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/f_dag",
		"file8"    : "/open/killer/headkill/obj/f_dag",
		"file6"    : "/open/killer/headkill/obj/f_dag",
		"amount10" : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1263,
		"file4"    : "/open/killer/headkill/obj/f_dag",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 11193 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room178",
		"west"      : "/open/clan/ou-cloud-club/room/room152.c",
	]) );
	set( "long", @LONG
�Űͱ������䲼�˺�Ħ���ȷ��� ���ں�ɫ�������� ����Ѿ���ǧ�߰ٶ���
���ڳ���ǰ       ���ӱ��ĵ�����   ��ȴ���Ծ������͊������������
��˾ ��� ��ս ���� ��˭�Ĵ�ǰ      ϲ�����˳��Њ�ֻ�����ҵ��ǻ���
��������Ů�����    ����Ů��֮����Ը      ˼����׸���˹�Ӱ������
 
LONG);
	setup();
	replace_program(ROOM);
}

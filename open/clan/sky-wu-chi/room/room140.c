inherit ROOM;
void create() {
	set( "short", "$HIY$����ɽׯ$NOR$--$GRN$������С��$NOR$ " );
	set( "owner", "lonsan" );
	set( "object", ([
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file7"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"file4"    : "/open/ping/obj/cloud_fan",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/ping/obj/poison_pill",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount2"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 81,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 11066 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room141.c",
		"out"       : "/open/clan/sky-wu-chi/room/room55",
	]) );
	set( "long", @LONG
��$HIG$������$NOR$ת��С·�ϣ����ܵĻ������������������ҵ���������Ҳ���ڱ�
�ˣ���಻֪�����������ȸ����������������Ĵ����Ϸ��������ţ�����·�ϣ�
����Ҳƽ����࣬�����������֮�����ڲ���Ũ���Ĵ����£�������಻֪���Ļ�
�ݣ�������ɫ��������ޣ�����һЩ��ֵĲ�ҩ��ɢ�������ص���ζ������������
�ָ������ĸо�����·�����죬�߿���һЩ�ƺ���������ԼԼ���ĵ����ʵĶ���
��������������һ����Ժ��

LONG);
	setup();
	replace_program(ROOM);
}

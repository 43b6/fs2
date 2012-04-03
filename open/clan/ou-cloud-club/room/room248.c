inherit ROOM;
void create() {
	set( "short", "$CYN$�� $RED$Ƽ $GRN$��$NOR$" );
	set( "object", ([
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount3"  : 1,
		"amount10" : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
	]) );
	set( "owner", "speed" );
	set( "build", 10232 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room257",
		"east"      : "/open/clan/ou-cloud-club/room/room246",
	]) );
	set( "long", @LONG
������speed �ļ�, ÿ�������Ƽʱ, ���ͻ�
һ���˵�������������˼, ��ڵ�ʱ���Ĵ������
����ֻ������һ���Ƽ��ص��������. ǽ���Ͽ�
�ŵ����͸���Ƽ��ʫ, ����д�� :

              ��  �� ��  [32mƼ[0m  [32m��[0m    
              ��  [31m��[0m [36m��[0m  ˮ  ��
              ��  һ ��  ��  ��
              ��  �� ʶ  ��  ��
              ��  �� ��  ��  ��
              Ϊ  �� ��  ��  ��
              [35m��[0m  �� ��  ��  ݺ                         



LONG);
	setup();
	replace_program(ROOM);
}

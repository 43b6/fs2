inherit ROOM;
void create() {
	set( "short", "��®" );
	set( "owner", "raymond" );
	set( "object", ([
		"amount4"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount6"  : 1,
		"file8"    : "/open/prayer/obj/kylin-belt",
		"amount5"  : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/tendo/obj/chaosbelt",
		"amount8"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/killer/obj/k_ring",
		"file6"    : "/open/tendo/obj/luboot",
		"file2"    : "/open/gsword/obj/silver_sword",
	]) );
	set( "build", 10734 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room125",
	]) );
	set( "long", @LONG
                 
                 [57m��®[0m
                 
��[56m˼��[0m�߽���Ϊа����������[57m��®[0m������������
����[57m����ʯ[0mΪ�ڣ�[54m�������������Դ�������ת��[0m
[54m���統���Ծ���֪����ǽ������˿��治֪��ʱ��[0m
[54m����˹����ģ��������������Ϊ����ƫƫ����[0m
[54m����ǰ[0m��[50m�������а�������������õ����������ŵ�[0m
[50mа��վ����ʱ�������������������С����ս��ÿ[0m
[50m�ζ����Լ��������ȹ�����������ڴ˻�ζ��[0m
[33m�·𲻹�����....[0m
Ȼ��������а�������޵�[55m�뷿[0m��
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIW$��ӡ֮�� $MAG$��$NOR$��$HIR$��$HIC$��$HIY$��$NOR$" );
	set( "light_up", 1 );
	set( "build", 11043 );
	set( "object", ([
		"amount10" : 1,
		"file8"    : "/open/dancer/obj/yuaboots",
		"file7"    : "/open/dancer/obj/yuaboots",
		"file5"    : "/open/dancer/obj/yuaboots",
		"file4"    : "/open/dancer/obj/yuaboots",
		"file10"   : "/open/dancer/obj/yuaboots",
		"file1"    : "/open/dancer/obj/yuaboots",
		"file6"    : "/open/dancer/obj/yuaboots",
		"file9"    : "/open/dancer/obj/yuaboots",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuaboots",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room156",
		"up"        : "/open/clan/ou-cloud-club/room/room159",
	]) );
	set( "long", @LONG

    ��������,���ȵ�ʥ��������ǰ����һ��ǧ�߸ߵĻ���,ȴ�޷�ѹ����
�Ի��汳��Ѱ����Ӧ������,���㳬Խ�����޵�ʮ���ɹ���,һ������
������,ȴ�������˾���ľ���,ֻ��һͷ����������浱����������,��ȫ
�������Ե�����ʥ����һ����,ԭ����ÿ�����ų���һ�ε�ԡ����,
���ŵk����ʥ�������,�����������,������������֮��,��ʥ������ȫ��
���ϻ���,����һ��ҫ�ۻ��,�������,�����Ե�ʥ��ͬʱ��������,����,
���Ͻ���һ�����,һ˫���Ծ������׵�������������...

LONG);
	setup();
	replace_program(ROOM);
}

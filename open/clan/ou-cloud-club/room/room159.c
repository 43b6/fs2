inherit ROOM;
void create() {
	set( "short", "$HIW$��ӡ֮�� $WHT$ҹ$HIR$��$HIC$��$HIY$��$HIG$��$NOR$" );
	set( "build", 10047 );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount10" : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
	]) );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room158",
	]) );
	set( "long", @LONG

    �������ڲ�ͬ��ϸ˿�����ڿ����������ע��,��Ϊ��Щ��Ѱ����ϸ˿
���˷����������֮��,����������һ����ʥ������,ԭ����Щ���������
Դ�������ǧ�����,��˵�õ���[0;1m��[1m��[0m�ػ�����,����õ�����˼�������...

LONG);
	setup();
	replace_program(ROOM);
}

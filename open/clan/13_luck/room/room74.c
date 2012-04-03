inherit ROOM;
void create() {
	set( "short", "������֯�ܲ�" );
	set( "owner", "whale" );
	set( "object", ([
		"file3"    : "/open/scholar/obj/icefan",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"file10"   : "/open/ping/obj/ring-2",
		"amount9"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file9"    : "/open/wu/npc/obj/armband",
		"file5"    : "/open/ping/obj/chilin_legging",
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "build", 10056 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room71",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
������֯��ʮ����������Ϊ���ص�һ������, ���в���������������ϵ
������, ��Ȼ������ʮ�������һ��֧��, Ȼ���»�Ա��ǧ����, �鲼ŷ��,
�����������ڳ��˵ĳ�������,��������ļ�����������, ���й����
�Ļ���������, �������ɲ��ݴų�, �ı����Ȼ�Ķ���. Ȼ��, ��Щ����ͬ
����Ŀ��, ����Ҫ������������ۻ������. ���, ��������е���֮ʱ, 
������������Ͻ������, ������������, ʹ����ظ���Ϊ������ǰ��
տ����ò, ʵ����ɫ������...
LONG);
	setup();
	replace_program(ROOM);
}

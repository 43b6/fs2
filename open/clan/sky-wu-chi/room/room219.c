inherit ROOM;
void create() {
	set( "short", "��֮����" );
	set( "owner", "clodsnow" );
	set( "object", ([
		"file10"   : "/obj/gift/bingtang",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"file8"    : "/open/dancer/obj/yuaboots",
		"amount10" : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file9"    : "/open/killer/headkill/obj/bluekill",
		"file5"    : "/obj/gift/hobowdan",
	]) );
	set( "build", 10055 );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room220.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
���߽���һ���ڰ��ĳ��ȣ������ʱ�䣬�ռ䶼���ٴ��ڣ�
�޾�����հ�Χ���㣬����������·��Ƕ���Ķ�������ֻ
����ǰһ���������µ�ʬ���ϵõ�һ�����£�����Ѱ�Ҵ���
�о���ɱ�ֵ����Ӵ���ͻȻ��һ����Ӱ���㱳����֣�ɱ����
ǰ��Ϊ�е�ɱ����һ����������������ڣ�ɲ�Ǽ�������
ɱ����һ����������������ڣ�ɲ�Ǽ�������
LONG);
	setup();
	replace_program(ROOM);
}

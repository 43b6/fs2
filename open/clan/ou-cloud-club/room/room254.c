inherit ROOM;
void create() {
	set( "short", "[1;37m���ָ����[0m" );
	set( "owner", "really" );
	set( "object", ([
		"amount4"  : 11,
		"file7"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"amount2"  : 4,
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount7"  : 1,
		"amount3"  : 3,
		"file10"   : "/open/main/obj/et_sword",
		"amount5"  : 1,
		"file9"    : "/daemon/class/fighter/ywboots",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/daemon/class/fighter/ywhand",
		"file2"    : "/open/fire-hole/obj/y-pill",
		"file4"    : "/open/fire-hole/obj/r-pill",
		"amount9"  : 1,
		"amount10" : 1,
		"amount1"  : 4,
	]) );
	set( "light_up", 1 );
	set( "build", 10189 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room244.c",
		"down"      : "/open/clan/ou-cloud-club/room/room298",
	]) );
	set( "long", @LONG
������һƬ�տ��Ĳ�ԭ�������͵�һƬ���˿����Ŀ���
������ǰ����Զ����һ���߳߸ߵĴ����������м�������Χ
��һ��СС�������Աߣ����߽�һ�����������Ϸ���һ�ŷ�
��ֽ�����滭�����㿴�����üǺţ��������ߴ���һ������
�������ߵ�Ļ�Ͳ���ţ�[1;33m��ȫ�š��񵯡������š����װҩ
��˲���Źܡ�[0m���������Ժ���ͲҲ�������е�������
  
  [1;36m���ָ�����鳤[0m(Mortar leader)
[1;32m  ���ָ������Ա[0m(Mortar man1-2)[0m
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "������Ϣ��" );
	set( "object", ([
		"file6"    : "/open/wu/npc/obj/armband",
		"file5"    : "/daemon/class/fighter/ywleg",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/ywsu",
		"amount5"  : 1,
		"amount8"  : 1,
		"amount1"  : 12,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file8"    : "/daemon/class/fighter/ywhelme",
		"file3"    : "/daemon/class/fighter/ywhand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/daemon/class/fighter/ywgem",
		"amount2"  : 1,
	]) );
	set( "build", 10884 );
	set( "owner", "daffodils" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room102",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����һ�߽���䷿�䣬��о���ǰ��δ�еĸɾ�����䷿�����
����ʮ������һ�����µ�������Ϣ�ҡ��㿴��һ���������๤���Ŀ�
�����ˣ���ѯ��һ����һ�Խ��������������������������֣�������
��һ���������˵Ŀ��е�֪���������ַ����Ҳ������Ĵ��ӹ���
����һ����Щ�ʹ���������䷿��������������е�Ҫ�ͷ�����δ��
���ѹ������ã��е���Ҫָ������ȥ������µ����ˡ��������ʮ��
�ı�����

LONG);
	setup();
	replace_program(ROOM);
}

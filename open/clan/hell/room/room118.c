inherit ROOM;
void create() {
	set( "short", "�£��������С��" );
	set( "owner", "bebe" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/spsword-4",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
		"file4"    : "/open/scholar/obj/icefan",
		"amount4"  : 1,
		"amount1"  : 1,
	]) );
	set( "item_desc", ([
		"c_room_item BEBE�Ŀ���" : @ITEM
��������


������������[31m�����������ǣ£ţ£����ػ�԰������[0m

������������������
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10032 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room117",
		"west"      : "/open/clan/hell/room/room5.c",
	]) );
	set( "long", @LONG

���������������Ĵ��ţ��͸о���һ�ɲ�֪������������
����˵[31m������С���ӡ����ﲻ�������ĵط�ม����������[0m
[31m�Ҷ��顯[0m��������ϸ��һ����ԭ��������Ǵ�˵��[36m�£���[0m
������С�ݣ�
LONG);
	setup();
	replace_program(ROOM);
}

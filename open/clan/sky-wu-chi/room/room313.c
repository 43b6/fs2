inherit ROOM;
void create() {
	set( "short", "��Ȼ���귿" );
	set( "owner", "supalu" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
	]) );
	set( "item_desc", ([
		"ʳ�����" : @ITEM
��,��֪����������������ʹ,���ǵ��������Ķ�ħ,
�ܽ������õĳ����뻯,ʷ�ٷ��ܵĵ���.
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 7049 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room314",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
Զ�������Ѹ��ܵ��˵�֮����,���������������˼���,
�����ڵĸо���������뿪����,���ŵ�����,ŭ��,
����,���㲻����������,��.....���..ԭ�����������
�Ļ�,��������������,���Բ�����,û�뵽����Ҳ���������˰�!!!
LONG);
	setup();
	replace_program(ROOM);
}

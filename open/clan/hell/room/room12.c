inherit ROOM;
void create() {
	set( "short", "$RED$è���$NOR$" );
	set( "object", ([
		"file6"    : "/open/magic-manor/obj/water-ball",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/fire-ball",
		"amount6"  : 1,
		"file5"    : "/open/magic-manor/obj/wood-ball",
		"amount4"  : 1,
	]) );
	set( "item_desc", ([
		"corpse" : @ITEM
����$RED$����è$NOR$��ʬ�壬����ʲô������û�У�
�йɶ��������ɢ�����������գ�
���׼���ûϴ����........   �й���
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10566 );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room5.c",
		"down"      : "/open/clan/hell/room/room6.c",
		"west"      : "/open/clan/hell/room/room16",
		"east"      : "/open/clan/hell/room/room14.c",
	]) );
	set( "long", @LONG
    �������������������ڡ�è�硱��������ǰ������һ���ߴ��
��ɫ��¥�������������޿�������ж�ǰ������Ϊһ�����Źؾ��޷���
�������ˡ�������ǰ�ǻ�����࣬����һ���ͳ���������ʱ�˿̡����
���ڲ�֪���б����˽�ȥ��

  ����è��ʬ��(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}

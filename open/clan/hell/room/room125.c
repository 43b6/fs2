inherit ROOM;
void create() {
	set( "short", "С����������" );
	set( "object", ([
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file3"    : "/open/killer/obj/dagger",
		"amount4"  : 1,
		"file6"    : "/open/killer/headkill/obj/w_dag",
		"amount3"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file4"    : "/open/killer/headkill/obj/i_dag",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/killer/headkill/obj/i_dag",
	]) );
	set( "owner", "acelan" );
	set( "build", 10482 );
	set( "item_desc", ([
		"Ư������" : @ITEM
��ͻȻת��ͷ������һ��
ITEM,
		"��Ŀ����" : @ITEM
����ȭ��
��������
���־�
��������
��������
just kidding ^_^
ITEM,
		"��������" : @ITEM
��ο��ҵ���ҳ�� ^_^
http://www.ice.cycu.edu.tw/~s8827142/
ITEM,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room126.c",
		"west"      : "/open/clan/hell/room/room124",
	]) );
	set( "long", @LONG
С�������������ܱ�һ��͸���Ĵ󵰿Ǹ���Χ����������һ����
͸��������ǽ�ϻ�����С������(��������)������С������ϲ����
(��Ŀ����)�����⻹�и�(Ư������)�ڷ������ε���������С������
Ů����ร����������׵ģ����ҪС�ı��ǵ����� :P
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIR$����$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount2"  : 1,
		"file2"    : "/open/main/obj/et_sword",
	]) );
	set( "item_desc", ([
		"���ֵ���" : @ITEM
���Ǵ�˵�Шɺ���
���Ǵ�˵�Шɺ���
[31m���Ǵ�˵�Шɺ���[0m
ITEM,
	]) );
	set( "build", 11515 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room56",
	]) );
	set( "long", @LONG
�ߵ���������������о����˿���������ÿ
��ǰһ�����ͷ·𽫱�˺��һ�㣬Խ���˹����⣬Խ
��ʹ�࣬�ⲻ��һ�����ܴ��ĵط�����

             [0;1;35m��[1mr[1;31m��[1mC[1m��[1m][1;35m��[1mr[0m [0;1m��[1m��[1m��[1m��[0m

               [0;1m��[1mi[1;36m��[1mm[1m��[1m��[1m��[1m��[1;37m��[1mj[0m


LONG);
	setup();
	replace_program(ROOM);
}

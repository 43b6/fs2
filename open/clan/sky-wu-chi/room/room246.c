inherit ROOM;
void create() {
	set( "short", "$HIR$�ؽ���$NOR$" );
	set( "owner", "mudu" );
	set( "item_desc", ([
		"window" : @ITEM
 ��ͨ���ܵ�֮������ǰ������������񣬵��������Ľ��ۣ���Լ��;�о���һ�ɸ�Ӳ֮����������������(statue)֮�⣬����һ�������ʯ�ţ���;�����������ŷ���.�ƺ��ڷ�ӡ�ż�����Ķ������ű���һʯ��(stone)��;ʯ���Ϻ��ƿ��ж�������
ITEM,
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file7"    : "/open/magic-manor/obj/golden-ball",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj4/rigid_shells",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/capital/obj/4-1",
		"file4"    : "/open/magic-manor/obj/soil-ball",
		"amount4"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"file1"    : "/open/gsword/obj1/bloodsword",
		"amount9"  : 1,
		"file10"   : "/open/sky/obj5/shue_jade",
		"amount1"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/magic-manor/obj/fon-sky-sword",
		"file5"    : "/open/sky/obj1/wind_emblem",
		"amount8"  : 1,
		"file9"    : "/open/sky/obj10/cypress_yin",
	]) );
	set( "build", 10054 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room221",
		"east"      : "/open/clan/sky-wu-chi/room/room265",
	]) );
	set( "long", @LONG
̤��˴�������ӳ������Ĺ�â�����˸е�����������һ�Ѱѱ�������
�������ڸ��У�����һȦ���ܵĽ���Ϊ����֮���������������̾����
֮�ղأ�ͻȻ�俴��һ�ѷ���������ɫ��â�ĳ����������룬�·���
֮���������£�Ī������Ǵ�˵�е��齣====�档������(Sad Sword)��
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIW$����ҽԺ$HIR$������$NOR$" );
	set( "object", ([
		"amount4"  : 127,
		"file7"    : "/open/gblade/obj/sa-head",
		"file3"    : "/open/doctor/pill/human_pill",
		"amount1"  : 415,
		"amount8"  : 125,
		"file5"    : "/open/scholar/obj/icefan",
		"amount2"  : 1003,
		"amount5"  : 1,
		"file1"    : "/open/doctor/pill/gnd_pill",
		"amount10" : 151,
		"amount6"  : 1,
		"file8"    : "/open/doctor/item/ground_item",
		"file10"   : "/open/doctor/item/sky_item",
		"file2"    : "/open/doctor/pill/sky_pill",
		"amount3"  : 273,
		"file6"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/doctor/item/human_item",
		"file9"    : "/open/magic-manor/fire/obj/fire-fan",
	]) );
	set( "item_desc", ([
		"registration" : @ITEM

         �Һŷ�ʽ : 
                       ��� : tell hamster heal����gin
                       �ڿ� : tell hamster heal����kee
                      �����: tell hamster heal����sen
                      ������: tell hamster deffire

         PS:���Ŷӿ���, ÿ�ο�����ʱ����

ITEM,
	]) );
	set( "build", 10120 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room80",
		"north"     : "/open/clan/hell/room/hall",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
���������˺���, ��ħ��ֳ������ܵظ���, ���Ǻ�����һ����Ҫҽ����,
��Ϊ������˼������, �����ڵ��ϵ���, ������ҹ֮������, �ڹ��ආ�����
������������, �����ϲ���, ���ˮ����־Ҫ������������ҽ������ҽ��, ���ر�
��Եظ��ڵ����¹����ȵ�ϰ��, �о�����һ�׶��صķ���ҽ��, ������¹�����,
��������Υ�͵Ļ�, �ǵ���ˮ��ҽ���Һſ����~~~

    �Һŵ�(Registration)
LONG);
	setup();
	replace_program(ROOM);
}

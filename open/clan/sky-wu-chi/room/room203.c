inherit ROOM;
void create() {
	set( "short", "���߷���" );
	set( "owner", "puffy" );
	set( "object", ([
		"file10"   : "/open/magic-manor/obj/water-ball",
		"amount2"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount6"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10830 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room162",
	]) );
	set( "long", @LONG
������С���ڷ��ߵĵط�
������������һЩ��ֵĵط�
��....
�㿴��ǽ��...
�����Ȼ����diamond eq...
��...
�㿪ʼ����С�������ܴ�ĵ�
����������˺ܶ�Ǯȥ���˼���İ�
����
����һЩ force eq...
�����Ҫ�Ļ�
������һ��С��
��Ӧ�û����..
�����û���ٷ����Ļ�
LONG);
	setup();
	replace_program(ROOM);
}

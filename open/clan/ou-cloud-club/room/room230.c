inherit ROOM;
void create() {
	set( "short", "$HIW$��$HIG$��$HIR$а$HIG$��$HIB$��$NOR$" );
	set( "owner", "rings" );
	set( "item_desc", ([
		"words" : @ITEM
    
    [1;37m��    [1;31mа    [1;34m��    [1;33,[1;33m��    [1;32m��[0m
      
ITEM,
	]) );
	set( "object", ([
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount5"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"file8"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
	]) );
	set( "build", 10049 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room232",
		"enter"     : "/open/clan/ou-cloud-club/room/room220.c",
		"up"        : "/open/clan/ou-cloud-club/room/room229",
	]) );
	set( "long", @LONG
����С������ǰ����������һ��ռ������ʯ�ң�����
�Ǵӽ�Ϊ�ϲ��ʯ��͸���������ͷ��ȥ����һ�����յ�ƽ
̨������ʮ���������ֵ���������Χ��ǽ�����ᣬ������
������������Ƶ�֩�룬ƽ̨����һ��Сʯ����������ż�
������(words) ��ʯ����Χ�м��ѱ����������Ž�⡣
  
LONG);
	setup();
	replace_program(ROOM);
}

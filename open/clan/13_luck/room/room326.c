inherit ROOM;
void create() {
	set( "short", "·����" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"amount1"  : 27,
		"file8"    : "/daemon/class/blademan/obj/ublade",
		"amount2"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/gsword/obj/ring-1",
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/ping/obj/poison_pill",
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "woan" );
	set( "build", 11454 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room123.c",
		"west"      : "/open/clan/13_luck/room/room159",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
    
    ������..�㿴��һ����ʾ��..����д��
      
       ����woan [0;1;31m��[1mt[1m��[1m��[1m��[1m|[0m��������
      
       �뿴woan [0;1;33m��[1mm[1m��[1m\[1m��[1m��[0m�������� 
��ʱ����.woan��Ϊһ��[0;1;5;36m��[1;5mT[1;5m��[1;5mM[1;5m��[1;5my[1;5;32m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mH[0m
��[0;1;33m��[1mm[1m��[1m\[1m��[1m��[0m����Ϊ��..��..һ�����;��Ὺ
[0;1;31m��[1mt[1m��[1m��[1m��[1m|[0m...��Ҳ����.��������.��.һ����
[0;1;34m��[1m��[1m��[1m��[0m�ĸ������������˼��..����������
�ŵ���.ȴһһ�ı���ʵ��.����ֻ����һ
����.���ǹ�ȥ�������ĸ���.


LONG);
	setup();
	replace_program(ROOM);
}

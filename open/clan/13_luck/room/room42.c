inherit ROOM;
void create() {
	set( "short", "��ջ����" );
	set( "object", ([
		"file7"    : "/daemon/class/blademan/obj/skykey",
		"amount8"  : 1,
		"amount2"  : 1,
		"file3"    : "/daemon/class/blademan/obj/wstone",
		"file5"    : "/daemon/class/blademan/obj/wastone",
		"amount1"  : 1,
		"amount5"  : 1,
		"file1"    : "/daemon/class/blademan/obj/gstone",
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/daemon/class/blademan/obj/hstone",
		"file8"    : "/obj/gift/hobowdan",
		"amount7"  : 1,
		"amount3"  : 1,
		"file2"    : "/daemon/class/blademan/obj/fstone",
		"file4"    : "/daemon/class/blademan/obj/estone",
	]) );
	set( "build", 10809 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room40.c",
		"����¥"    : "/open/clan/13_luck/room/room114",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��ӭ������ʮ������Ŀ�ջ������������񖟵ĵ�С��CHECK IN
��������������Ϳ��Իص������᷿��Ϣ�ˣ�������Ҫ�κη�����
ֱ��CTƵ������ר��Ϊ�����񡫡�
                                               лл���� ����

             
               ������ǰ�ߣ����ǡ�����¥����
             
LONG);
	setup();
	replace_program(ROOM);
}

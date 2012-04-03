inherit ROOM;
void create() {
	set( "short", "$YEL$��С���СС�鷿��$NOR$ " );
	set( "owner", "peiyi" );
	set( "object", ([
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount6"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/obj/gift/hobowdan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/unknowdan",
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file1"    : "/obj/gift/xisuidan",
		"file7"    : "/open/magic-manor/water/obj/water-ribbon",
	]) );
	set( "build", 10374 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room74",
	]) );
	set( "long", @LONG
    ����鷿��С����Ĳ�������, С����һ������Ѫ����������, ��
������ɲ���һ���˿��Խ�����, ����С���������, �뿴һ��������
����ڴ�����һ������(paper)�����Ϲ���һ������, ���ܶ������, ��
�����и�ʽ�������鼮����, �����ǹ������跽����鼮����������
Ŀ, �ɼ���С�����ù��ĳ̶ȡ�
LONG);
	setup();
	replace_program(ROOM);
}

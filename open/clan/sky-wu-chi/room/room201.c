inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/obj/gift/shenliwan",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/magic-manor/obj/wood-ball",
		"amount3"  : 1,
		"file5"    : "/obj/gift/hobowdan",
		"file10"   : "/open/mogi/dragon/obj/sunblade",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file7"    : "/obj/gift/xisuidan",
		"amount2"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/magic-manor/obj/fon-sky-sword",
		"file1"    : "/open/badman/obj/mask",
	]) );
	set( "build", 10260 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room205",
		"down"      : "/open/clan/sky-wu-chi/room/room162.c",
	]) );
	set( "long", @LONG
������С������������
�����ǰһ����ɫ��â����
���ڵ��ϵ�
������
����ɽׯ��ɵ��������
�������������
С��ƾ���Ź�������
�͸����ú��L���˸��ֵ�������������
����fs����Ӧ��û�����ò���������eq�˰�
���ǿ�һ��...��������ʲô����....
�ѵ���...
LONG);
	setup();
	replace_program(ROOM);
}

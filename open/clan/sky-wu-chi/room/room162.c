inherit ROOM;
void create() {
	set( "short", "Ļ��Ǯׯ�ļ�" );
	set( "owner", "puffy" );
	set( "object", ([
		"file4"    : "/open/killer/obj/bellstar",
		"amount7"  : 6,
		"file9"    : "/open/main/obj/et_sword",
		"amount2"  : 1360,
		"file8"    : "/open/magic-manor/obj/soil-ball",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount4"  : 267,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file1"    : "/open/magic-manor/obj/golden-ball",
		"file10"   : "/obj/gift/hobowdan",
		"file5"    : "/open/gsword/npc2/sadsword",
		"amount9"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"file7"    : "/open/killer/obj/black",
		"file2"    : "/open/marksman/obj/super_pill",
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11123 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room201.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room203.c",
		"west"      : "/open/clan/sky-wu-chi/room/room202.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/room204.c",
	]) );
	set( "long", @LONG
�߽�����ͻȻһ����������ǰ
�н��
�׹�
��ɫ�Ĺ�â
���ó�̫���۾�����
�ſ����
ԭ��...ǽ���ǽ�������
��������ʯ��ɵ�
�ذ�ȫ���ǰ���
ԭ���㵽��һ��������ļ���
�����Ǵ����smalltwo�ļ�..������95%��Ǯ�ǿ������ṩ��
����������豸�����Ŀ����
LONG);
	setup();
	replace_program(ROOM);
}

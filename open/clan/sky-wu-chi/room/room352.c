inherit ROOM;
void create() {
	set( "short", "˫�ع�" );
	set( "object", ([
		"amount5"  : 1,
		"file7"    : "/open/ping/obj/chilin_legging",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file10"   : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/ywgem",
		"file6"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"amount2"  : 1,
		"file2"    : "/open/killer/weapon/k_head3",
		"file5"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
	]) );
	set( "owner", "biwem" );
	set( "build", 10164 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room278.c",
	]) );
	set( "long", @LONG
���յ����ζ���� �����ǹ�����
������������� ���������
��ȭ���������ϰ� ����ɳ�� ˣ���ǹ 
Ӳ���ӹ��������� �������������ɼ
���ǵĶ����Ҵ�С�Ͷ��ĿȾ
ʲô��ǹ�������Ҷ�ˣ����ģ����
��ϲ���ı��� ˫�ع����д��� ��Ҫȥ������ɽѧ���ָ��䵱
��ʲô ��ʲô(��) ��������������
��ʲô ��ʲô(��) �����������Ŀ�
��ʲô ��ʲô(��) ����ǧ��ϵɳ�� �����߱�Ī��� ��ȥȥ����
�� һ������ǰһ����ȭ �ҹ�ȭ
��ë�ҵ�����Σ�� һ������ һ���Ҳ������ һ�źö��� һֱ�����
��ʲô ��ʲô(��) �Ҵ��ζ�����
��ʲô ��ʲô(��) ���ǲ��������
��ʲô ��ʲô(��) �Ա���һ���߿�
�ԿԹ��� ��ʹ��˫�ڹ�        �ԿԹ��� ��ʹ��˫�ڹ�
�ԿԹ��� ��ʹ��˫�ڹ�        �ԿԹ��� ��ʹ��˫�ڹ�
ϰ��֮���м� �����޵�      ��������Ṧ �����߱�
��˭����̫�� ����ˮ��      Ϊ�˹�ֱ���� һ������
LONG);
	setup();
	replace_program(ROOM);
}

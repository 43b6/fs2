inherit ROOM;
void create() {
	set( "short", "$HIG$��  $HIB$��  $HIY$��$NOR$" );
	set( "object", ([
		"file1"    : "/open/marksman/obj/dragon_bow",
		"amount1"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount3"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mogi/castle/obj/sholo-shield",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file6"    : "/open/scholar/obj/icefan",
		"file5"    : "/open/ping/obj/gold_hand",
	]) );
	set( "build", 10413 );
	set( "light_up", 1 );
	set( "owner", "vice" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room241",
	]) );
	set( "long", @LONG
�����Ц��  �������鶯
��������������  �����޾�����
                                                                                
��̵�Ц��  �ѻû�����
���޷��ٽӽ���  �����ѱ�����������
                                                                                
����  ����  Ҫ�ó�����ƭ
��������ٻؿ�  �������Ὣ����ȼ��
                                                                                
����  �ɻ�  �ٴ��ҹ������
Ц��˭��  ����׷Ѱ�����еĹ���
��������  ÿ��׷Ѱ�����е�����

LONG);
	setup();
	replace_program(ROOM);
}

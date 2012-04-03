inherit ROOM;
void create() {
	set( "short", "С�෿��ͥ԰" );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"amount9"  : 15,
		"amount1"  : 1,
		"file8"    : "/open/killer/headkill/obj/w_dag",
		"file5"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/gsword/obj/yuskirt",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"amount2"  : 1,
		"file3"    : "/open/killer/headkill/obj/i_dag",
		"amount8"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"file9"    : "/open/killer/obj/black",
	]) );
	set( "build", 10060 );
	set( "owner", "miffy" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room76",
		"west"      : "/open/clan/sky-wu-chi/room/room212",
	]) );
	set( "long", @LONG
������һ���ܴ��ӵ�ũ��ͥ԰���,�㿴��������ʱ����Щ�帾��
��������������,������ѹ�������ᷢ��ԭ������ס��һ���������
�����㲻֪��,ԭ����������ס��һ�����������,���Ƴ��õ�,��
Ϊ������������Ҫ���,������Ҳ���Ҳ���������Ӱ��,������ͥ԰
��ľ�ɫ�������˨�,��ɽ��ˮ��,���Ǹ����޵ĺû���,�㲻�Ծ���
Ҳ������������,Ҳϣ�����������ӵ�����...

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "��ƿ���д���2" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"file3"    : "/open/killer/weapon/k_torch",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
		"amount3"  : 1,
	]) );
	set( "owner", "ywartee" );
	set( "build", 10038 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room157.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room332.c",
		"east"      : "/open/clan/sky-wu-chi/room/room327",
	]) );
	set( "long", @LONG
����������Ҫ̸���ܵĵط�,�����ܿ�����������һ�����䳡
ԭ���ǿ�ƿ��ϲ���������,˳��˵�����ĵ�,����һЩ�߽׵�
���Ѷ������̸������,������,Ϊ�˱�������͵��,���Կ�ƿ��
�����һ�����,ʹ���˰˳ɹ�����������һ���������
�κ�����������ֻ����say ��������ȥ����..
Ҳ������Ϊ��̫�����ܵĹ�ϵ��...
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$GRN$�����$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/obj/gift/xiandan",
	]) );
	set( "owner", "del" );
	set( "build", 10010 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room147.c",
		"north"     : "/open/clan/ou-cloud-club/room/room254",
		"south"     : "/open/clan/ou-cloud-club/room/room33.c",
		"west"      : "/open/clan/ou-cloud-club/room/room118.c",
	]) );
	set( "long", @LONG
������һƬ�տ��Ĳ�ԭ�������͵�һƬ���˿����Ŀ���
������ǰ����һ�齹�ڵĵ�Ƥ��ԭ���Ǳ߼���һ�Ż��ڣ���
��д��[1;33m����������ʽһ�������Ȼ��ڡ�[0m���Ա߻�վ�˼���
���Բʾ������ڲ����İ����硣��Զ���м�����֪��ͨ��
�δ�������С������������е�ԾԾ������ȥ̽�յĸо���
  
  [1;37mһ�������Ȼ���[0m(Ternch mortar)
  [1;34m�Ȼ����ڰ�೤[0m(Mortar corporal)  
  [1;36m�Ȼ����ڰ�����[0m(Mortar man1 - 3)
  
LONG);
	setup();
	replace_program(ROOM);
}

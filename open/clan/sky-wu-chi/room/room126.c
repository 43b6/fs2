inherit ROOM;
void create() {
	set( "short", "��ƿ��������2" );
	set( "object", ([
		"file8"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount8"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10073 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room125.c",
		"east"      : "/open/clan/sky-wu-chi/room/room129",
	]) );
	set( "long", @LONG
���������Ҳû��ʲô��һ����,ֻ��һЩ�ȽϺõı���,ÿһ��
�ı����к��ܹ����˼�����ζ��,ֻҪ��Ա��������˽�,��ͻᷢ��
�����￴���ı���,˵�����еĶ�������û��������..�������֪��
������ӵ������Ƕ�ô�ĶԱ����жమ��...
�����ڿ��������￴���ı����� а��(shi-blade)����(ublade)
���������(fire needle)������(fire dragon sword)

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "С�ײ˵ĳ��ڷ�" );
	set( "object", ([
		"file8"    : "/open/love/obj/cloth1",
		"file1"    : "/open/killer/weapon/k_torch",
		"amount8"  : 1,
		"amount1"  : 1,
	]) );
	set( "owner", "sski" );
	set( "build", 10050 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room228",
	]) );
	set( "long", @LONG
���������һ��,���������ȫ֪��������װ��ʲô������
������һ�Ѷ�СС�̶̵�ذ��,���Ҹо������ĺ���..�㲻֪
��������Ҫ������һ��,��..ԭ������ǻ�����˲Ż��еĶ�
�������г��(moon dagger)...�㲻���������������Կ���
��..ֻ��������ò������Ƶ�..��Ϊ��Щذ���������Ե�����

LONG);
	setup();
	replace_program(ROOM);
}

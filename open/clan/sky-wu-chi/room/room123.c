inherit ROOM;
void create() {
	set( "short", "��Ľ��С��" );
	set( "object", ([
		"amount1"  : 19,
		"file1"    : "/open/fire-hole/obj/p-pill",
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10035 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room228",
		"east"      : "/open/clan/sky-wu-chi/room/room50",
	]) );
	set( "long", @LONG
�����С���ﲢû��ʲô���Ķ���...�е�ֻ��������һЩС��
��������Ҫ�����￴��ʲô�����Ļ�,Ҳ����Ҫ��ʧ����..��Ϊ����û
��������Ҫ�����Ķ���..ͻȻ���㿴����һЩװ��..�������Ƿǳ���
����..��
��ĸ����(Girl belt)����ѥ(Girl boots)��������(Girl cloak)����(Girl cloth)
��..���Ǹ����й��õ�װ����...

LONG);
	setup();
	replace_program(ROOM);
}

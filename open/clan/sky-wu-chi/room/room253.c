inherit ROOM;
void create() {
	set( "short", "[1;32m�������[0m" );
	set( "object", ([
		"file1"    : "/daemon/class/blademan/obj/ublade",
		"amount1"  : 1,
	]) );
	set( "build", 17142 );
	set( "owner", "xraistlin" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room240",
	]) );
	set( "long", @LONG
��ν ��ı��ʤ,��ı�߰� ,����ǧ�Ų���֮����
һ��������ı��ç����û�а취������Ϊ��
����ͬ���Ī�е��������Ҳ��Ҫ���ڽ�����
�����ȡǰ�˵Ľ�ѵ,��������˼��֮��
����������,�б�����,�Լ���������Ļ��,���в���
LONG);
	setup();
	replace_program(ROOM);
}

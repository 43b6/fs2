inherit ROOM;
void create() {
	set( "short", "�ƻ�԰" );
	set( "object", ([
		"amount6"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10737 );
	set( "owner", "jsa" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room200.c",
		"east"      : "/open/clan/sky-wu-chi/room/room183",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
���ظ�ܳɵĻ���������Ϸ�չ��һƬ�����Ϻ�
ɫ�Ļ�������΢������ҡҷ�ţ��Ե���ȶ��ˣ�԰�б�
ֲ��ɫ��ľ��һ���ļ���ʱ�������٣����������ر���
�񻨰��������ŵ�ܽ�ػ���Ʒ������¶���������¡���
�����ص������㵭��������¶���ᰮ����¶��ɢ��ң�
�����¡�ƫ���ڽ����µ���ҹ��ͦ��һ�����ޣ�������
������Ļ��䡣
LONG);
	setup();
	replace_program(ROOM);
}

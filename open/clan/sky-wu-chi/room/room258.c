inherit ROOM;
void create() {
	set( "short", "ҹ�ι�" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room243",
	]) );
	set( "object", ([
		"file3"    : "/open/sky/obj1/wind_emblem",
		"amount3"  : 1,
	]) );
	set( "build", 10054 );
	set( "long", @LONG
������λ�ں���С��������,������ɢ��������Ļ�����쳣ǿ�������,
ǿ��������·��γ�һ�����εķ������,�������������ͽ���,���ܵĶ�
ֲ�����ƺ����Ƿǳ��Ļ�ӭ�����͵ĵ���,ǰ���ĺ�Ӱ����һ����,����Ӱ
�ĺ�����һ��������ۼ�Ľ�����,���Ȼ�뵽ǰ����Ǵ�˵�е�ҹ�ι�,
���ǵ���Ӱ��ؾ���---ҹ�ι�����--��ǧˮ������--�����.
LONG);
	setup();
	replace_program(ROOM);
}

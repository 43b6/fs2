inherit ROOM;
void create() {
	set( "short", "�й����ռ���ѧԺ" );
	set( "light_up", 1 );
	set( "owner", "supalu" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room313",
	]) );
	set( "long", @LONG
��ֻ�ŵ��������ζ�˱Ƕ���,����һ��,�˵�ԭ���Ǹ�
����,��Ϊ�������Ǻ���,Ī�ǵ�������,�㲻�������ͷ
��һ��,����������������޷�����---������,���㷢�����˲�
�����ĵط�ʱ,ͻȻð��18����,��(������18ͭ��),
����ԥ,����ܰ�!
LONG);
	setup();
	replace_program(ROOM);
}

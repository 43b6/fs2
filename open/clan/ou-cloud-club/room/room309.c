inherit ROOM;
void create() {
	set( "short", "[1;36m���̺�[0m" );
	set( "exits", ([
		"northeast" : "/open/clan/ou-cloud-club/room/room312",
		"west"      : "/open/clan/ou-cloud-club/room/room310.c",
		"south"     : "/open/clan/ou-cloud-club/room/room308.c",
	]) );
	set( "long", @LONG
����ĺ�ˮ������ֽ��е㲻��ʹ������������ԭʼ��
��ȴ���㲻�Ծ��Ļ����ֽ�ǰ����������Ҳ����Ӧ��������
���Σ��������£���������͸��ˮ���Щ΢����֮�⣬����
����һƬ���ɲ�Ĳ��̣�ż��һСȺ������������ι���ȴ
����Ϊ���ͻȻ���ֶ��������ţ����ˣ����ǿ��ҳ��ڰɡ�
��
LONG);
	setup();
	replace_program(ROOM);
}

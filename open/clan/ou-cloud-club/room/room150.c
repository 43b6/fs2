inherit ROOM;
void create() {
	set( "short", "����԰" );
	set( "owner", "kiroro" );
	set( "light_up", 1 );
	set( "build", 10504 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room149",
		"west"      : "/open/clan/ou-cloud-club/room/room175",
	]) );
	set( "long", @LONG
  �����ǻ���Ѽ��С���ְ��ֵĵط�,�������������һ�Ŵ��İ���,��ֻ����
�����൱�Ŀ�,��Ϊ�˻���Ѽ��С��С�����Ҹ�,��ϧ����ԭ����ɱ�ֵ�־��,ת
ȥ����������С����,�ٹ�����Ԯ�ĵط�Ŭ������,���ڽ⿪�˰���û���˻��Ʈ
��֮��,��������Ŭ����������,�Ա��ܹ�����һ��¥,

LONG);
	setup();
	replace_program(ROOM);
}

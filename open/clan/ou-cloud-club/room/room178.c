inherit ROOM;
void create() {
	set( "short", "Ŵ�׼���˽�˹뷿" );
	set( "object", ([
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "light_up", 1 );
	set( "build", 10076 );
	set( "owner", "sisao" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room151",
	]) );
	set( "long", @LONG
  �����ǻ���Ѽ��С����˽�˹뷿,��ΪС���Ķ���һ�䷿���Ѿ��Ų�
����,������ͷ�������ŵĶ��ǻ���Ѽ�͸�С���Ķ���,���Ϸ���һ��
ˮ������,��С���������������,�������صط�������,������ͷ���
��һЩ���õ�װ��.
  
LONG);
	setup();
	replace_program(ROOM);
}

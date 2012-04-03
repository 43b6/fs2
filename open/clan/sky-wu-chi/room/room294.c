inherit ROOM;
void create() {
	set( "short", "���Է�" );
	set( "object", ([
		"file5"    : "/open/capital/room/king/obj/dagger1",
		"amount5"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file8"    : "/open/ping/questsfan/obj/dagger1",
		"amount10" : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/ping/questsfan/obj/dagger1",
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/capital/room/king/obj/dagger1",
		"amount2"  : 1,
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file4"    : "/open/capital/room/king/obj/dagger1",
		"file1"    : "/open/ping/questsfan/obj/dagger1",
		"amount1"  : 1,
		"file10"   : "/open/capital/room/king/obj/dagger1",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11886 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room298",
	]) );
	set( "long", @LONG
�������������ʮ����ֵ�����׼��Ҫ���ŵ�ʱ��ͻ
Ȼ�ӷ������洫��һ��������û��������ɡ�����ʱ��������
�;�����ξͻ��ȥ�ˣ��������ƿ��ŵ�ʱ��ӳ����������
�������Ļ����Լ��򵥵�װ�꣬����䷿�ӵ����˾��������
��ǰ������սս������������ʱ��û�뵽����ȴ�������ϵ�
ʮ�ֻ�ӭ��ĵ���������������ʱ�䣬���������������Ļ�
�⣬����������ѧ��������������治�٣����ڹ���һ�κܳ�
��ʱ�䣬���������������������뿪��Ѫ�۾ӡ�
LONG);
	setup();
	replace_program(ROOM);
}

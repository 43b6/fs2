inherit ROOM;
void create() {
	set( "short", "���쿪��" );
	set( "object", ([
		"file7"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount4"  : 1,
		"amount9"  : 1,
		"amount1"  : 2778,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"file9"    : "/obj/gift/lingzhi",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"file1"    : "/open/killer/obj/hate_knife",
		"file5"    : "/open/killer/obj/k_ring",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10034 );
	set( "light_up", 1 );
	set( "owner", "client" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room15",
	]) );
	set( "long", @LONG

���������������������쿪�ݣ�����������ҪΪ���쿪�ģ�������
�ͷ�޹�����������ˣ������Ϲ��������õļ��ڡ�

�������ϲ豭��С��ͭ���������⣬�Ŷ��Ҷ�д�š����ش�Ϊ�����֡���

��վ����ǰ��һ�����������ǳ�͢���ٵ��ˣ������������ϵ�
�ڶ�Ů��������ɱɱɱ��Ϊ��������˽��������Ů������֮����
�����������Ƕ�������ɣ��ѵ����Ǵ�˵�еİ���Խһ����
�������ķ���Ӧ���������ϵ��ڷ��Ŷԡ��������������
���Ŵ��˲�Ҫ�������ǵĹ�ϵ(����)?��

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "�����ƻ�" );
	set( "object", ([
		"amount2"  : 1,
		"file6"    : "/obj/gift/hobowdan",
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/capital/obj/blade2",
		"file1"    : "/obj/gift/lingzhi",
		"file7"    : "/open/poison/obj/blue_key",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
	]) );
	set( "owner", "roboo" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room206",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "long", @LONG
���������һ��[36mƮ������[0m�Ŀռ�,ֻ���ÿ�Ҫ[31m�޷�����[0m,��о���˫
�۾����ڶ����㿴,�����㻷������,��û���κζ�������,��Ȼ������
���,����[35m����[0m,�������Ҫ�������֮ʱ,���Ȼ[33m����[0m!���ָղŵ�һ��
ֻ��[37m�þ�[0m,�����������һ����.

LONG);
	setup();
	replace_program(ROOM);
}

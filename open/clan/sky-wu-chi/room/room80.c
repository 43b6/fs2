inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIG$����$HIB$��ڣ$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
	]) );
	set( "owner", "hild" );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room73",
	]) );
	set( "long", @LONG
���Ǹ������������������֮��������Ϊ�����Ĵ�����������Ϊ
Ȩ�������ӡ�ţ�������һ�������س�����ʱ������������������Ϊ��
��Ʒ����˵����������س����ڵ��������Ǵ�������һ�����������Ϲ�
�٣���֮ԭ��ս��ʯ�����ɱ����м�����׽�������������̵����ˣ�
����ǰ�ɻ��������ڵ�������֤���Լ�����̫������֮�⣬Ҳ�ǶԼҿ�
�����Կ��顣 

LONG);
	setup();
	replace_program(ROOM);
}

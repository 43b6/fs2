inherit ROOM;
void create() {
	set( "short", "$HIR$���������䡯$NOR$����ħ����ͷ������" );
	set( "object", ([
		"amount1"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"amount3"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
	]) );
	set( "light_up", 1 );
	set( "build", 10027 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room23",
	]) );
	set( "long", @LONG
˵������ͷ�ĵط����������ܵظ���࣬�ൽ������
��Ȼ˵����ħ����һ��һ�ĸ��֣������������ܵظ���ǿ
����ʵ��֮�£�Ҳ�����״򵹣�������������ൽ��˶�
�أ���ʵ�ϣ��ظ�������ר���ռ����˴�Ӯ���˺�������
��ͷ������Ϊ�ڵ���������Ҫ�������ܵظ�������Ҳ��˳
���ֶ��˼������ڿ��������ħ���������Ѵ�Ҳ���
ȥ����ĸ��֣����ԶൽҪ����������Ͳȥ�ˡ�����

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create(){
set("long",@LONG
һ�߽�����ѧ�ã�������ǽ����һ�����ң�����д�Ŷ���ġ�����ѧ�á��ĸ�
�֣��ں���������һ�����������д���ĵ����ұ�д�������ԣ��������ƽ����Ժ
�̵�ѧ���������γ̵ĵط������������ڿεĽ�ʦ�����Ǵ��������Ĵ󽫾�������
��ة��ȳ�͢��Ҫ������󳼣���ʱ�򣬻������뵽���������ľ�ʦ����һЩ����
���һ�����ϵ����Ҫ�õ�ı�Եȡ����ſ��Ա���һ�����ӣ���Ҫ�ý�����������
�����з���װ���ĵط���
LONG);
	set( "short", "$HIY$��ƽ����Ժ�� $HIC$����ѧ��$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"file10"   : "/obj/gift/xiandan",
		"file7"    : "/open/doctor/obj/curebook",
		"amount10" : 1,
		"file4"    : "/open/ping/questsfan/obj/weaponmap",
		"amount9"  : 1,
		"amount8"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"file2"    : "/open/tailong/obj/six_book",
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"amount2"  : 1,
		"file8"    : "/open/mogi/castle/obj/leave",
		"amount7"  : 1,
		"file5"    : "/open/tendo/obj/book2",
		"amount4"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire_book",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/gblade/obj/book",
	]) );
	set( "light_up", 1 );
	set( "build", 10152 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room139",
	]) );
        set("no_transmit",1);
        set("cmkroom",1);
        setup();
        replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $HIW$����ҽ®$NOR$" );
	set( "owner", "lonsan" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/fire-hole/obj/p-pill",
		"amount10" : 1,
		"file10"   : "/open/quests/snake/npc/obj/snake_gem",
		"amount1"  : 94,
		"amount2"  : 23,
		"amount5"  : 36,
		"amount9"  : 100,
		"amount6"  : 86,
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/fire-hole/obj/b-pill",
		"file9"    : "/open/fire-hole/obj/r-pill",
		"file7"    : "/open/fire-hole/obj/y-pill",
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file1"    : "/open/fire-hole/obj/w-pill",
		"amount8"  : 110,
		"amount4"  : 52,
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/fire-hole/obj/k-pill",
		"amount7"  : 2462,
		"amount3"  : 2646,
	]) );
	set( "build", 10059 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room197",
	]) );
	set( "long", @LONG

                *********************************       
                *                               *
                *        $HIY$ҽ �� �� ĸ ��$NOR$         *
                *                               *
                *********************************

һ�߽�ҽ®���Ϳ��Կ�������ļ����̽��֣����ǵ�����ΰ�����ҽ--���ӣ�
��ݰ�ٹ��˴������µ��漣��Ҳ������ҽ®��������ҽ����ּ�������Ǻڵ��׵���
�����������ƽ����գ�ֻҪ��ҽ���ˣ��ض��߾��������Σ����Զ������˴���Ȼ
�Ѿ��������еķ�ս֮������ʹ���˳����ƺ����ڴ˴�����Ҳ�ض������������
������Լ����������ҽ®����ʮ�ּ��ӣ�����һ�������Ĵ�������һ�ſ�������
���������⣬Ҳû�б�Ķ��������Ա���һ���ţ�����ֻ��ҽ®����˿��Խ�ȥ��
������ǽ��������һ���ŵİ��ۣ�����ŵ��޷���ҩ���鵤��ҩ��ҩ��������һЩ
�����ṩ�Ķ���һЩ�𾭡�
LONG);
	setup();
	replace_program(ROOM);
}

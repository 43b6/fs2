inherit ROOM;
void create() {
	set( "short", "$HIW$��$HIG$��$HIC$��$NOR$" );
	set( "owner", "freaky" );
	set( "light_up", 1 );
	set( "object", ([
		"file10"   : "/obj/gift/bingtang",
		"amount2"  : 7,
		"amount5"  : 254,
		"amount4"  : 13,
		"amount1"  : 120,
		"file5"    : "/open/fire-hole/obj/r-pill",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"file7"    : "/open/fire-hole/obj/g-pill",
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount6"  : 16,
		"amount3"  : 90,
		"file3"    : "/open/fire-hole/obj/p-pill",
		"file9"    : "/obj/gift/unknowdan",
		"file1"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 427,
		"file2"    : "/open/fire-hole/obj/w-pill",
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10022 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room87",
	]) );
	set( "long", @LONG

    ��̤���˵�,��о��������г������������͵���ƥ����,�����̺��� 
�������µĻ��߰���,������ˮ�Ķ�Ů�鳤,�屡������Ἲ����,�Լ�,ĳ 
�ִ���һ˿����ĵ����ź�,��Щ���˻س��ķḻ����,������ǰ�������� 
����ǽ�ϵĵ�,һ����������������ս,�ڱ������ޱ�Ե���������ε����� 
,�ഫ�˵�����,����ǰ����������,��һ��֮��,ն������������½��ų� 
�ľ�Ӣ����,ʹ��ħ�����������仯,�÷������Ⱦָ�˽�ļƻ�������� 
����,Ȼ���������ַ�ƽ�˾�,�������µ͵�,�����߶��ڽ���...         
                                                                 

LONG);
	setup();
	replace_program(ROOM);
}

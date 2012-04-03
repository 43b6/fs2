inherit ROOM;
void create() {
	set( "short", "�̲�Ӵ���" );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 3,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 18,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"amount4"  : 6,
		"amount10" : 1,
		"amount8"  : 1,
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file2"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 2,
	]) );
	set( "owner", "kris" );
	set( "light_up", 1 );
	set( "build", 10087 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room92",
	]) );
	set( "long", @LONG
һ�䲼�õĹ�ɫ����ķ��䣬�������԰���һ�е񹦾�ϸ��ľ��
̫ʦ�Σ������Ա��Ÿ�����һ��С���ԣ������ǰ������һ����
�Ƶ���ľ�Σ�һ����֪����ֵ��쳣�����Ǵ˾����˵����Σ���
������̲�ӵĴ����ˡ�  �����߿��Ե���ǰͥ��������������
ͨ����Ժ��
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "hild" );
	set( "object", ([
		"amount7"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 1,
		"amount1"  : 2,
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file7"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/open/soldier/obj/blood",
		"file5"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount6"  : 1,
	]) );
	set( "build", 10382 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room283",
		"east"      : "/open/clan/sky-wu-chi/room/room168.c",
	]) );
	set( "long", @LONG
�ⷿ�������һ�������а������У������������Ĵ�ʥ�޵�ʯ��������
�׻�����ȸ�����䣬���Ĵ�ʥ�޵�����λ�����˾�����һ�֣�����ĸ�
�����������Ĵ�ʥ�޺����û������һ�����ټ������Ĵ�ʥ�޵ĵ��
�������ǹ��񹤣�ԭ�������ɣȣɣ̣������ھ�����̳����Ķ�����
ֻҪӵ�и�ǿ�������������Ĵ������񣬾ͻ�û�������Ĵ����ޡ�

LONG);
	setup();
	replace_program(ROOM);
}

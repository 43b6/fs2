inherit ROOM;
void create() {
	set( "short", "$HIC$����������ӡ��$HIY$(claw)$NOR$" );
	set( "object", ([
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount8"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "light_up", 1 );
	set( "build", 11592 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG

(^^ ....ת��YYY)
��������һ����������...
��...�������ǲ����pill..��������en force�ȼ�...
��λ������������������Ļ�...�������һ��������Ԫ..
�����ƮƮȻ�ĸо�...Ч������.. hoho

���������ĵ�PART2 
(������)<--���������...���Ա߹��ݱ�������..
(MORE)<--����ֹ���۵�������...ԭ�������������..
(����)<--ѧ��Ⱥ�...������ձ���..������Խ���Ϸ(A ~ E)
(Peace)<--��������ձ���...Ʒ�ʲ���...���е�����..

                        (^^ ...��������PPP)

LONG);
	setup();
	replace_program(ROOM);
}

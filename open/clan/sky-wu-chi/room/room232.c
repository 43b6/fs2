inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "xman" );
	set( "object", ([
		"amount5"  : 1,
		"file6"    : "/open/fire-hole/obj/r-pill",
		"amount6"  : 10,
		"file9"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount8"  : 1,
		"file2"    : "/open/mogi/castle/obj/blood-water",
		"amount2"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"file7"    : "/open/doctor/pill/gnd_pill",
		"file1"    : "/open/fire-hole/obj/w-pill",
		"amount10" : 1,
		"file8"    : "/open/gblade/obj/dragon_book",
		"amount1"  : 4,
		"amount7"  : 50,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
	]) );
	set( "build", 10225 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room296",
		"west"      : "/open/clan/sky-wu-chi/room/room94",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
����������Լ��
 
�� ��:����Ө
 
������ �Ѹ��� ��ʧ�����ҵ��ڴ�����
���м� ����� �ܽ�����ϣ����˵��

˭���� �˱��� ��������������û����
���氮 �Ѽ��� �˼䱾��Ӧ��������

���ⲻ����Ϥ����ʳ� ���Ա�����������
����ʧȥ����Ц�� �����ҹµ���һ������
�������ѩδ֪���ջ�ͣ ��������Ҫ������
�ܷ��ҵ��˴˱�Ӱ ����ȫ��ƾ��֤* 

Repeat *...* 

Ը���ҵ��첻������ϧ ֻ֪����
������ ΨԸ��˿̿�������н�������
������ ������и�Լ������
��Ļ������������� ������Ϊ֤
������� ������Ϊ֤ ������� 
 

LONG);
	setup();
	replace_program(ROOM);
}

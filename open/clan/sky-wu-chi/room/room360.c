inherit ROOM;
void create() {
	set( "short", "��˪��-������" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "owner", "roboo" );
	set( "build", 10355 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room241.c",
	]) );
	set( "long", @LONG
�������ǻ���ˮ�������ɵķ����У����濴�����붫�ߵĺ�˪
��ûʲô��ͬ������׼��Ҫ��ȥ֮ʱ��ͻȻһ�������㱳������
���ٶ�֮Ѹ���������޿�����ԭ��Ϊ�����˰������������ˣ�����
�㶨��һ���ŷ���һ����Ҳû�С������������£����ǵ���â����
��һ���ŷ���ԭ����ˮ����аڷ��Ű�ֻ�������ܵľ�������  

ɱ�֩���ذӰ�ꡡ�����˩�ħצ����ɱ����ʥ�𩤻�������桡
ħ������նаԪ�顡���𵶩���޵���Ӱ�����ɽ�����ӳ������
�μҩ���΢����Ʈ�������ߩ��׻�ʷ���

LONG);
	setup();
	replace_program(ROOM);
}

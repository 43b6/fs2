inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIC$֮$NOR$��$HIM$�١�$NOR$" );
	set( "owner", "kent" );
	set( "build", 11244 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room243",
		"east"      : "/open/clan/ou-cloud-club/room/room214",
		"west"      : "/open/clan/ou-cloud-club/room/room241.c",
	]) );
	set( "long", @LONG

�����졡������ʱ�򡡡���Ҫ�ҡ�Ц��ȥ��ȥӵ��
�����ǡ��ٶ��ݵ����ᡡ���طꡡ���ʴ����㹻
��֪������Щ����Щ�ˡ�ͣ���ڡ����������첻����

��ʱ��Ĳпᡡ���᲻�ñ��������������Һ�����
�Њ������Ҹ���Ϊ����ʱ�����

�ð����ɡ��������������ǿ޹���Ҳ������������ʹշ��
����һ�졡��Ҷ����Ʈ��ǰ���Ѳ����˱������������������Ҹ���˲��

Ϊ���򿪡�ʱ��������ð����ɡ�������������ÿһ�롡�������
���㊅��ᡡ��ȥδ���������ص�����ԭ�����������
��л�����늅�ڡ��Ҹ���˲�䡡����

LONG);
	setup();
	replace_program(ROOM);
}

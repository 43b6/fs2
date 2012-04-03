inherit ROOM;
void create() {
	set( "short", "$HIC$堕$NOR$$HIG$落$NOR$$HIY$天$NOR$$HIR$使$NOR$的$HIM$浴室$NOR$" );
	set( "build", 10093 );
	set( "owner", "fsfs" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room109",
	]) );
	set( "long", @LONG

这里是$HIC$堕$NOR$$HIG$落$NOR$$HIY$天$NOR$$HIR$使$NOR$的$HIM$浴室$NOR$，这里除拥有最先进的卫浴设备之
外，还包括了$HIC$水疗$NOR$、$HIY$SPA$NOR$ 、$HIB$游泳池$NOR$等等设施，而在一旁更
堆放了$HIR$水上摩托车$NOR$、$HIY$香蕉船$NOR$、$HIC$水上快艇$NOR$等水上活动器具，
如果不是门口有标示这里是$HIM$浴室$NOR$，还真是怀疑自已是不是
走错地方了，因为这里的布置及设施简直就像是一个$HIB$水上
乐园$NOR$了。


LONG);
	setup();
	replace_program(ROOM);
}

// Room: /open/main/room/cloister.c


inherit ROOM;

void create()
{
	set("valid_startroom",1);
	set("short","���ص���");
	set("light_up",1);
	set("long", @LONG
һ�����������Ѿõľɵ��ۣ�����������ô
�����ûʣ��������Ǵ����������Ǹ��ʺ�������
�Եĺõط���

LONG
	);
	set("objects",([
	"/daemon/class/taoist/master" : 1,
		]) );
	set("exits", ([ /* sizeof() == 1 */
	"north" : __DIR__"v4",
]));

	setup();

}
